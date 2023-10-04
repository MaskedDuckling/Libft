# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eydupray <eydupray@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/15 12:00:38 by eydupray          #+#    #+#              #
#    Updated: 2021/01/16 15:17:31 by eydupray         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
INC = libft.h
FLAGS = -Wall -Werror -Wextra

SRCS	= ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memset.c ft_strlen.c ft_strnstr.c ft_tolower.c ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strncmp.c ft_strchr.c ft_strrchr.c ft_toupper.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcat.c ft_strlcpy.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_itoa.c ft_split.c ft_strtrim.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o) 

all:	$(NAME)

$(NAME):	$(OBJS)
		ar -rcs $(NAME) $(OBJS)
		
$(OBJS):	$(SRCS) $(INC)
		$(CC) $(FLAGS) -c $(SRCS)

bonus:	$(OBJS) $(INC) $(OBJS_BONUS)
		$(CC) $(FLAGS) -c $(SRCS_BONUS)
		ar -rcs $(NAME) $(OBJS) $(OBJS_BONUS)
		
clean:	
		rm -f $(OBJS) $(OBJS_BONUS)
	
fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all bonus clean fclean re