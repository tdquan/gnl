#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: qutrinh <qutrinh@student.42.fr>            +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2017/08/11 12:18:48 by qtrinh            #+#    #+#             *#
#*   Updated: 2017/08/11 12:22:04 by qtrinh           ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libft.a

CTYPES = ft_itoa.c \
		 ft_memalloc.c \
		 ft_memdel.c \
		 ft_putchar.c \
		 ft_putchar_fd.c \
		 ft_putendl.c \
		 ft_putendl_fd.c \
		 ft_putnbr.c \
		 ft_putnbr_fd.c \
		 ft_putstr.c \
		 ft_putstr_fd.c \
		 ft_strclr.c \
		 ft_strdel.c \
		 ft_strequ.c \
		 ft_striter.c \
		 ft_striteri.c \
		 ft_strjoin.c \
		 ft_strmap.c \
		 ft_strmapi.c \
		 ft_strnequ.c \
		 ft_strnew.c \
		 ft_strsplit.c \
		 ft_strsub.c \
		 ft_strtrim.c \
		 ft_lstadd.c \
		 ft_lstdel.c \
		 ft_lstdelone.c \
		 ft_lstiter.c \
		 ft_lstmap.c \
		 ft_lstnew.c \
		 ft_atoi.c \
		 ft_bzero.c \
		 ft_isalnum.c \
		 ft_isalpha.c \
		 ft_isascii.c \
		 ft_isdigit.c \
		 ft_isprint.c \
		 ft_memccpy.c \
		 ft_memchr.c \
		 ft_memcmp.c \
		 ft_memcpy.c \
		 ft_memmove.c \
		 ft_memset.c \
		 ft_strcat.c \
		 ft_strchr.c \
		 ft_strcmp.c \
		 ft_strcpy.c \
		 ft_strdup.c \
		 ft_strlcat.c \
		 ft_strlen.c \
		 ft_strncat.c \
		 ft_strncmp.c \
		 ft_strncpy.c \
		 ft_strnstr.c \
		 ft_strrchr.c \
		 ft_strstr.c \
		 ft_tolower.c \
		 ft_toupper.c

BINS = $(CTYPES:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(BINS)
	@ar rc $(NAME) $(BINS)
	@echo "\033[32mLibrary libft.a created.\033[0m"
	@ranlib $(NAME)

$(BINS): $(CTYPES)
	@gcc $(FLAGS) -I. -c $(CTYPES)
	@echo "\033[32mCompiled .c files with flags.\033[0m"

clean:
	@rm -f $(BINS)
	@echo "\033[31mBinary files deleted.\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31mLibrary file deleted.\033[0m"

re: fclean all

.PHONY: clean fclean all re
