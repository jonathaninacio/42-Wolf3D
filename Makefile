NAME = Wolf3d

CC = @clang

FLAGS = -Wall -Wextra -Werror -O3

MEM_DEBUG = -fsanitize=address

LLDB_DEBUG = -g

HEADERS = includes

SOURCES = main.c\
					button.c\
					ft_drawfloortext.c\
					ft_preptopskybox.c\
					ft_set_pos.c\
					ft_walltext.c\
					map_line.c\
					create_map.c\
					ft_expose.c\
					ft_ray_distfromhere.c\
					ft_set_texture.c\
					ft_where_do_we_go.c\
					movemask.c\
					destroy.c\
					ft_floorraycast.c\
					ft_ray_posndir.c\
					ft_skyboxrot.c\
					ft_where_sda_wall.c\
					multi_hook.c\
					destroy_array.c\
					ft_generate_image.c\
					ft_raycast.c\
					ft_skycount.c\
					ft_whichwalltext.c\
					set_color.c\
					drawpixel.c\
					ft_kdown.c\
					ft_readlen.c\
					ft_wall.c\
					key.c\
					set_kmov.c\
					ft_allsteps.c\
					ft_kup.c\
					ft_readmap.c\
					keyr.c\
					ft_animatewad.c\
					ft_optic_correc.c\
					ft_set_data.c\
					ft_wall_height.c\
					ft_badinit.c

SRCDIR = ./srcs/

SRCINC = $(addprefix $(SRCDIR),$(SOURCES))

OBJECTS = $(SRCINC:.c=.o)

LIBFTDIR = ./libft/

LIBFTH = $(LIBFTDIR)libft.a

$(NAME): $(OBJECTS)
	@make -C $(LIBFTDIR)
	@$(CC) $(FLAGS) $(LIBFTH) -o $@ $^ -I/usr/local/include -g -L/usr/local/lib -lmlx -framework OpenGL -framework AppKit
	@echo "susu $(NAME)! ca compile maggle."
	@sh data/logo.sh
	@echo "\n\n"

all: $(NAME)

%.o: %.c $(HEADERS)/$(NAME).h
	@$(CC) $(FLAGS) -I $(HEADERS) -c $< -o $@

clean:
	@rm -f $(OBJECTS)
	@make -C $(LIBFTDIR) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFTDIR) fclean

re: fclean $(NAME)

.PHONY: all, clean, fclean, re
