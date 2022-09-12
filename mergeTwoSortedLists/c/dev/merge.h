/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:45:45 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/12 21:35:06 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MERGE_H
# define MERGE_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct	ListNode {
		int val;
		struct ListNode *next;
}t_ListNode;

t_ListNode		*createList(const char *s);
void			printList(t_ListNode *list);
struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2);
t_ListNode		*reverseList(struct ListNode *list);

#endif
