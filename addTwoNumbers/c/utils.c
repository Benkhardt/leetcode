/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:30:33 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/24 01:19:02 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "addTwoNumbers.h"

t_list *add_node(unsigned long long value, t_list *last){
	t_list *rtn;

	rtn = malloc(sizeof(t_list));
	if (!rtn)
		return (NULL);
	rtn->value = value;
	rtn->bot = last;
	return (rtn);
}

t_list *itol(unsigned long long sum, t_list *start){
	t_list *rtn;

	if (sum > 9){
		rtn = itol(sum / 10, start);
		rtn = add_node(sum % 10, rtn);
		return (rtn);
	}
	if (sum < 10)
		return (rtn = add_node(sum, start));
	return (NULL);
}

void print_lst(t_list *lst){
	t_list *tmp;

	tmp = lst;
	printf("output: [");
	while (tmp != NULL){
		printf("%llu", tmp->value);
		tmp = tmp->bot;
		if (tmp != NULL)
			printf(",");
	}
	printf("]\n");
}

unsigned int count_nodes(t_list *lst){
	unsigned int i = 0;
	t_list	*tmp;

	tmp = lst;
	while (tmp != NULL){
		i++;
		tmp = tmp->bot;
	}
	return (i);
}

t_list	*reverse_lst(t_list *lst){
	t_list	*tmp;
	t_list	*rtn;

	tmp = lst;
	rtn = NULL;
	while (tmp != NULL){
		rtn = add_node(tmp->value, rtn);
		tmp = tmp->bot;
	}
	return (rtn);
}

void	free_lst(t_list *lst){
	t_list	*tmp1, *tmp2;

	tmp1 = lst;
	tmp2 = lst->bot;
	while (tmp1 != NULL){
		free(tmp1);
		if (!tmp2)
			return ;
		tmp1 = tmp2;
			tmp2 = tmp1->bot;
	}
}
