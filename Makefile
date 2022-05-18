CC=gcc
FLAGS=-Wall -Wextra -Werror

SRCS_DIR=srcs/
INCS_DIR=incs/
RUN_DIR=run/

CALC_SRCS=$(addprefix $(SRCS_DIR)calc/, mathlib.c point.c rotate.c \
			vec.c utils.c)
HIT_SRCS=$(addprefix $(SRCS_DIR)hit/hit_, shape.c funclist.c color.c\
			point.c)
PROP_SRCS=$(addprefix $(SRCS_DIR)property/, color.c)
SYS_SRCS=$(addprefix $(SRCS_DIR)system/, check.c error.c free.c init.c\
			output.c read.c)
OBJT_SRCS=$(addprefix $(SRCS_DIR)object/, ray.c cam.c)
PRO_SRCS=$(addprefix $(SRCS_DIR)process/, antialias.c)

BASE_SRCS= $(HIT_SRCS) $(CALC_SRCS) $(PROP_SRCS) $(SYS_SRCS) $(OBJT_SRCS) $(PRO_SRCS)

SRCS=$(BASE_SRCS) $(addprefix $(RUN_DIR), main.c)
SRCS_T=$(BASE_SRCS) $(addprefix $(RUN_DIR), test1.c)
SRCS_T1=$(BASE_SRCS) $(addprefix $(RUN_DIR), test2.c)
SRCS_T2=$(BASE_SRCS) $(addprefix $(RUN_DIR), test3.c)

OBJS=$(SRCS:.c=.o)
OBJS_T=$(SRCS_T:.c=.o)
OBJS_T2=$(SRCS_T2:.c=.o)
OBJS_T3=$(SRCS_T3:.c=.o)

LIB_NAME = ft
LIB_DIR = ./libft/
LIB = $(LIB_DIR)lib$(LIB_NAME).a

LINK = -L$(LIB_DIR) -l$(LIB_NAME)

NAME=miniRT
TEST=test
TEST2=test2
TEST3=test3

all:$(NAME)

$(NAME): $(LIB) $(OBJS)
	$(CC) $(FLAGS) $(LINK) -I$(INCS_DIR) $(OBJS) -o $@
$(TEST):$(OBJS_T)
	$(CC) -o $@ $^ -I$(INCS_DIR)
$(TEST2): $(OBJS_T2)
	$(CC) -o $@ $^ -I$(INCS_DIR)
$(TEST3): $(OBJS_T3)
	$(CC) -o $@ $^ -I$(INCS_DIR)
%.o: %.c
	$(CC) -o $@ -c $(FLAGS) $< -I$(INCS_DIR)
$(LIB):
	make -C $(LIB_DIR) all
clean:
	rm -rf $(OBJS) $(OBJS_T) $(OBJS_T2)
fclean: clean
	make -C $(LIB_DIR) fclean
	rm -rf $(NAME) $(TEST) $(TEST2) $(TEST3)
re: fclean all
