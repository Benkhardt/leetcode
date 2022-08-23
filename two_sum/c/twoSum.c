/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twoSum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:19:22 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/24 01:33:14 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *rtn;
    int i = -1;
    int j;
    
    rtn = malloc(sizeof(returnSize));
    if (!rtn)
        return (NULL);
    while (++i < numsSize - 1){
        j = i + 1;
        while (j < numsSize){
            if (nums[i] + nums[j] == target){
                rtn[0] = i;
                rtn[1] = j;
                return (rtn);
            }
            j++;
        }
    }
    return (NULL);
}
