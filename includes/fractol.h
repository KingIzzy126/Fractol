/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialashqa <ialashqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:29:47 by ialashqa          #+#    #+#             */
/*   Updated: 2024/05/03 19:44:48 by ialashqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../libft/libft.h"
# include "../mlx/mlx.h"
# include <unistd.h>
# include <math.h>

typedef struct s_img
{
	void	*img_ptr;
	char	*win_ptr;
	int		bit;
	int		endian;
	int		line_len;

}			t_img;

typedef struct s_data
{
	char	*name;
	void	*mlx;
	void	*mlx_window;

	t_img	img;
}			t_data;



#endif
