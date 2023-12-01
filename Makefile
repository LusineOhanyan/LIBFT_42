# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lohanyan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 19:28:13 by lohanyan          #+#    #+#              #
#    Updated: 2023/03/13 14:49:46 by lohanyan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC			= cc

CFLAGS		= -Wall -Wextra -Werror

RM			=  rm -f

SRCS		= $(wildcard *.c)

SRCSB		= $(wildcard ft_lst*.c)

FILTER		= $(filter-out $(SRCSB), $(SRCS))

OBJS		= $(patsubst %.c, %.o, $(FILTER))

OBJSB		= $(patsubst %.c, %.o, $(SRCSB))

%.o:%.c
			$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS) $(OBJSB)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

bonus:		$(OBJSB)
			ar rcs $(NAME) $(OBJSB)

.PHONY:		all clean fclean re bonus

