# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 12:34:41 by josfelip          #+#    #+#              #
#    Updated: 2023/08/24 14:13:50 by josfelip         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	libftprintf.a

SRCS 	=	ft_printf.c			\
			ft_printf_utils.c	\

BONUS 	=	ft_lstnew.c			\
			ft_lstadd_front.c	\
			ft_lstsize.c		\
			ft_lstlast.c		\
			ft_lstadd_back.c	\
			ft_lstdelone.c		\
			ft_lstclear.c		\
			ft_lstiter.c		\
			ft_lstmap.c			\

INCLUDES=	./

OBJS	=	${SRCS:.c=.o}

B_OBJS	=	${BONUS:.c=.o}

CC 		= clang	
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


