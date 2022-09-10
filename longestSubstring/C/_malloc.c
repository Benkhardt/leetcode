/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _malloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:04:06 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/09 13:04:40 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "substring.h"

void	free_list(t_list *last)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (last == NULL)
		return ;
	tmp1 = last;
	while (tmp1 != NULL)
	{
		tmp2 = tmp1->next;
		free(tmp1->ptr);
		free(tmp1);
		tmp1 = tmp2;
	}
}

t_list	*malloc_list(void *ptr, t_list *last)
{
	t_list	*rtn;

	rtn = malloc(sizeof(t_list));
	if (!rtn)
		return (NULL);
	rtn->ptr = ptr;
	rtn->next = last;
	return (rtn);
}

void	*my_malloc(size_t size, t_list *last)
{
	void 	*rtn;

	rtn = malloc(size);
	if (!rtn)
		return (NULL);
	last = malloc_list(rtn, last);
	return (rtn);
}
