/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoukri <echoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:41:48 by echoukri          #+#    #+#             */
/*   Updated: 2023/05/09 21:43:35 by echoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_node	**stack_b, int should_print)
{
	int	tmp;

	if (ll_size(*stack_b) < 2)
		return ;
	tmp = (*ll_atindex(*stack_b, 0)).value;
	(*ll_atindex(*stack_b, 0)).value = (*ll_atindex(*stack_b, 1)).value;
	(*ll_atindex(*stack_b, 1)).value = tmp;
	if (should_print)
		write(1, "sb\n", ft_strlen("sb\n"));
}
