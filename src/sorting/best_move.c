/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoukri <echoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:27:26 by echoukri          #+#    #+#             */
/*   Updated: 2023/05/09 20:22:36 by echoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	where_at_a(t_stacks *stacks, int value)
{
	int	i;
	int	size;

	if ((ll_min(stacks->stack_a) > value
			|| value > ll_max(stacks->stack_a)))
		return (moves_needed_to_top(stacks->stack_a, ll_min(stacks->stack_a)));
	i = 0;
	size = ll_size(stacks->stack_a);
	while (i < size)
	{
		if (ll_value_atindex(stacks->stack_a, i) < value
			&& value < ll_value_atindex(stacks->stack_a, (i + 1) % size))
			break ;
		i++;
	}
	return (moves_needed_to_top(stacks->stack_a,
			ll_value_atindex(stacks->stack_a, (i + 1) % size)));
}

void	execute_best_move_to_a(t_stacks *stacks, int bma[3])
{
	while (bma[1] < 0 && bma[2] < 0)
	{
		rrr(&stacks->stack_a, &stacks->stack_b, 1);
		bma[1]++;
		bma[2]++;
	}
	while (bma[1] > 0 && bma[2] > 0)
	{
		rr(&stacks->stack_a, &stacks->stack_b, 1);
		bma[1]--;
		bma[2]--;
	}
	rotate_n_times(&stacks->stack_a, bma[1], ra, rra);
	rotate_n_times(&stacks->stack_b, bma[2], rb, rrb);
	pa(&stacks->stack_a, &stacks->stack_b, 1);
}

int	total_moves_needed(int moves_a, int moves_b)
{
	int	count;

	count = 0;
	while ((moves_a < 0 && moves_b < 0))
	{
		moves_a++;
		moves_b++;
		count++;
	}
	while (moves_a > 0 && moves_b > 0)
	{
		moves_a--;
		moves_b--;
		count++;
	}
	count += (abs(moves_a) + abs(moves_b));
	return (count);
}

void	find_best_move_to_a(t_stacks	*stacks, int bma[3])
{
	int		tmp[3];
	t_node	*iterator;

	iterator = stacks->stack_b;
	bma[0] = iterator->value;
	bma[1] = where_at_a(stacks, iterator->value);
	bma[2] = moves_needed_to_top(stacks->stack_b, iterator->value);
	iterator = iterator->next;
	while (iterator)
	{
		tmp[0] = iterator->value;
		tmp[1] = where_at_a(stacks, iterator->value);
		tmp[2] = moves_needed_to_top(stacks->stack_b, iterator->value);
		if (total_moves_needed(tmp[1], tmp[2])
			< total_moves_needed(bma[1], bma[2]))
		{
			bma[0] = tmp[0];
			bma[1] = tmp[1];
			bma[2] = tmp[2];
		}
		iterator = iterator->next;
	}
}

int	best_move_to_a(t_stacks *stacks)
{
	int		bma[3];

	find_best_move_to_a(stacks, bma);
	execute_best_move_to_a(stacks, bma);
	return (bma[0]);
}
