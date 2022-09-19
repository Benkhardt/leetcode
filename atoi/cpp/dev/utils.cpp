/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:13:32 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/18 18:43:54 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myAtoi.hpp"

std::string Utils::copyString(std::string s, int start){
	std::string rtn;
	while (s[start]!= '\0')
		rtn += s[start++];
	rtn += '\0';
	return rtn;
}

std::string Utils::elemSpace(std::string s){
	int i = 0;

	while (s[i] == ' ')
		i++;
	return (copyString(s, i));
}

std::string Utils::isNeg(std::string s, bool &neg){
	int i = 0;
	int negation = 0;
	
	while (s[i] == '+' || s[i] =='-'){
		if (s[i] == '+')
			negation += 2;
		else if (s[i] == '-')
			negation += 1;
		i++;
	}
	negation = negation % 2;
	if (negation)
		neg = true;
	else if (!negation)
		neg = false;
	return (copyString(s, i));
}

std::string Utils::getDigits(std::string s){
	std::string rtn;

	for (int i = 0; s[i] >= '0' && s[i] <= '9'; i++)
		rtn += s[i];
	rtn += '\0';
	return (rtn);
}

int Utils::transform(std::string s, int i){
	int rtn = 0, conv = 0;

	if (s[i + 1] != '\0'){
		this->recuv++;
		rtn += transform(s, i + 1);
	}
	conv = s[i] - '0';
	rtn = conv * pow(10,this->recuv - i);
	return (rtn);
}
