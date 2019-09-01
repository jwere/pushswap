# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwere <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/05 14:00:00 by jwere             #+#    #+#              #
#    Updated: 2018/08/24 12:52:55 by jwere            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libpushswap.a

SRC = checker_main.c ft_ilstsize.c ft_push.c ft_rr.c ft_swap_node.c	max_value.c\
	  ft_lstrev.c ft_r.c ft_rrr.c is_rule.c min_pos.c ft_arr_tolist.c ft_median.c\
	  ft_rev_rotate.c ft_s.c issorted.c min_value.c check_param.c ft_checker.c\
	  ft_p.c ft_revr.c num_pos.c spec_case.c ft_ilstdel.c ft_rotate.c\
	  ft_ss.c ft_five.c sort.c rev_sort.c

OBJ = checker_main.o ft_ilstsize.o ft_push.o ft_rr.o ft_swap_node.o max_value.o\
      ft_lstrev.o ft_r.o ft_rrr.o is_rule.o min_pos.o ft_arr_tolist.o ft_median.o\
      ft_rev_rotate.o ft_s.o issorted.o min_value.o check_param.o ft_checker.o\
      ft_p.o ft_revr.o num_pos.o spec_case.o ft_ilstdel.o ft_rotate.o\
      ft_ss.o ft_five.o sort.o rev_sort.o

all: $(NAME)

$(NAME):
	make -C libft
	gcc -Wall -Werror -Wextra $(SRC) -c -I push_swap.h
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	gcc -Wall -Werror -Wextra main.c $(NAME) libft/libft.a -o push_swap
	gcc -Wall -Werror -Wextra checker_main.c $(NAME) libft/libft.a -o checker
	rm -f $(NAME)

clean:
	make clean -C libft
	rm -f $(OBJ)

fclean: clean
	make fclean -C libft
	rm -f push_swap
	rm -f checker

re: fclean all

.PHONY: all clean fclean 
