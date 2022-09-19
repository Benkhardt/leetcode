/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:13:04 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/18 23:53:35 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myAtoi.hpp"

int main(int argc, char *argv[]){
	Solution mine;
	
	if (argc != 2){
		perror("(error -1)wrong number of arguments.. \n");
		return - 1;
	}
	mine.rtn = mine.myAtoi(argv[1]);
	std::cout << "int is: " << mine.rtn << std::endl;
	mine.rtn = atoi(argv[1]);
	std::cout << "standard- atoi int is: " << mine.rtn << std::endl;
	return 0;
}
