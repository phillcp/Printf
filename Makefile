INCDIR	= .

SRCS	=	main.c \
			ft_printf.c \
			parsing.c \
			conversions/c_print.c \
			conversions/s_print.c \
			conversions/di_print.c \
			conversions/ux_print.c \
			conversions/diux_print_utils.c \
			conversions/p_print.c \
			conversions/p_print_utils.c \
			conversions/n_print.c \
			conversions/dih_print.c \
			conversions/uxh_print.c \
			conversions/dil_print.c \
			conversions/uxl_print.c \
			conversions/diuxl_print_utils.c \
			conversions/dill_print.c \
			conversions/uxll_print.c \
			conversions/diuxll_print_utils.c \
			conversions/f_print.c \
			conversions/f_print_utils.c
OBJS	= ${SRCS:.c=.o}

LIBDIR	= ./libft

MAKE	= make

AR		= ar rcs

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

RM		= rm -f

NAME	= libftprintf.a

.c.o:
			${CC} ${CFLAGS} -I${INCDIR} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${MAKE} -C ${LIBDIR}
			cp ${LIBDIR}/libft.a ./${NAME}
			${AR} ${NAME} ${OBJS}

bonus:		${NAME}

test:
			${CC} -Wall -Wextra main.c -L. -lftprintf -o test.out
			./test.out

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
