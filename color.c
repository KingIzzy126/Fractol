/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismailalashqar <ismailalashqar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 22:53:02 by ialashqa          #+#    #+#             */
/*   Updated: 2024/06/10 02:17:12 by ismailalash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

unsigned int	get_color_blue(int iteration, t_fractol *fract)
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

unsigned int	get_color_pink(int iteration, t_fractol *fract)
{
	int	blue;
	int	green;
	int	red;

	if (iteration == fract->max_iterations)
        return 0x000000;

    red = (int)(255 * (double)iteration / fract->max_iterations);
    green = 0;
    blue = (int)(255 * (double)iteration / fract->max_iterations);

    return ((red << 16) | (green << 8) | blue);
}

unsigned int	get_color_fiesta(int iteration, t_fractol *fract)
{
	int	blue;
	int	green;
	int	red;

	if (iteration == fract->max_iterations)
		return (0x000000);
	else
	{
		blue = (iteration * iteration) % 64;
		green = (iteration * iteration) % 128;
		red = (iteration * iteration) % 255;
		return ((red << 16) | (green << 8) | blue);
	}
}

unsigned int get_color_gold(int iteration, t_fractol *fract)
{
    int red, green, blue;

    if (iteration == fract->max_iterations)
        return 0x000000;

    red = (int)(255 * (double)iteration / fract->max_iterations);
    green = (int)(215 * (double)iteration / fract->max_iterations);
    blue = (int)(0.0 * (double)iteration / fract->max_iterations);

    return ((red << 16) | (green << 8) | blue);
}

