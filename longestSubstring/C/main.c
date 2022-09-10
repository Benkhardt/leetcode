/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:02:22 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/10 05:22:46 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "substring.h"

int	main(int argc, char **argv){
	if (argc != 3)
		return -1;
	
	int length1 = substring(argv[1], atoi(argv[2]));
	int length2 = lengthOfLongestSubstring(argv[1]);
	printf("first substring starting from s[%s] substring is: %d\n", argv[2], length1);
	printf("longest substring is: %d\n", length2);
}
