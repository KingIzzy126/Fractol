/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialashqa <ialashqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:15:07 by ialashqa          #+#    #+#             */
/*   Updated: 2024/06/09 23:59:04 by ialashqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	select_julia(char **argv, t_fractol *fract)
{
	if (!argv[2])
	{
		ft_printf("Please provide a Julia argument (1, 2, or 3)\n");
		return (0);
	}
	if (ft_strcmp(argv[2], "1") == 0)
		setup_julia(fract);
	else if (ft_strcmp(argv[2], "2") == 0)
		setup_julia2(fract);
	else if (ft_strcmp(argv[2], "3") == 0)
		setup_julia3(fract);
	else
	{
		ft_printf("Invalid Julia type. Use 1, 2, or 3.\n");
		return (0);
	}
	fractol_render(fract);
	return (1);
}

int	select_fractol(int argc, char **argv, t_fractol *fract)
{
	if (argc == 2 && ft_strcmp(argv[1], "mandelbrot") == 0)
	{
		setup_mandelbrot(fract);
		fractol_render(fract);
	}
	else if (argc >= 3 && ft_strcmp(argv[1], "julia") == 0)
	{
		return (select_julia(argv, fract));
	}
	else if (argc == 2 && ft_strcmp(argv[1], "burningship") == 0)
	{
		setup_burning_ship(fract);
		fractol_render(fract);
	}
	else
	{
		ft_printf("Format: ./fractol mandelbrot or \n");
		ft_printf("./fractol julia <value_1> <value_2>\n");
		return (0);
	}
	return (1);
}
