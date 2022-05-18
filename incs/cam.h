/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cam.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakim <sakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:11:01 by sakim             #+#    #+#             */
/*   Updated: 2022/05/15 17:11:16 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAM_H

# define CAM_H

t_point	*cam_proto(double *cam, int idx);
t_vec	*cam_svec(double *cam, int idx);
#endif
