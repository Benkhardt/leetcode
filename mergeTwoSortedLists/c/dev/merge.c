/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:48:00 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/12 22:10:47 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "merge.h"

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2){
	if (!list1 || !list2)
		return (NULL);
	struct ListNode	*rtn, *new;
	rtn = NULL;

	while (list1 != NULL && list2 != NULL){
		new = malloc(sizeof(t_ListNode));
		if (list1->val < list2->val){
			new->val = list1->val;
			new->next = rtn;
			rtn = new;
			list1 = list1->next;
		}
		else if (list1->val >= list2->val){
			new->val = list2->val;
			new->next = rtn;
			rtn = new;
			list2 = list2->next;
		}
	}
	while (list1 != NULL){
		new = malloc(sizeof(t_ListNode));
		new->val = list1->val;
		new->next = rtn;
		rtn = new;
		list1 = list1->next;
	}
	while (list2 != NULL){
		new = malloc(sizeof(t_ListNode));
		new->val = list2->val;
		new->next = rtn;
		rtn = new;
		list2 = list2->next;
	}
	rtn = reverseList(rtn);
	return (rtn);
}
