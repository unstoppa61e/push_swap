/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index_of_largest_num_bonus.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <monoue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 06:51:22 by monoue            #+#    #+#             */
/*   Updated: 2021/03/25 15:21:08 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include "swapper_bonus.h"
#include "defs_bonus.h"
#include "libft.h"
#include "operation_bonus.h"

size_t	get_index_of_largest_num(t_num *stack)
{
	t_num	*tmp;
	size_t	index;
	size_t	ret_i;
	int		largest;
	int		current_num;

	tmp = stack;
	largest = INT_MIN;
	index = 0;
	ret_i = 0;
	while (tmp)
	{
		current_num = tmp->num;
		if (current_num >= largest)
		{
			largest = current_num;
			ret_i = index;
		}
		tmp = tmp->next;
		index++;
	}
	return (ret_i);
}
