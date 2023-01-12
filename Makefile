# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chris <chris@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 15:39:27 by cgodecke          #+#    #+#              #
#    Updated: 2023/01/12 17:14:49 by chris            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc
CC_FLAGS = -Wall -Wextra -Werror
AR = ar
AR_FLAGS = -crs
INFILES = 	ft_printf.c\
			ft_put_single.c\
			ft_put_str.c\
			ft_putnbr_base.c\

OBJFILES = $(INFILES:.c=.o)
BONUSFILES = 	ft_printf_bonus.c\
				ft_print_flags_bonus.c\
				

BONUSOBJFILES = $(BONUSFILES:.c=.o)

NAME = libftprintf.a

$(NAME):
	$(CC) -c $(CC_FLAGS) $(INFILES)
	$(AR)  $(AR_FLAGS) $(NAME) $(OBJFILES)

all: $(NAME)

clean:
	rm -f $(OBJFILES) $(BONUSOBJFILES)

fclean: 	clean
	rm -f $(NAME)

#bonus: 
#	$(CC) -c $(CC_FLAGS) $(BONUSFILES)
#	$(AR)  $(AR_FLAGS) $(NAME) $(BONUSOBJFILES)

re: fclean all

x: fclean
	rm -f main.o
	make
	$(CC) $(CC_FLAGS) main.c libftprintf.a libft.a -o a.out
	make clean
	rm -f main.o
.PHONY: all clean fclean bonus re x