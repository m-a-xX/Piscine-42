# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/18 00:21:42 by mavileo           #+#    #+#              #
#    Updated: 2019/09/18 00:25:03 by mavileo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	do-op

SRCS		=	doop.c ft_atoi.c operators.c

OBJS		=	${SRCS:.c=.o}

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS}
			gcc -o do-op ${CFLAGS} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re