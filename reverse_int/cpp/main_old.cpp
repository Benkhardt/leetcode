/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_old.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:27:07 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/24 00:35:10 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>

// tried to use conversions along the way but leetcode compiler
// failed to grade it correct...
// leaving it for reference even tho the code isn't working no more...

class Solution{
public:
    unsigned int plus(unsigned int a, unsigned int b);
    unsigned int multi(unsigned int a, unsigned int b);
    unsigned int countDigits(unsigned int n);
    unsigned int myPow(unsigned int x, unsigned int p);
    int reverse(int x);
    bool isNeg(int &x);
    // bool checkMin(int x);
    void out(){
        std::cout << "Reverse x is: " << this->_res << std::endl;
    };
private:
    int _res;
};

unsigned int Solution::plus(unsigned a, unsigned int b){
    unsigned int max = 2147483412;

    if (a+b > max)
        return 0;
    return (a+b);
}

unsigned int Solution::multi(unsigned int a, unsigned int b){
    unsigned int max = 2147483412;

    if (a*b > max)
        return 0;
    return (a*b);
}

bool Solution::isNeg(int &x){
    if (x < 0){
        x = x * (-1);
        return true;
    }
    else
        return false;
}

// bool Solution::checkMin(int x){
//     if (x == -2147483412){
//         return true;
//     }
//     else
//         return false;
// }

unsigned int Solution::myPow(unsigned int x, unsigned int p){
    if (p == 0) return 1;
    if (p == 1) return x;

    int tmp = myPow(x, p/2);
    if (p%2 == 0) 
        return (multi(tmp, tmp));
    else 
        return multi(x, multi(tmp, tmp));
}

unsigned int Solution::countDigits(unsigned int n){
    unsigned count = 0;
    while(n != 0)
    {
        n = n / 10;
        count++;
    }
return count;
}

int Solution::reverse(int y) {
    bool neg = isNeg(y);
    unsigned int x = (unsigned int)y;
    unsigned int dez = countDigits(x) - 1;
    unsigned int res = 0;
    unsigned int tmp = 0;
    int rtn = 0;

    while (x)
    {
        tmp = x % 10;
        if (tmp != 0)
        {
            tmp = multi(tmp, myPow(10, dez));
            if (tmp == 0)
            {
                this->_res = 0;
                return 0;
            }
            res = plus(res, tmp);
        }
        x = x / 10;
        dez--;
    }
    if (neg){
        if (y == 2147483412)
            return (-2147483412);
        rtn = (int)y;
        return (rtn * (-1));
    }
    this->_res = res;
    return res;
}

int main(void){
    Solution revert;
    revert.reverse(1534236469);
    revert.out();
    return 0;
}
