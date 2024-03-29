/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoukri <echoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:30:01 by echoukri          #+#    #+#             */
/*   Updated: 2023/05/16 18:57:46 by echoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node	**stack_a, int should_print)
{
	int	value_to_top;
	int	size;

	size = ll_size(*stack_a);
	if (size > 1)
	{
		if (size == 2)
		{
			sa(stack_a, should_print);
			return ;
		}
		else
		{
			value_to_top = ll_pop(*stack_a);
			ll_atindex(*stack_a, size - 2)->next = NULL;
			ll_unshift(stack_a, ll_new(value_to_top));
		}
	}
	if (should_print)
		write(1, "rra\n", ft_strlen("rra\n"));
}
