/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll_is_in.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoukri <echoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 23:08:21 by echoukri          #+#    #+#             */
/*   Updated: 2023/05/18 14:03:10 by echoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"
#include <stdio.h>

int	ll_is_in(t_node	*head, int value)
{
	t_node	*iterator;
	int		index;

	index = 0;
	iterator = head;
	while (iterator)
	{
		if (iterator->value == value)
			return (index);
		index++;
		iterator = iterator->next;
	}
	return (-1);
}
