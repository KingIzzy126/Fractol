/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialashqa <ialashqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:01:17 by ialashqa          #+#    #+#             */
/*   Updated: 2024/04/30 15:13:33 by ialashqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	press_key(int key, void *param)
{
	(void) param;
	ft_printf("Key pressed: %d\n", key);
	if (key == 53)
	{
		mlx_destroy_window(data->mlx, data->mlx_window);
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

int	main(void)
{
	void	*mlx;
	void	*mlx_window;

	mlx = mlx_init();
	mlx_window = mlx_new_window(mlx, 1080, 1000, "Test window");
	mlx_pixel_put(mlx, mlx_window, 250, 250, 0xFFBBBB);
	mlx_hook(mlx_window, 2, 1L << 0, press_key, NULL);
	mlx_hook(mlx_window, 6, 1L << 6, mouse, NULL);
	mlx_loop(mlx);
}
