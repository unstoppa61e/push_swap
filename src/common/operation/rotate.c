/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:21:59 by monoue            #+#    #+#             */
/*   Updated: 2021/03/23 13:11:17 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

static void	rotate(t_num **num_list)
{
	int	tmp;

	if (lstsize(*num_list) < 2)
		return ;
	tmp = (*num_list)->num;
	lstdel_front(num_list);
	lstadd_back(num_list, lstnew(tmp));
}

void		rotate_a(t_num **stack_a, t_num **stack_b)
{
	(void)stack_b;
	rotate(stack_a);
}

void		rotate_b(t_num **stack_a, t_num **stack_b)
{
	(void)stack_a;
	rotate(stack_b);
}

void		rotate_double(t_num **stack_a, t_num **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}

void		rotate_designated(t_num **stack_a, t_num **stack_b, int stack_type)
{
	if (stack_type == STACK_A)
		rotate_a(stack_a, stack_b);
	else if (stack_type == STACK_B)
		rotate_b(stack_a, stack_b);
	else if (stack_type == DOUBLE)
		rotate_double(stack_a, stack_b);
}
