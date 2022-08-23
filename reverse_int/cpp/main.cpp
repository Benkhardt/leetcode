/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 23:52:37 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/23 23:54:51 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reverse.hpp"

int main(int argc, char **argv){
	if (argc != 2)
		return (-1);
	int x = atoi(argv[1]);
	Solution rev;
	int reversed = rev.reverse(x);
	// std::cout << "reverse x is " << reversed << std::endl;
	return (reversed);
}
