# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    addtwo.py                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbenkhar <dbenkhar@students.42wolfsburg.de +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 06:49:05 by dbenkhar          #+#    #+#              #
#    Updated: 2022/08/29 06:50:07 by dbenkhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Definition for singly-linked list.
class ListNode:
	def __init__(self, val=0, next=None):
		self.val = val
		self.next = next

class Solution:
    def addTwoNumbers(self, l1, l2):
        hold = 0
        new_lst = None
        tmp1 = l1
        tmp2 = l2
        while tmp1 and tmp2 is not None:
            math = tmp1.val + tmp2.val + hold
            hold = 0
            if math > 9:
                math = math % 10
                hold = 1
            new_node = ListNode()
            new_node.val = math
            new_node.next = new_lst
            new_lst = new_node
            tmp1 = tmp1.next
            tmp2 = tmp2.next
        while tmp1 is not None:
            new_node = ListNode()
            math = tmp1.val + hold
            hold = 0
            if math > 9:
                math = math % 10
                hold = 1
            new_node.val = math
            new_node.next = new_lst
            new_lst = new_node
            tmp1 = tmp1.next
        while tmp2 is not None:
            new_node = ListNode()
            math = tmp2.val + hold
            hold = 0
            if math > 9:
                math = math % 10
                hold = 1
            new_node.val = math
            new_node.next = new_lst
            new_lst = new_node
            tmp2 = tmp2.next
        if hold != 0:
            new_node = ListNode()
            new_node.val += hold
            hold = 0
            new_node.next = new_lst
            new_lst = new_node
        new_lst = swaplist(new_lst)
        return new_lst

def swaplist(lst):
	new_lst = None
	tmp = lst
	while tmp is not None:
		new = ListNode()
		new.val = tmp.val
		new.next = new_lst
		new_lst = new
		tmp = tmp.next
	return new_lst
	