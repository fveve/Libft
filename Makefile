# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arafa <arafa@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 11:37:46 by arafa             #+#    #+#              #
#    Updated: 2023/10/14 17:53:54 by arafa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC = gcc

CFLAGS += -Wall -Werror -Wextra

SRC	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strncmp.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlen.c ft_strlcat.c ft_strlcpy.c ft_strmapi.c ft_strnstr.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

SRC2 = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c 

OBJ	=	$(SRC:.c=.o)

OBJS = $(SRC2:.c=.o)

$(NAME):	$(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus:	$(OBJ) $(OBJS)
	ar rcs $(NAME) $(OBJ) $(OBJS)

all: 
	make $(NAME)

clean:
	rm -rf $(OBJ) $(OBJS)
	
fclean:	clean
	rm -rf $(NAME)

re:	fclean $(NAME)

.PHONY: all clean fclean re