/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialashqa <ialashqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:38:08 by ialashqa          #+#    #+#             */
/*   Updated: 2024/06/03 14:57:24 by ialashqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	main(int argc, char **argv)
{
	t_fractol	*fract;

	fract = (t_fractol *)malloc(sizeof(t_fractol));
	if (!fract)
		return (0);
	if (!select_fractol(argc, argv, fract))
		return (1);
	mlx_hook(fract->win, 2, 1L << 0, press_key, fract);
	mlx_hook(fract->win, 17, 1L << 17, close_window, fract);
	mlx_mouse_hook(fract->win, handle_mouse, fract);
	mlx_loop(fract->mlx);
	return (0);
}
