/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:47:46 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/12 18:22:30 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "merge.h"

static int isValid(const char *s){
	for (int i = 0; s[i] != '\0'; i++)
		if (s[i] < '0' || s[i] > '9'){
			if (s[i] != ' ')
				return (0);
		}
	return (1);
}

static void	createSub(const char *s, int start, int end, char **sub){
	int	j = 0;
	
	for (; start < end; start++){
		sub[0][j] = s[start];
		j++;
	}
	sub[0][j] = '\0';
}

static void	createNode(t_ListNode **list, const char *sub){
	t_ListNode		*new;

	if (list[0] == NULL){
		list[0] = malloc(sizeof(t_ListNode));
		list[0]->val = atoi(sub);
		list[0]->next = NULL;
	}
	else{
		new = malloc(sizeof(t_ListNode));
		new->val = atoi(sub);
		new->next = list[0];
		list[0] = new;
	}
}

t_ListNode	*createList(const char *s){
	if (!isValid(s)){
		perror("Argument not valid\n");
		exit(-1);
	}
	int			hold = 0;
	char		*sub = malloc(sizeof(s));
	t_ListNode	*list = NULL;

	for (int i = 0; s[i] != '\0'; i++){
		if (s[i] == ' '){
			createSub(s, hold, i, &sub);
			createNode(&list, sub);
			sub = realloc(sub, sizeof(s));
			hold = i + 1;
		}
		else if (s[i+1] == '\0' && s[i] != ' '){
			createSub(s, hold, i + 1, &sub);
			createNode(&list, sub);
		}
	}
	free(sub);
	return (list);
}

void	printList(t_ListNode *list){
	if (!list){
		perror("something went wrong...\n");
		exit(-1);
	}
	printf("Values: ");
	while (list != NULL){
		printf("%d ", list->val);
		list = list->next;
	}
	printf("\n");
}
