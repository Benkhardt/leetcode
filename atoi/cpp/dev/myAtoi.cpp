/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myAtoi.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:13:16 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/18 13:27:52 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "myAtoi.hpp"

int Solution::myAtoi(std::string s){
	this->util.recuv = 0;
	this->sub = this->util.elemSpace(s) ;
	this->sub = this->util.isNeg(this->sub, this->neg);
	this->sub = this->util.getDigits(this->sub);
	this->rtn = this->util.transform(this->sub, 0);
	return (this->rtn);
}
