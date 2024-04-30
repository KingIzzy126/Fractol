/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialashqa <ialashqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:39:20 by ialashqa          #+#    #+#             */
/*   Updated: 2024/04/30 17:58:25 by ialashqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int main(int argc, char **argv)
{
    if (2 == argc && !ft_strncmp(argv[1], "mandelbrot", 10) 
        || 4 == argc && !ft_strncmp(argv[1], "julia", 5))
    {
     //run evrything   
    }
    else
    {
        ft_printf("Format: ./fractol mandelbrot or \n./fractol julia <value_1> <value_2>\n")
    }
}
