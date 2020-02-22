# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/13 20:58:39 by mavileo           #+#    #+#              #
#    Updated: 2019/09/13 21:04:47 by mavileo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

PATH_SRCS	=	./srcs/

SRCS		=	./srcs/ft_putchar.c\
				./srcs/ft_swap.c\
				./srcs/ft_putstr.c\
				./srcs/ft_strlen.c\
				./srcs/ft_strcmp.c\

INCLUDES	=	./includes

OBJS		=	${SRCS:.c=.o}

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${CC} -c ${CFLAGS} -I ${INCLUDES} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re