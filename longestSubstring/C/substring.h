/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substring.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:01:03 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/09/10 05:17:26 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUBSTRING_H
# define SUBSTRING_H

# include <stdio.h>
# include <stdlib.h>

typedef struct	s_list{
	void			*ptr;
	struct s_list 	*next;
}	t_list;

int		lengthOfLongestSubstring(char *s);
int		substring(char *s, int start);
#endif

