/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:24:58 by leobarbo          #+#    #+#             */
/*   Updated: 2024/03/19 08:39:25 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_push *push)
{
	sort_validation(&push->stacks.stack_a, push);
	get_pivots(push);
	if (push->stacks.stack_a->size == 2)
		sa(&push->stacks.stack_a, 1);
	else if (push->stacks.stack_a->size == 3)
		sort_three(push->stacks.stack_a);
	else if (push->stacks.stack_a->size == 4)
		sort_four(push->stacks.stack_a, push->stacks.stack_b, push);
	else if (push->stacks.stack_a->size == 5)
		sort_five(push->stacks.stack_a, push->stacks.stack_b, push);
	else
		quick_sort(&push);
	sort_validation(&push->stacks.stack_a, push);
}