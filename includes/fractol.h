/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialashqa <ialashqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:29:47 by ialashqa          #+#    #+#             */
/*   Updated: 2024/06/10 00:03:45 by ialashqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../libft/libft.h"
# include "../mlx/mlx.h"
# include <math.h>
# include <unistd.h>

# define HEIGHT 800
# define WIDTH 800

typedef struct s_fractol
{
	char			*name;
	void			*mlx;
	void			*win;
	void			*img;
	void			*addr;
	int				bpp;
	int				line_length;
	int				endian;
	int				max_iterations;
	double			min_real;
	double			max_real;
	double			min_imag;
	double			max_imag;
	double			zoom;
	double			center_x;
	double			center_y;
	double			move_x;
	double			move_y;
	double			c_real;
	double			c_imag;
	int				(*fractol_func)(struct s_fractol *, double, double);
	unsigned int	(*color_func)(int, struct s_fractol *);
}					t_fractol;

// render.c
int					mandelbrot_func(t_fractol *fract, double cr, double ci);
int					julia_func(t_fractol *fract, double cr, double ci);
int					burning_ship_func(t_fractol *fract, double cr, double ci);
void				get_complex_map(int x, int y, t_fractol *fract);
void				fractol_render(t_fractol *fract);

// setup_fractals.c
void				setup_mandelbrot(t_fractol *fract);
void				setup_julia(t_fractol *fract);
void				setup_julia2(t_fractol *fract);
void				setup_julia3(t_fractol *fract);
void				setup_burning_ship(t_fractol *fract);

// args.c
int					select_fractol(int argc, char **argv, t_fractol *fract);
int					select_julia(char **argv, t_fractol *fract);

// events.c
int					close_window(t_fractol *fract);
int					press_key(int key, t_fractol *fract);
int					handle_mouse(int button, int x, int y, t_fractol *fract);

// color.c
unsigned int		get_color_blue(int iteration, t_fractol *fract);
unsigned int		get_color_pink(int iteration, t_fractol *fract);
unsigned int		get_color_orange(int iteration, t_fractol *fract);

#endif
