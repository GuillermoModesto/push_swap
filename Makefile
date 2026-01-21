SRCS	= ft_printf.c ft_putchar.c ft_putstr.c ft_puthexnbr.c \
		  ft_putnbr.c ft_putunbr.c ft_putvoid.c instruct_one.c \
		  list_utils.c main.c ft_split.c parse_utils.c print_utils.c utils.c

OBJS	= $(SRCS:.c=.o)

CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -I.
DFLAGS  = -g -O0
NAME	= push_swap

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
debug: CFLAGS += $(DFLAGS)
debug: fclean $(NAME)

.PHONY: all clean fclean debug

