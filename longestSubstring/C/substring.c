/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substring.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:00:39 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/09 21:41:20 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "substring.h"

unsigned int	strLength(char *s){
	unsigned int i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

int	substring(char *s, int start){
	int j;
	int count = 0;

	for (int i = start; s[i] != '\0'; i++){
		j = start;
		for (; j < i; j++){
			if (s[i] == s[j])
				return (count);
		}
		count++;
	}
	return (count);
}

int		lengthOfLongestSubstring(char *s){
	int	tmp, rtn;

	rtn = 0;
	tmp = 0;
	if (!s || s[0] == '\0')
		return 0;
	if (s[1] == '\0')
		return 1;
	for (int i = 0; s[i] != '\0'; i++){
		tmp = substring(s, i);
		printf("begin: s[%d], length: %d\n", i, tmp);
		if (tmp > rtn)
			rtn = tmp;
	}
	return (rtn);
}
