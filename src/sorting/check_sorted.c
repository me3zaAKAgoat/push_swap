/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoukri <echoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:14:20 by echoukri          #+#    #+#             */
/*   Updated: 2023/05/20 01:21:54 by echoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_node *stack)
{
	t_node	*lis;

	lis = longest_increasing_subsquence(stack);
	if (ll_size(lis) == ll_size(stack))
		return (ll_clear(&lis), 1);
	return (ll_clear(&lis), 0);
}
