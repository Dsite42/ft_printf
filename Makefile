# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chris <chris@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 15:39:27 by cgodecke          #+#    #+#              #
#    Updated: 2023/01/12 19:27:46 by chris            ###   ########.fr        #
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
				ft_put_single.c\
				ft_put_str.c\
				ft_putnbr_base.c\

OBJBONUSFILES = $(BONUSFILES:.c=.o)

LIBFTOBJFILES = libft/*.o			

BONUSOBJFILES = $(BONUSFILES:.c=.o)

NAME = libftprintf.a

$(NAME): $(OBJFILES)
	cd libft && $(MAKE)
# $(CC) -c $(CC_FLAGS) $(INFILES)
	$(AR)  $(AR_FLAGS) $(NAME) $(OBJFILES) $(LIBFTOBJFILES)

%.o: %.c
	$(CC) -c $(CC_FLAGS) $^
	
all: $(NAME)

clean:
	rm -f $(OBJFILES) $(BONUSOBJFILES)
	cd libft && $(MAKE) clean

fclean: 	clean
	rm -f $(NAME)
	cd libft && $(MAKE) fclean
	
bonus: $(OBJBONUSFILES)
	cd libft && $(MAKE)
#$(CC) -c $(CC_FLAGS) $(BONUSFILES)
	$(AR)  $(AR_FLAGS) $(NAME) $(BONUSOBJFILES) $(LIBFTOBJFILES)

re: fclean all

.PHONY: all clean fclean bonus re