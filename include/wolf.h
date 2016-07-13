#ifndef HEADER_H
# define HEADER_H

#include "../libft/includes/libft.h"
#include "../mlx/mlx.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <fcntl.h>
# define W_WIDTH 500
# define W_HEIGHT 500
# define ECS 53
# define ENTER 36
# define UP 126
# define DOWN 125
# define LEFT 123
# define RIGHT 124
# define DEZOOM 37 //78
# define ZOOM 31   //69
# define COLOR 8
# define ITER 34
# define DEITER 40
# define LOCK 7
# define RINI 15
# define MZOOM 5
# define MDEZOOM 4


typedef struct s_img
{
	char	*data;
	int		bpp;
	int		size_line;
	int		edian;
	void	*ptr;
}				t_img;

typedef struct s_env
{
	char	choose;
	void	*mlx;
	void	*win;
	char	lock;
	t_img	img;
}				t_env;


void	init(t_env *env);
void	draw(t_env *e);
int		input_key(int keycode, void *env);
int		input_expose(void *env);
#endif
