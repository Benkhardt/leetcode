/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mergeTwoSortedLists.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 22:14:11 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/12 22:19:54 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode	*reverseList(struct ListNode *list){
	if (list == NULL)
		return NULL;
	struct ListNode		*rtn = NULL;
	struct ListNode		*new;

	while(list != NULL){
		new = malloc(sizeof(struct ListNode));
		new->val = list->val;
		new->next = rtn;
		rtn = new;
		list = list->next;
	}
	return (rtn);
}

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2){
	if (!list1 && !list2)
		return (NULL);
	struct ListNode	*rtn, *new;
	rtn = NULL;

	while (list1 != NULL && list2 != NULL){
		new = malloc(sizeof(struct ListNode));
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
		new = malloc(sizeof(struct ListNode));
		new->val = list1->val;
		new->next = rtn;
		rtn = new;
		list1 = list1->next;
	}
	while (list2 != NULL){
		new = malloc(sizeof(struct ListNode));
		new->val = list2->val;
		new->next = rtn;
		rtn = new;
		list2 = list2->next;
	}
	rtn = reverseList(rtn);
	return (rtn);
}