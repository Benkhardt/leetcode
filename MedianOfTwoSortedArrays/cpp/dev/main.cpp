/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:55:49 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/11 18:12:28 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "median.hpp"
#include <string.h>

// int main(int argc, char **argv){
// 	std::vector<int>	nums1;
// 	std::vector<int>	nums2;
// 	Solution			sol;

// 	if (argc != 2){
// 		perror("wrong number of arguments.\n");
// 		return -1;
// 	}
// 	nums1 = sol.util.values(argv[1]);
// 	nums2 = sol.util.values(argv[2]);
// }

int main(void){
	//std::vector<int> c;
	std::vector<int> a;
	std::vector<int> b;
	std::vector<int> c;
	int myintsa[] = {1,2,5};
	int myintsb[] = {3,4,6};

	a.assign(myintsa, myintsa+3);
	b.assign(myintsb, myintsb+3);
	int n = a.size();
	int m = b.size();
	int myintsc[n+m]; 
	int size_c = c.size();
	std::cout << "size of a and b: " << n << " and " << m << std::endl;
	std::cout << "size of c: " << size_c << std::endl;
	c[n] = a[n - 1];
	std::cout << "value of c element 5: " << c[n] << std::endl;
	return 0;
}
