# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    addtwo.py                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 06:49:05 by dbenkhar          #+#    #+#              #
#    Updated: 2022/08/29 15:39:45 by dbenkhar         ###   ########.fr        #
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
        while l1 and l2 is not None:
            new_node = ListNode()
            new_node.next = new_lst
            new_node.val = l1.val + l2.val + hold
            hold = 0
            if new_node.val > 9:
                new_node.val = new_node.val % 10
                hold = 1
            new_lst = new_node
            l1 = l1.next
            l2 = l2.next
        while l1 is not None:
            new_node = ListNode()
            new_node.next = new_lst
            new_node.val = l1.val + hold
            hold = 0
            if new_node.val > 9:
                new_node.val = new_node.val % 10
                hold = 1
            new_lst = new_node
            l1 = l1.next
        while l2 is not None:
            new_node = ListNode()
            new_node.next = new_lst
            new_node.val = l2.val + hold
            hold = 0
            if new_node.val > 9:
                new_node.val = new_node.val % 10
                hold = 1
            new_lst = new_node
            l2 = l2.next
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
	while lst is not None:
		new = ListNode()
		new.val = lst.val
		new.next = new_lst
		new_lst = new
		lst = lst.next
	return new_lst
