/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myAtoi.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:12:53 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/18 13:28:20 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MYATOI_HPP
# define MYATOI_HPP

#include <iostream>
#include <iomanip>
#include <cmath>

class Utils{
public:
	std::string copyString(std::string s, int start);
	std::string elemSpace(std::string s);
	std::string isNeg(std::string s, bool &neg);
	std::string getDigits(std::string s);
	int transform(std::string s, int i);
	int recuv;
};

class Solution{
public:
	int myAtoi(std::string s);
	Utils util;
	bool neg;
	std::string sub;
	int rtn;
};

#endif
