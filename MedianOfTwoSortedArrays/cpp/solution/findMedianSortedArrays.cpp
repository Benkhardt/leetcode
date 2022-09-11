/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findMedianSortedArrays.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:00:17 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/11 18:01:13 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <vector>
# include <iostream>
# include <iomanip>

using namespace std; // leetcode will auto use namespace std.

class Utils{
public:
	vector<int> mergeArrays(vector<int> &a, vector<int>&b);
	double	medianOdd(vector<int> &c);
	double medianEven(vector<int> &c);
	bool isEven(vector<int> &c);
	//std::vector<int> values(const char *s);
};

class Solution{
public:
	double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2);
	Utils util;
	double median;
};

double	Utils::medianOdd(vector<int> &c){
	int size = (int)c.size();
	double rtn;

	size = (size / 2);
	rtn = c[size];
	return (rtn);
}

double Utils::medianEven(vector<int> &c){
	double m1, m2;
	int size = (int)c.size();
	
	size = size / 2 - 1;
	m1 = (double)c[size++];
	m2 = (double)c[size];
	m2 = (m1 + m2) / 2.0;
	return (m2);
}

bool	Utils::isEven(vector<int> &c){
	int	size = (int)c.size();

	if (size % 2)
		return (false);
	else
		return (true);
}

vector<int>	Utils::mergeArrays(vector<int> &a, vector<int> &b){
	unsigned int i, j, k, n, m;
	vector<int> c;

	i = 0;
	j = 0;
	k = 0;
	n = a.size();
	m = b.size();
	c.reserve(n + m);
	merge(a.begin(), a.end(), b.begin(), b.end(), back_inserter(c));
	return (c);
}

double	Solution::findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2){
	vector<int> c;
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
