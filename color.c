/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialashqa <ialashqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 22:53:02 by ialashqa          #+#    #+#             */
/*   Updated: 2024/06/10 00:07:42 by ialashqa         ###   ########.fr       */
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
		return (0x000000);
	else
	{
		blue = (iteration * iteration) % 256;
		green = 0;
		red = (iteration * iteration) % 256;
		return ((red << 16) | (green << 8) | blue);
	}
}

unsigned int	get_color_orange(int iteration, t_fractol *fract)
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
