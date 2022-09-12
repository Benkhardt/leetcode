/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:48:02 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/12 20:54:47 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "merge.h"

int main(int argc, char **argv){
	if (argc != 3){
		perror("wrong number of arguments!\n");
		return -1;
	}
	t_ListNode	*l1 = createList(argv[1]);
	t_ListNode	*l2 = createList(argv[2]);
	printList(l1);
	reverseList(&l1);
	printList(l1);
	return 0;
}
