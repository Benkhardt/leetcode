/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:23:42 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/10 13:51:01 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEDIAN_HPP
# define MEDIAN_HPP

# include <iostream>
# include <iomanip>

class Solution{
public:
	double findMedianSortedArrays(std::vector<int> nums1, std::vector<int> nums2);
};

void	mergeArrays(std::vector<int> a, std::vector<int>b, int n, int m);


#endif
