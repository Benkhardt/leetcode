/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:53:29 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/12 16:43:23 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "merge.hpp"

static ListNode *createList(const char *s){
	if (!s)
		return (NULL);
	t_ListNode	*head;
	std::string s;

	for (int i = 0; s[i] != '\0'; i++){
		if (s[i] == ' ')
			
	}
}

int main(int argc, char *argv[]){
	if (argc != 2){
		perror("worng numer of arguments\n");
		return (-1);
	}
	
}
