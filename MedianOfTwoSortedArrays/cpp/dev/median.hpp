/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:23:42 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/10 16:52:06 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEDIAN_HPP
# define MEDIAN_HPP

# include <vector>
# include <iostream>
# include <iomanip>

class Solution{
public:
	double findMedianSortedArrays(std::vector<int> nums1, std::vector<int> nums2);
	Utils util;
};

class Utils{
public:
	std::vector<int> mergeArrays(std::vector<int> a, std::vector<int>b);
	double	medianOdd(std::vector<int> c);
	double medianEven(std::vector<int> c);
	bool isEven(std::vector<int> c);
};

std::vector<int>	mergeArrays(std::vector<int> a, std::vector<int>b, int n, int m);


#endif
