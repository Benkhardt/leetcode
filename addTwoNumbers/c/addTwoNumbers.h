/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addTwoNumbers.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:27:18 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/24 01:24:48 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADDTWONUMBERS_H
# define ADDTWONUMBERS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct	s_list{
	unsigned long long value;
	struct s_list *bot;
}	t_list;

t_list			*addTwoNumbers(t_list *l1, t_list *l2);

t_list			*add_node(unsigned long long value, t_list *last);
t_list			*itol(unsigned long long sum, t_list *start); //  not needed for goal
void			print_lst(t_list *lst); // not needed for goal
unsigned int 	count_nodes(t_list *lst);
t_list			*reverse_lst(t_list *lst);
void			free_lst(t_list *lst); // not needed for goal

#endif
