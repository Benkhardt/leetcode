/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 06:06:25 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/10 06:13:39 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "median.hpp"

void mergeArrays(std::vector<int> arr1, std::vector<int> arr2, int n1, int n2, std::vector<int> &arr3)
{
int i = 0;
int j = 0;
int k = 0;

    while (i < n1 && j < n2)
    {

        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    // Store remaining elements of first array
    while (i < n1)
        arr3[k++] = arr1[i++];

    // Store remaining elements of second array
    while (j < n2)
        arr3[k++] = arr2[j++];
}
