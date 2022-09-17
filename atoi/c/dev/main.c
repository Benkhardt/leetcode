/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:49:49 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/14 20:29:53 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myAtoi.h"

int	main(int argc, char **argv, char *envp[]){
	if (argc != 2){
		perror("(error 1)wrong number of arguments...\n");
		return -1;
	}
	int result = myAtoi(argv[1]);
	int compare = atoi(argv[1]);
	printf("standard atoi: %d\nmyAtoi(): %d", compare, result);
	if (reult != compare){
		perror("(error 2)atoi differs from standard-atoi.\n");
		return -2;
	}
	return 0;
	
