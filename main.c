/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialashqa <ialashqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:39:20 by ialashqa          #+#    #+#             */
/*   Updated: 2024/04/30 18:15:14 by ialashqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int main(int argc, char **argv)
{
    if ((2 == argc && !ft_strncmp(argv[1], "mandelbrot", 10)) 
        || (4 == argc && !ft_strncmp(argv[1], "julia", 5)))
    {
     //run evrything   
    }
    else
    {
        ft_putstr_fd("Format: ./fractol mandelbrot or \n", STDERR_FILENO);
        ft_putstr_fd("./fractol julia <value_1> <value_2>\n", STDERR_FILENO);
        return (1);
    }
}
