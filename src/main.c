/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:33:16 by leobarbo          #+#    #+#             */
/*   Updated: 2024/03/11 11:25:10 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push		push;
	t_element	*tmp;


	validation(argc, argv, &push);
	stack_build(&push, argv);
	compare(&push);
	tmp = push.stacks.stack_a->first;
	while (tmp)
	{
		ft_printf("%d\n", *((int *)tmp->content));
		tmp = tmp->next;
	}
	free_stack(&push.stacks.stack_a);
	return (0);
}
