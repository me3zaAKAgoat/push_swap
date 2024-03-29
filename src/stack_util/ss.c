/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoukri <echoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:43:20 by echoukri          #+#    #+#             */
/*   Updated: 2023/05/09 21:43:56 by echoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_node	**stack_a, t_node	**stack_b, int should_print)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	if (should_print)
		write(1, "ss\n", ft_strlen("ss\n"));
}
