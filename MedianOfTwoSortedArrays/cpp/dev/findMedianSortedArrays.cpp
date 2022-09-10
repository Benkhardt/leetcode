/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findMedianSortedArrays.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:27:51 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/10 16:51:51 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "median.hpp"

double	Solution::findMedianSortedArrays(std::vector<int> nums1, std::vector<int> nums2){
	std::vector<int> c;
	double	rtn;
	bool	check;

	c = this->util.mergeArrays(nums1, nums2);
	check = this->util.isEven(c);
	if (!check)
		rtn = this->util.medianOdd(c);
	else
		rtn = this->util.medianEven(c);
	return (rtn);
}
