/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_one_hundred_or_less.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 06:51:22 by monoue            #+#    #+#             */
/*   Updated: 2021/03/23 14:13:01 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "swapper.h"
#include "defs.h"
#include "libft.h"
#include "operation.h"

static void		set_chunk_max_nums(int chunk_max_nums[], size_t chunks_num,
											int sorted_array[], size_t nums_num)
{
	size_t	chunk_size;
	size_t	dst_i;

	dst_i = 0;
	chunk_size = get_chunk_size(nums_num);
	if (chunks_num > 1)
	{
		while (dst_i < chunks_num - 1)
		{
			chunk_max_nums[dst_i] = sorted_array[chunk_size * (dst_i + 1) - 1];
			dst_i++;
		}
	}
	chunk_max_nums[dst_i] = sorted_array[nums_num - 1];
}

static size_t	get_chunks_num(size_t nums_num)
{
	const size_t	chunk_size = get_chunk_size(nums_num);

	return (nums_num / chunk_size + (nums_num % chunk_size > 0));
}

void			exec2(t_num **stack_a, size_t nums_num,
															int sorted_array[])
{
	const size_t	chunks_num = get_chunks_num(nums_num);
	int				chunk_max_nums[chunks_num];
	t_num			*stack_b;
	size_t			index;

	set_chunk_max_nums(chunk_max_nums, chunks_num, sorted_array, nums_num);
	stack_b = NULL;
	index = 0;
	while (index < chunks_num)
	{
		deal_chunk_range(stack_a, &stack_b, chunk_max_nums, index);
		index++;
	}
	while (lstsize(stack_b))
		exec_and_put_operation(stack_a, &stack_b, push_designated, STACK_A);
	lstdel(stack_b);
}
