/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rotation_type_and_num.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 06:49:30 by monoue            #+#    #+#             */
/*   Updated: 2021/03/23 06:49:31 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "debug.h"
#include "swapper.h"
#include "defs.h"
#include "libft.h"
#include "operation.h"

t_rotation_info	*get_rotation_type_and_num(size_t nums_num, size_t target_i)
{
	t_rotation_info	*rotation_info;
	const size_t	middle_i = nums_num / 2;

	if (target_i == 0)
		return (get_zero_rotation());
	rotation_info = malloc(sizeof(t_rotation_info));
	if (!rotation_info)
		exit(EXIT_FAILURE);
	if (target_i <= middle_i)
	{
		rotation_info->rotation_type = NORMAL;
		rotation_info->num = target_i;
	}
	else
	{
		rotation_info->rotation_type = REVERSE;
		rotation_info->num = nums_num - target_i;
	}
	return (rotation_info);
}
