/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_number_100.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:48:21 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/30 10:47:37 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#define HUNDRED_CHUNK_SIZE 5

void	ft_chunk(t_dblist *pilea, t_dblist *pileb)
{
	int	tmp;
	int	i;
	int	j;
	int	k;
	int	l;

	l = pilea->length;
	i = 1;
	k = ft_find_smallest(pilea);
	while (i < HUNDRED_CHUNK_SIZE)
	{
		j = ft_find_next_smallest(pilea, k);
		k = j;
		i++;
	}
	i = 0;
	while (i < HUNDRED_CHUNK_SIZE && pilea->length > 0)
	{
		tmp = pilea->top->value;
		printf("tmp=%d j=%d length=%d\n", tmp, j, pilea->length);
		if (tmp <= j)
		{
			if (pilea->length <= 1)
			{
				ft_pb(pilea, pileb);
				return ;
			}
			ft_pb(pilea, pileb);
			i++;
		}
		else
			ft_ra(pilea);
	}
}

void	ft_hundred(t_dblist *pilea, t_dblist *pileb)
{
	ft_chunk(pilea, pileb);
	ft_chunk(pilea, pileb);
	ft_chunk(pilea, pileb);
	ft_chunk(pilea, pileb);
}

int	ft_find_index(t_dblist *pilea, int value)
{
	int		i;
	int		tmp;
	t_node	*node;

	node = pilea->top;
	tmp = pilea->top->value;
	i = 0;
	while (i != pilea->length)
	{
		if (tmp == value)
			return (i);
		if (node->next != NULL)
		{
			node = node->next;
			tmp = node->value;
		}
		i++;
	}
	return (-1);
}

int	ft_find_next_smallest(t_dblist *pilea, int smallest)
{
	t_node	*node;
	int		tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	node = pilea->top;
	tmp = INT_MAX;
	while (i < pilea->length)
	{
		if (tmp > node->value && node->value > smallest)
		{
			tmp = node->value;
			j = i;
		}
		node = node->next;
		i++;
	}
	return (tmp);
}
