# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 10:51:35 by tburlacu          #+#    #+#              #
#    Updated: 2022/11/14 16:40:34 by tburlacu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_printf_hexa.c 
					
OBJS			= $(SRCS:.c=.o)
INCLUDE 		= include
CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.
LIBFT			= libft
NAME			= libftprintf.a

DEFAULT = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS)
				ar rcs $(NAME) $(OBJS)

.PHONY:			all clean fclean re bonus