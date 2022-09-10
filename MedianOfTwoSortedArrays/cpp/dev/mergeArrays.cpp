/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mergeArrays.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:42:43 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/10 16:52:04 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "median.hpp"

double	Utils::medianOdd(std::vector<int> c){
	int size = (int)c.size();
	double rtn;

	size = (size / 2) + 1;
	rtn = (double)size;
	return (rtn);
}

double Utils::medianEven(std::vector<int> c){
	double m1, m2;
	int size = (int)c.size();
	
	size = size / 2;
	m1 = (double)c[size++];
	m2 = (double)c[size];
	m2 = (m1 + m2) / 2.0;
	return (m2);
}

bool	Utils::isEven(std::vector<int> c){
	int	size = (int)c.size();

	if (size % 2)
		return (false);
	else
		return (true);
}

std::vector<int>	Utils::mergeArrays(std::vector<int> a, std::vector<int> b){
	int i, j, k, n, m;
	std::vector<int> c;

	i = 0;
	j = 0;
	k = 0;
	n = (int)a.size();
	m = (int)b.size();

	while (i < n && j < m){
		if (a[i] < b[j])
			c[k++] = a[i++];
		else
			c[k++] = b[j++];
	}
	while (i < n)
		c[k++] = a[i++];
	while (j < m)
		c[k++] = b[j++];
	return (c);
}
