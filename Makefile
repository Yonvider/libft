# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jorge <jorge@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/24 15:50:54 by jhuerta-          #+#    #+#              #
#    Updated: 2023/11/23 20:30:06 by jorge            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c
	
BONUS = ft_lstadd_back_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstmap_bonus.c \
		ft_lstnew_bonus.c \
		ft_lstsize_bonus.c
		
OBJ = $(SRC:.c=.o) #para generar los .o de los .c de SCR
OBJ_BONUS = $(BONUS:.c=.o) #para generar los .o de los .c de BONUS

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f #para borrar los .o
#reglas
all: $(NAME) #se ejecuta por defecto al hacer make

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) #usa ar rcs para crear la libreria con los .o de SRC

bonus: $(OBJ) $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ #esta regla sirve para pasar los .c a .o con el compilador y los flags

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all #se usa para reconstruir el proyecto, borra todo y lo vuelve a crear

.PHONY: all clean fclean re bonus name #son los comandos que se pueden ejecutar con make