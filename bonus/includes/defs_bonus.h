/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defs_bonus.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <monoue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 06:33:26 by monoue            #+#    #+#             */
/*   Updated: 2021/03/25 16:27:46 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFS_H
# define DEFS_H

# define OPERATORS_NUM 11
# define INT_MAX_DIGITS	10

# define ERROR_MESSAGE "Error"
# define SUCCESS_MESSAGE "OK"
# define FAILURE_MESSAGE "KO"
# define ARG_NUM_ERROR_MESSAGE "Arg list too long"

# define ARGS_LIMIT	520

typedef enum	e_stack_type
{
	STACK_A,
	STACK_B,
	DOUBLE,

	STACKS_NUM
}				t_stack_type;

typedef struct	s_num
{
	int				num;
	struct s_num	*prev;
	struct s_num	*next;
}				t_num;

typedef struct	s_stacks
{
	t_num	*stack_a;
	t_num	*stack_b;
	bool	total_count_flag;
	bool	frame_flag;
	bool	num_in_stack_flag;
	size_t	sa_count;
	size_t	sb_count;
	size_t	ss_count;
	size_t	pa_count;
	size_t	pb_count;
	size_t	ra_count;
	size_t	rb_count;
	size_t	rr_count;
	size_t	rra_count;
	size_t	rrb_count;
	size_t	rrr_count;
	size_t	total_count;
}				t_stacks;

typedef struct	s_op_func_set
{
	char	*str;
	void	(*func)(t_num **, t_num **);
}				t_op_func_set;

typedef void	(*t_op_func)(t_stacks*, int);

typedef struct	s_op_func_set2
{
	char		*str;
	t_op_func	func;
	int			stack_type;
}				t_op_func_set2;

#endif
