# **************************************************************************** #
#																			  #
#														 :::	  ::::::::	#
#	Makefile										   :+:	  :+:	:+:	#
#													 +:+ +:+		 +:+	  #
#	By: spiccini <spiccini@student.42sp.org.br>	+#+  +:+	   +#+		 #
#												 +#+#+#+#+#+   +#+			#
#	Created: 2020/04/30 15:00:28 by spiccini		  #+#	#+#			  #
#	Updated: 2020/04/30 15:00:28 by spiccini		 ###   ########.fr		#
#																			  #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memcpy.c ft_memset.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
		ft_memmove.c ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isprint.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_tolower.c \
		ft_toupper.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		ft_bzero.c ft_calloc.c ft_isascii.c ft_isdigit.c ft_strchr.c \
		ft_strdup.c ft_strnstr.c ft_strrchr.c ft_itoa.c ft_putendl_fd.c \
		ft_split.c ft_strjoin.c ft_substr.c ft_strmapi.c ft_strtrim.c

OBJ = ft_memcpy.o ft_memset.o ft_memccpy.o ft_memchr.o ft_memcmp.o \
		ft_memmove.o ft_atoi.o ft_isalnum.o ft_isalpha.o ft_isprint.o \
		ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o ft_tolower.o \
		ft_toupper.o ft_putchar_fd.o ft_putnbr_fd.o ft_putstr_fd.o \
		ft_bzero.o ft_calloc.o ft_isascii.o ft_isdigit.o ft_strchr.o \
		ft_strdup.o ft_strnstr.o ft_strrchr.o ft_itoa.o ft_putendl_fd.o \
		ft_split.o ft_strjoin.o ft_substr.o ft_strmapi.o ft_strtrim.o

FLAGS = -Wall -Werror -Wextra

OPTIONS = -c

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) $(OPTIONS) $(SRC) && ar rc $(NAME) $(OBJ)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
