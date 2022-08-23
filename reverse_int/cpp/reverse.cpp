/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 23:52:44 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/24 00:05:49 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reverse.hpp"

int Solution::reverse(int x){
	do_rev *list = NULL;
	do_rev *tmp = NULL;
	std::string nbrs;

	while (x != 0){
		tmp = list;
		list = new do_rev;
		list->nbr = x % 10;
		list->next = tmp;
		x = x / 10;
	}
	list->call();
	std::cout << std::endl;
	list->check(nbrs);
	std::cout << nbrs << std::endl;
	return 0;
}
