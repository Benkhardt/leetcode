/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_int.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:21:40 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/09 12:55:38 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REV_INT_HPP
# define REV_INT_HPP

# include <iostream>
# include <limits>

// class List{
// 	Node *top;
// public:
// 	List(){top = NULL;};
// 	List itol();
// };

class Node{
	Node	*next;
	int		value;
	bool	neg;

public:
	Node(){
		this->next = NULL; this->value = 0; this->neg = false;};
	~Node();
	Node	*itol(int number);
	void	printlst();
	void	rev_lst();
	void	free_lst();
};

class Solution {
public:
    int reverse(int x) {
        
    }
};


#endif