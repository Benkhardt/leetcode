/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:37:17 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/11 20:51:15 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MERGE_HPP
# define MERGE_HPP

# include <iostream>
# include <iomanip>
# include <string.h>

using namespace std;

typedef struct ListNode{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
}	t_ListNode;

class Solution{
public:
	t_ListNode	*mergeTwoLists(t_ListNode *list1, t_ListNode *list2);
};

#endif
