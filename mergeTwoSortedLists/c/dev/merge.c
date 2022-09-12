/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:48:00 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/12 20:52:45 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "merge.h"

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2){
	if (!list1 || !list2)
		return (NULL);
	struct ListNode	list;

	list.next = NULL;
	list.val = 0;
	reverseList(&list1);
	reverseList(&list2);
}
