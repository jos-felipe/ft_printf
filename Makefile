# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 12:34:41 by josfelip          #+#    #+#              #
#    Updated: 2023/08/30 14:07:22 by josfelip         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	libftprintf.a

SRCS 	=	ft_printf.c				\
			ft_printf_utils.c		\

BONUS 	=	ft_printf_bonus.c		\
			ft_printf_utils_bonus.c	\

INCLUDES=	./

OBJS	=	${SRCS:.c=.o}

B_OBJS	=	${BONUS:.c=.o}

CC 		= cc	
CFLAGS 	= -Wall -Wextra -Werror
RM 		= rm -f

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -I${INCLUDES} -c $< -o $@

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

clean:
	${RM} ${OBJS} ${B_OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

bonus: ${OBJS} ${B_OBJS}
	ar rc ${NAME} ${OBJS} ${B_OBJS}

.PHONY: all clean fclean re bonus


