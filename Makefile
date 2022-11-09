NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

LIB = ar -rc

RM = rm -rf

SRC =	ft_hexadd.c   \
 		ft_hexlow.c   \
  		ft_hexupr.c   \
   		ft_putchar.c  \
   		ft_putnbr.c   \
    	ft_putstr.c   \
		ft_unsids.c   \
	 	ft_printf.c 

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(LIB) $(NAME) $(OBJS)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)
	
re : fclean all
