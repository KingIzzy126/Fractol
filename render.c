/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialashqa <ialashqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:09:46 by ialashqa          #+#    #+#             */
/*   Updated: 2024/06/03 11:41:40 by ialashqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	mandelbrot_func(t_fractol *fract, double cr, double ci)
{
	double	zr;
	double	zi;
	double	temp;
	int		iter;

	zr = 0.0;
	zi = 0.0;
	iter = 0;
	while (zr * zr + zi * zi < 4 && iter < fract->max_iterations)
	{
		temp = zr * zr - zi * zi + cr;
		zi = 2 * zr * zi + ci;
		zr = temp;
		iter++;
	}
	return (iter);
}

int	julia_func(t_fractol *fract, double cr, double ci)
{
	double	zr;
	double	zi;
	int		iter;
	double	temp;

	zr = cr;
	zi = ci;
	iter = 0;
	while (zr * zr + zi * zi < 4 && iter < fract->max_iterations)
	{
		temp = zr * zr - zi * zi + fract->c_real;
		zi = 2 * zr * zi + fract->c_imag;
		zr = temp;
		iter++;
	}
	return (iter);
}

unsigned int	get_color(int iteration, t_fractol *fract)
{
	int	blue;
	int	green;
	int	red;

	if (iteration == fract->max_iterations)
		return (0x000000);
	else
	{
		blue = (iteration * iteration) % 256;
        green = (iteration * iteration) % 256;
		red = 0;
		return ((red << 16) | (green << 8) | blue);
	}
}

void	get_complex_map(int x, int y, t_fractol *fract)
{
	double			cr;
	double			ci;
	int				iter;
	unsigned int	color;
	int				pos;

	cr = fract->min_real + (x / (double)WIDTH) * (fract->max_real - fract->min_real) / fract->zoom + fract->center_x;
	ci = fract->min_imag + (y / (double)HEIGHT) * (fract->max_imag - fract->min_imag) / fract->zoom + fract->center_y;
	iter = fract->fractol_func(fract, cr, ci);
	color = fract->color_func(iter, fract);
	pos = y * fract->line_length + x * (fract->bpp / 8);
	*(unsigned int *)(fract->addr + pos) = color;
}

void	fractol_render(t_fractol *fract)
{
	int	x;
	int	y;

	y = 0;
	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			get_complex_map(x, y, fract);
			x++;
		}
		y++;
	}
	mlx_put_image_to_window(fract->mlx, fract->win, fract->img, 0, 0);
}
