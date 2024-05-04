/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphic.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialashqa <ialashqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:00:01 by ialashqa          #+#    #+#             */
/*   Updated: 2024/05/04 18:38:08 by ialashqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	press_key(int key, void *param)
{
	t_data	data;

	(void) param;
	ft_printf("Key pressed: %d\n", key);
	if (key == 53)
	{
		mlx_destroy_window(data.mlx, data.mlx_window);
		exit(0);
	}
	return (0);
}

int	mouse(int x, int y, void *param)
{
	(void) param;
	ft_printf("Mouse is at (%d, %d)\n", x, y);
	return (0);
}

int	close_window(void *param)
{
	t_data	data;

	(void) param;
	mlx_destroy_window(data.mlx, data.mlx_window);
	free(data.mlx);
	exit(0);
}

void	graphic_setup(void)
{
	t_data	data;

	data.mlx = mlx_init();
	data.mlx_window = mlx_new_window(data.mlx, 800, 800, data.name);
	mlx_key_hook(data.mlx_window, press_key, NULL);
	mlx_hook(data.mlx_window, 6, 1L << 6, mouse, NULL);
	mlx_hook(data.mlx_window, 17, 1L << 17, close_window, NULL);
	data.img.img_ptr = mlx_new_image(data.mlx, 800, 800);
	data.img.win_ptr = mlx_get_data_addr(data.img.img_ptr, &data.img.bit, &data.img.line_len, &data.img.endian);
	mlx_loop(data.mlx);
}
