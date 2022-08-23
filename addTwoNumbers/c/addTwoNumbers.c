/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addTwoNumbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:27:20 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/24 00:36:37 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "addTwoNumbers.h"

t_list	*addTwoNumbers(t_list *l1, t_list *l2){
	t_list *lst, *tmp1, *tmp2, *rtn;
	unsigned int deci = 0;
	unsigned int cl1, cl2;
	unsigned long long n_val;

	if (!l1 || !l2)
		return (NULL);
	lst = NULL;
	cl1 = count_nodes(l1);
	cl2 = count_nodes(l2);
	tmp1 = l1;
	tmp2 = l2;
	if (cl1 > cl2){
		while (tmp2 != NULL){
			n_val = tmp1->value + tmp2->value;
			if (deci){
				n_val++;
				deci = 0;
			}
			if (n_val > 9){
				n_val = n_val % 10;
				deci++;
			}
			lst = add_node(n_val, lst);
			tmp1 = tmp1->bot;
			tmp2 = tmp2->bot;
		}
		if (!tmp1 && !tmp2 && deci){
			lst = add_node(deci, lst);
			deci = 0;
		}
		while (tmp1 != NULL){
			n_val = tmp1->value;
			if (deci){
				n_val++;
				deci = 0;
			}
			if (n_val > 9){
				deci++;
				n_val = n_val % 10;
			}
			lst = add_node(n_val, lst);
			tmp1 = tmp1->bot;
		}
	}
	else if (cl2 >= cl1){
		while (tmp1 != NULL){
			n_val = tmp1->value + tmp2->value;
			if (deci){
				n_val++;
				deci = 0;
			}
			if (n_val > 9){
				n_val = n_val % 10;
				deci++;
			}
			lst = add_node(n_val, lst);
			tmp1 = tmp1->bot;
			tmp2 = tmp2->bot;
		}
		if (!tmp1 && !tmp2 && deci){
			lst = add_node(deci, lst);
			deci = 0;
		}
		while (tmp2 != NULL){
			n_val = tmp2->value;
			if (deci){
				n_val++;
				deci = 0;
			}
			if (n_val > 9){
				deci++;
				n_val = n_val % 10;
			}
			lst = add_node(n_val, lst);
			tmp2 = tmp2->bot;
		}
	}
	if (deci)
		lst = add_node(deci, lst);
	rtn = reverse_lst(lst);
	free_lst(lst);
	return (rtn);
}

// t_list *addTwoNumbers(t_list *l1, t_list *l2){
//     t_list *rtn;
//     unsigned long long val1, val2, sum;
    
//     val1 = read_lst(l1);
//     val2 = read_lst(l2);
// 	sum = val1 + val2;
// 	rtn = itol(sum, NULL);
// 	if (!rtn)
// 		return (NULL);
// 	return (rtn);
// }

// t_list *addTwoNumbers(t_list *l1, t_list *l2){
//     t_list *rtn;
//     unsigned long long val1, val2, sum;
    
//     val1 = read_lst(l1);
//     val2 = read_lst(l2);
// 	sum = val1 + val2;
// 	rtn = itol(sum, NULL);
// 	if (!rtn)
// 		return (NULL);
// 	return (rtn);
// }
