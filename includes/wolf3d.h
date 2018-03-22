/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 03:03:46 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 23:48:46 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H
# define WOLF3D_H

# include "../libft/libft.h"
# include "/usr/local/include/mlx.h"
# include <libc.h>
# include <math.h>

# define WINSIZX 800
# define WINSIZY 600

# define KEY_UP 13
# define KEY_DOWN 1
# define KEY_LEFT 0
# define KEY_RIGHT 2
# define KEY_ESC 53

typedef	struct	s_data
{
	char					**charmap;
	int						lines;
	int						len;
	int						**worldmap;
	void					*mlx;
	void					*win;
	int						move_x;
	int						move_y;
	int						color;
	unsigned char			red;
	unsigned char			gre;
	unsigned char			blu;
	void					*imgbg;
	int						*modifiable;
	void					*weapon;
	char					weapontrig;
	int						weaponanim;
	int						lvlx;
	int						lvly;
	double					posx;
	double					posy;
	double					dirx;
	double					diry;
	double					planex;
	double					planey;
	double					visionx;
	double					rayposx;
	double					rayposy;
	double					raydirx;
	double					raydiry;
	double					sidedistx;
	double					sidedisty;
	double					deltadistx;
	double					deltadisty;
	double					wallhdist;
	double					stepx;
	double					stepy;
	char					hitawall;
	char					side;
	int						lineheight;
	int						drawstart;
	int						drawend;
	char					kup;
	char					kdown;
	char					kleft;
	char					kright;
	int						walkmotion;
	char					boolwalk;
	double					movespeed;
	double					rotspeed;
	double					olddirx;
	double					oldplanex;
	void					*text;
	int						*textm;
	void					*text2;
	int						*text2m;
	void					*text3;
	int						*text3m;
	void					*text4;
	int						*text4m;
	void					*text42;
	int						*text42m;
	int						textw;
	int						texth;
	int						textx;
	int						texty;
	double					wallx;
	void					*skybox;
	int						skyboxcount;
	int						skyboxw;
	int						rotskybox;
	double					floorxwall;
	double					floorywall;
	double					distplayer;
	double					currentdist;
	double					weight;
	double					currentfloorx;
	double					currentfloory;
	int						floortexx;
	int						floortexy;
	void					*floortext;
	int						*floortextm;
	int						ftextw;
	int						ftexth;
}				t_data;

int				button(int click, int x, int y, t_data *z);
int				**create_map(t_data *z);
void			destroy_array(char **str);
int				destroy(t_data *z);
void			drawpixel(t_data *z, int x, int y, int color);
void			ft_allsteps(int x, t_data *z);
void			ft_animatewad2(t_data *z);
void			ft_animatewad(t_data *z);
void			ft_drawfloortext(int x, t_data *z);
int				ft_expose(t_data *z);
void			ft_floorraycast(t_data *z);
void			ft_generate_image(t_data *z);
void			ft_kdown2(t_data *z);
void			ft_kdown(t_data *z);
void			ft_kup2(t_data *z);
void			ft_kup(t_data *z);
void			ft_optic_correc(t_data *z);
void			ft_preptopskybox(int x, t_data *z);
void			ft_ray_distfromhere(t_data *z);
void			ft_ray_posndir(int x, t_data *z);
int				ft_raycast(t_data *z);
int				ft_readlen(char *wolfmap);
void			ft_readmap(t_data *z);
void			ft_set_data(t_data *z);
void			ft_set_pos(t_data *z);
void			ft_set_texture(t_data *z);
void			ft_skyboxrot(t_data *z);
void			ft_skycount(t_data *z);
void			ft_wall_height(t_data *z);
void			ft_wall(int x, t_data *z, int *textm);
void			ft_walltext(t_data *z);
void			ft_where_do_we_go(t_data *z);
void			ft_where_sda_wall(t_data *z);
void			ft_whichwalltext(int x, t_data *z);
int				key(int keycode, t_data *z);
int				keyr(int keycode, t_data *z);
int				*map_line(char *str);
void			movemask2(t_data *z);
void			movemask3(t_data *z);
void			movemask4(t_data *z);
int				movemask(t_data *z);
void			multi_hook(t_data *z);
int				set_color(unsigned char a, unsigned char r, \
					unsigned char v, unsigned char b);
void			set_kmov(t_data *z);
void			ft_badinit(void);

#endif
