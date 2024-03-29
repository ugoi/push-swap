/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:40:18 by sdukic            #+#    #+#             */
/*   Updated: 2022/12/16 17:10:15 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

typedef struct s_chunks
{
	int		*chunks;
	int		length;
	int		max_length;
}	t_chunks;

typedef struct s_stack
{
	int			*stack;
	int			length;
	int			max_length;
	char		location;
	t_chunks	chunks;
}	t_stack;

//Create stack a from executable arguments.
t_stack	create_stack_a(char **argv, int max_length);

//Create empty stack b. TIPP: Normally give it the size of stack a as argument.
t_stack	create_stack_b(int max_length);

//Swap the first 2 elements at the top of stack.
//Do nothing if there is only one or no elements.
t_stack	swap(t_stack stack);

//Take the first element at the top of source stack
//and put it at the top of destination stack.
//Do nothing if source stack is empty.
void	push(t_stack *stack_src, t_stack *stack_dst);

//Sorts stack from lowest (at the top) to biggest (at the bottom).
//Attention: Bottom is at index 0 and top at the biggest index.
t_stack	sort_stack(t_stack stack_a);

t_stack	sort_big_stack(t_stack stack_a);

//Prints all elements from stack from top to bottom.
void	print_stack(t_stack stack, char message);

//Prints all elements from chunks from top to bottom.
void	print_chunks(t_chunks chunks, char message);

//Shift up all elements of the stack by 1.
//The first element becomes the last one.
t_stack	rotate(t_stack stack);

//Shift down all elements of stack a by 1.
//The last element becomes the first one
t_stack	rrotate(t_stack stack);

//Returns the median of the stack.
int		get_median(t_stack stack);

//Free the memory of split.
void	ft_free_split(char **split);

//Returns the maximum length of the stack.
int		get_max_stack_length(char **argv, int argc);

//Priints error message to stderr.
void	errprintf(char *str);

int		is_str_digit(char *str);

int		is_converted_int(char **converted_input);

int		has_duplicates(char **convert_input);

void	check_input(char **converted_input);

char	**convert_input(int argc, char *argv[]);

void	errprintf(char *str);

void	populate_chunk(t_chunks *chunks, int length);

void	populate_stack(t_stack *stack, char **argv, int argc);

int		get_max_stack_length(char **argv, int argc);

int		ft_sort_int_tab(int *tab, unsigned int size);

int		get_median(t_stack stack);

int		has_num_to_push(t_stack stack, int num);

int		is_stack_sorted(t_stack stack);

int		get_amount_of_numbers_for_next_chunk(t_stack stack, int median);

t_stack	create_new_chunk(t_stack dst);

int		rotate_till_can_push(t_stack *src, int num);

void	rotate_back(t_stack *src, int i);

int		has_num_to_push(t_stack stack, int num);

t_stack	sort_duo_chunk(t_stack stack);

void	push_chunk(t_stack *src, t_stack *dst);

t_stack	sort_small_stack_desc(t_stack stack_a);

#endif
