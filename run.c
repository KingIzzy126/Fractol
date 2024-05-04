/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialashqa <ialashqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:59:53 by ialashqa          #+#    #+#             */
/*   Updated: 2024/05/03 19:46:02 by ialashqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int main(int argc, char **argv)
{
    t_data  data;
    if ((2 == argc && !ft_strncmp(argv[1], "mandelbrot", 10)) 
        || (4 == argc && !ft_strncmp(argv[1], "julia", 5)))
    {
        data.name = argv[1];
    }
    else
    {
        ft_putstr_fd("Format: ./fractol mandelbrot or \n", STDERR_FILENO);
        ft_putstr_fd("./fractol julia <value_1> <value_2>\n", STDERR_FILENO);
        return (1);
    }
}
