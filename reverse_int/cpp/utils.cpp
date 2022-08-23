/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 23:52:47 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/24 00:03:56 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reverse.hpp"

void do_rev::call(){
	do_rev *next;
	
	if (this->next != NULL){
		next = this->next;
		next->call();
		std::cout << this->nbr;
		return ;
	}
	std::cout << this->nbr;
}

void do_rev::check(std::string &nbrs){
	do_rev *next;

	if (this->next != NULL){
		next = this->next;
		next->check(nbrs);
		nbrs += ('0' + this->nbr);
		return ;
	}
	nbrs += ('0' + this->nbr);
}