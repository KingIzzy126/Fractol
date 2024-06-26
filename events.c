/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialashqa <ialashqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:58:21 by ialashqa          #+#    #+#             */
/*   Updated: 2024/06/12 13:46:27 by ialashqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	close_window(t_fractol *fract)
{
	mlx_destroy_image(fract->mlx, fract->img);
	mlx_destroy_window(fract->mlx, fract->win);
	free(fract);
	exit(EXIT_SUCCESS);
}

int	press_key(int key, t_fractol *fract)
{
	double	shift_amount;

	shift_amount = 0.1 / fract->zoom;
	if (key == 53)
		close_window(fract);
	else if (key == 123)
		fract->center_x -= shift_amount;
	else if (key == 124)
		fract->center_x += shift_amount;
	else if (key == 126)
		fract->center_y -= shift_amount;
	else if (key == 125)
		fract->center_y += shift_amount;
	else if (key == 18)
		fract->color_func = get_color_blue;
	else if (key == 19)
		fract->color_func = get_color_pink;
	else if (key == 21)
		fract->color_func = get_color_gold;
	else if (key == 20)
		fract->color_func = get_color_fiesta;
	else if (key == 15)
		reset_fractal_center(fract);
	fractol_render(fract);
	return (0);
}

int	handle_mouse(int button, int x, int y, t_fractol *fract)
{
	if (button == 4)
	{
		fract->center_x += (x - WIDTH / 2) / (WIDTH * fract->zoom);
		fract->center_y += (y - WIDTH / 2) / (WIDTH * fract->zoom);
		fract->zoom *= 1.1;
	}
	else if (button == 5)
	{
		fract->center_x -= (x - WIDTH / 2) / (WIDTH * fract->zoom);
		fract->center_y -= (y - WIDTH / 2) / (WIDTH * fract->zoom);
		fract->zoom /= 1.3;
	}
	fractol_render(fract);
	return (0);
}

void	reset_fractal_center(t_fractol *fract)
{
	fract->center_x = 0.0;
	fract->center_y = 0.0;
	fractol_render(fract);
}
