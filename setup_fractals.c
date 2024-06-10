/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_fractals.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismailalashqar <ismailalashqar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 19:30:24 by ialashqa          #+#    #+#             */
/*   Updated: 2024/06/10 01:52:33 by ismailalash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	setup_mandelbrot(t_fractol *fract)
{
	fract->max_iterations = 100;
	fract->min_real = -2.0;
	fract->max_real = 1.0;
	fract->min_imag = -1.2;
	fract->max_imag = 1.2;
	fract->zoom = 1.0;
	fract->center_x = 0.0;
	fract->center_y = 0.0;
	fract->move_x = 0.0;
	fract->move_y = 0.0;
	fract->fractol_func = mandelbrot_func;
	fract->color_func = get_color_blue;
	fract->mlx = mlx_init();
	fract->win = mlx_new_window(fract->mlx, WIDTH, HEIGHT, "Mandelbrot");
	fract->img = mlx_new_image(fract->mlx, WIDTH, HEIGHT);
	fract->addr = mlx_get_data_addr(fract->img, &fract->bpp,
			&fract->line_length, &fract->endian);
}

void	setup_julia(t_fractol *fract)
{
	fract->max_iterations = 100;
	fract->min_real = -2.0;
	fract->max_real = 2.0;
	fract->min_imag = -1.2;
	fract->max_imag = 1.2;
	fract->zoom = 1.0;
	fract->center_x = 0.0;
	fract->center_y = 0.0;
	fract->move_x = 0.0;
	fract->move_y = 0.0;
	fract->fractol_func = julia_func;
	fract->color_func = get_color_blue;
	fract->c_real = -0.8;
	fract->c_imag = 0.156;
	fract->mlx = mlx_init();
	fract->win = mlx_new_window(fract->mlx, WIDTH, HEIGHT, "Julia set 1");
	fract->img = mlx_new_image(fract->mlx, WIDTH, HEIGHT);
	fract->addr = mlx_get_data_addr(fract->img, &fract->bpp,
			&fract->line_length, &fract->endian);
}

void	setup_julia2(t_fractol *fract)
{
	fract->max_iterations = 100;
	fract->min_real = -2.0;
	fract->max_real = 2.0;
	fract->min_imag = -1.2;
	fract->max_imag = 1.2;
	fract->zoom = 1.0;
	fract->center_x = 0.0;
	fract->center_y = 0.0;
	fract->move_x = 0.0;
	fract->move_y = 0.0;
	fract->fractol_func = julia_func;
	fract->color_func = get_color_blue;
	fract->c_real = -0.70176;
	fract->c_imag = -0.3842;
	fract->mlx = mlx_init();
	fract->win = mlx_new_window(fract->mlx, WIDTH, HEIGHT, "Julia set 2");
	fract->img = mlx_new_image(fract->mlx, WIDTH, HEIGHT);
	fract->addr = mlx_get_data_addr(fract->img, &fract->bpp,
			&fract->line_length, &fract->endian);
}

void	setup_julia3(t_fractol *fract)
{
	fract->max_iterations = 100;
	fract->min_real = -2.0;
	fract->max_real = 2.0;
	fract->min_imag = -1.2;
	fract->max_imag = 1.2;
	fract->zoom = 1.0;
	fract->center_x = 0.0;
	fract->center_y = 0.0;
	fract->move_x = 0.0;
	fract->move_y = 0.0;
	fract->fractol_func = julia_func;
	fract->color_func = get_color_blue;
	fract->c_real = 0.35;
	fract->c_imag = 0.35;
	fract->mlx = mlx_init();
	fract->win = mlx_new_window(fract->mlx, WIDTH, HEIGHT, "Julia set 3");
	fract->img = mlx_new_image(fract->mlx, WIDTH, HEIGHT);
	fract->addr = mlx_get_data_addr(fract->img, &fract->bpp,
			&fract->line_length, &fract->endian);
}

void	setup_burning_ship(t_fractol *fract)
{
	fract->max_iterations = 250;
	fract->min_real = -2.0;
	fract->max_real = 2.0;
	fract->min_imag = -2.0;
	fract->max_imag = 1.0;
	fract->zoom = 1.0;
	fract->center_x = 0.0;
	fract->center_y = 0.0;
	fract->move_x = 0.0;
	fract->move_y = 0.0;
	fract->fractol_func = burning_ship_func;
	fract->color_func = get_color_blue;
	fract->mlx = mlx_init();
	fract->win = mlx_new_window(fract->mlx, WIDTH, HEIGHT, "Burning Ship");
	fract->img = mlx_new_image(fract->mlx, WIDTH, HEIGHT);
	fract->addr = mlx_get_data_addr(fract->img, &fract->bpp,
			&fract->line_length, &fract->endian);
}
