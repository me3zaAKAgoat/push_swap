/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoukri <echoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:41:48 by echoukri          #+#    #+#             */
/*   Updated: 2023/05/09 21:43:12 by echoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node	**stack_a, int should_print)
{
	int	tmp;

	if (ll_size(*stack_a) < 2)
		return ;
	tmp = (*ll_atindex(*stack_a, 0)).value;
	(*ll_atindex(*stack_a, 0)).value = (*ll_atindex(*stack_a, 1)).value;
	(*ll_atindex(*stack_a, 1)).value = tmp;
	if (should_print)
		write(1, "sa\n", ft_strlen("sa\n"));
}
