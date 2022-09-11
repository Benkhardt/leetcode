/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:23:42 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/11 16:29:15 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEDIAN_HPP
# define MEDIAN_HPP

# include <vector>
# include <iostream>
# include <iomanip>
# include <string.h>

class Utils{
public:
	std::vector<int> mergeArrays(std::vector<int> a, std::vector<int>b);
	double	medianOdd(std::vector<int> c);
	double medianEven(std::vector<int> c);
	bool isEven(std::vector<int> c);
	//std::vector<int> values(const char *s); not the best idea... elements are from -10^6 - 10^6
};

class Solution{
public:
	double findMedianSortedArrays(std::vector<int> nums1, std::vector<int> nums2);
	Utils util;
	double median;
};

std::vector<int>	mergeArrays(std::vector<int> a, std::vector<int>b, int n, int m);

#endif
