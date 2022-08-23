/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 01:03:34 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/24 01:27:42 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "addTwoNumbers.h"

int	main(int argc, char **argv){
	if (argc != 3){
		perror("usage: .\\addTwo <arg1> <arg2> \nArgs must be type of int");
		return (-1);
	}
	int a, b;
	t_list *lst_a, *lst_b, *lst_c;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	lst_a = itol(a, NULL);
	lst_b = itol(b, NULL);
	print_lst(lst_a);
	print_lst(lst_b);
	lst_c = addTwoNumbers(lst_a, lst_b);
	print_lst(lst_c);
	free_lst(lst_a);
	free_lst(lst_b);
	free_lst(lst_c);
	return (0);
}
