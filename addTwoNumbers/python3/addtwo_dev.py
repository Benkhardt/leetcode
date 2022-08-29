# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    addtwo.py                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbenkhar <dbenkhar@students.42wolfsburg.de +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/28 22:13:39 by dbenkhar          #+#    #+#              #
#    Updated: 2022/08/29 06:23:18 by dbenkhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next


class Node:
	def __init__(self,value=0, next=None):
		self.value = value
		self.next = next

class linkedlist:
	def __init__(self, head=None):
		self.head = head

	def listprint(self):
		tmp = self.head
		while tmp is not None:
			print (tmp.value, end='')
			tmp = tmp.next

class Solution:
	def addTwoNumbers(self, l1: linkedlist, l2: linkedlist):
		hold = 0
		new_lst = linkedlist()
		tmp1 = l1.head
		tmp2 = l2.head
		while tmp1 and tmp2 is not None:
			math = tmp1.value + tmp2.value + hold
			hold = 0
			if math > 9:
				math = math % 10
				hold = 1
			new_node = Node()
			new_node.value = math
			new_node.next = new_lst.head
			new_lst.head = new_node
			tmp1 = tmp1.next
			tmp2 = tmp2.next
		while tmp1 is not None:
			new_node = Node()
			math = tmp1.value + hold
			hold = 0
			if math > 9:
				math = math % 10
				hold = 1
			new_node.value = math
			new_node.next = new_lst.head
			new_lst.head = new_node
			tmp1 = tmp1.next
		while tmp2 is not None:
			new_node = Node()
			math = tmp2.value + hold
			hold = 0
			if math > 9:
				math = math % 10
				hold = 1
			new_node.value = math
			new_node.next = new_lst.head
			new_lst.head = new_node
			tmp2 = tmp2.next
		if hold != 0:
			new_node = Node()
			new_node.value += hold
			hold = 0
			new_node.next = new_lst.head
			new_lst.head = new_node
		new_lst = swaplist(new_lst)
		return new_lst
			

def itol(number):
	lst = linkedlist()

	while number:
		new = Node()
		new.value = number % 10
		number = int(number / 10)
		new.next = lst.head
		lst.head = new
	lst = swaplist(lst)				# need for leetcode.com
	return lst

def swaplist(lst):
	new_lst = linkedlist()
	tmp = lst.head
	while tmp is not None:
		new = Node()
		new.value = tmp.value
		new.next = new_lst.head
		new_lst.head = new
		tmp = tmp.next
	return new_lst

e1 = itol(99999)
e2 = itol(999)
e3 = Solution.addTwoNumbers(0, e1, e2)
# e1.listprint()
# e1 = swaplist(e1)
e3.listprint()
	