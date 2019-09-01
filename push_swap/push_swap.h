/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 11:45:02 by jwere             #+#    #+#             */
/*   Updated: 2018/08/24 12:02:34 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct		s_ilist
{
	int				data;
	struct s_ilist	*next;
}					t_ilist;

typedef struct		s_point
{
	int				even;
	int				m;
	int				n;
	int				p;
}					t_point;

t_ilist				*ft_arr_tolist(char **arr);
void				ok_ko(t_ilist *a, t_ilist *b);
void				ft_ilstdel(t_ilist **lst);
void				ft_swap_node(t_ilist **alst);
void				ft_push(t_ilist **from, t_ilist **to);
void				ft_rotate(t_ilist **alst);
void				ft_rev_rotate(t_ilist **alst);
void				ft_s(t_ilist **alist, char stack);
void				ft_ss(t_ilist **a, t_ilist **b);
void				ft_r(t_ilist **alst, char stack);
void				ft_rr(t_ilist **a, t_ilist **b);
void				ft_p(t_ilist **a, t_ilist **b, char stack);
void				ft_revr(t_ilist **alst, char stack);
void				ft_rrr(t_ilist **a, t_ilist **b);
size_t				ft_ilstsize(t_ilist *list);
int					issorted(t_ilist *lst);
int					check_str(char *str);
int					is_overflow(char *str);
int					min_value(t_ilist *lst);
int					max_value(t_ilist *lst);
int					ft_strisnum(char *str);
void				push_swap(t_ilist **a, t_ilist **b);
void				ft_arraydel(char **arr);
int					min_pos(t_ilist *lst, int min);
int					num_pos(t_ilist *lst, int min);
void				ft_sort(t_ilist **alst, t_ilist **b, int q);
int					ft_median(t_ilist *lst, int num, int den);
void				ft_ilstrev(t_ilist **alst);
char				**get_rule(int i);
int					is_rule(char *av);
int					ft_checker(t_ilist **alst, t_ilist **b);
int					check_param(char **l_a);
void				sort_three(t_ilist **a, t_ilist **b);
int					pos(t_ilist *lst, int m, int n, int p);
void				ft_five(t_ilist **alst, t_ilist **b);
void				rev_sort(t_ilist **alst, t_ilist **b);
void				sort(t_ilist **a, t_ilist **b);
void				delete_all(char **arr, t_ilist **alst, t_ilist **b);

#endif
