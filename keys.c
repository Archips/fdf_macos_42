/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:27:22 by athirion          #+#    #+#             */
/*   Updated: 2022/01/15 13:07:32 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_deal_key(int key, t_data *data)
{
	if (key == 53)
		ft_close(data);
	if (key == 1 || key == 13 | key == 0 || key == 2)
		ft_offset(key, data);
	if (key == 43 || key == 47)
		ft_altitude(key, data);
	if (key == 27 || key == 24)
		ft_scale(key, data);
	if (key == 126 || key == 125 || key == 123 || key == 124
		|| key == 41 || key == 39)
		ft_rotate(key, data);
	if (key == 49)
		ft_change_view(data);
	if (key == 15)
		ft_reset_map(data);
	if (key == 8)
		ft_change_color(data);
//	mlx_destroy_image(data->mlx_ptr, data->img_ptr);
//	ft_draw_map(data);
//	ft_init_menu(data, file);

}

int	handle_no_event(void *data)
{
	(void)data;
	return (0);
}
