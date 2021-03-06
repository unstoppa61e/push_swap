/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <monoue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:44:08 by monoue            #+#    #+#             */
/*   Updated: 2021/03/29 07:44:18 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include "defs.h"

void	put_result(t_num *stack_a, bool stack_b_is_empty, size_t nums_num,
															char **nums_strs);
void	read_and_exec_operations(t_stacks *stacks);

#endif
