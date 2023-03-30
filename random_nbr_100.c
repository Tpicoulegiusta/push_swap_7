/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_nbr_100.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 02:28:45 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/29 11:57:44 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "push_swap.h"

t_dblist	*ft_hundred(t_dblist *pilea, t_dblist *pileb)
{
	int	i;

	i = 5;
	while (pilea->length && i > 0)
	{
		printf("pileb->length=%d pilea->length=%d i=%d calc=%d\n", pileb->length, pilea->length, i, (pilea->length / i));
		while (pileb->length != pilea->length / i)
		{
			if (ft_chunks(pilea) == -1 && ft_chunks_2(pilea) == -1)
			{
				write(1, "caca\n", 5);
				break ;
			}
			if (ft_chunks(pilea) <= ft_chunks_2(pilea))
				ft_moove(pilea, pileb);
			if (ft_chunks(pilea) <= ft_chunks_2(pilea))
				ft_moove_2(pilea, pileb);
		}
		i--;
	}
	return (pilea);
}

int	ft_chunks(t_dblist *pilea)
{
	int		i;
	int		j;
	int		tmp;
	t_node	*node;

	i = 0;
	j = pilea->length;
	node = pilea->top;
	tmp = pilea->top->value;
	while (i < pilea->length - 1)
	{
		if (tmp <= j / 5)
			return (i);
		tmp = node->next->value;
		node = node->next;
		i++;
	}
	return (-1);
}

int	ft_chunks_2(t_dblist *pilea)
{
	int		i;
	int		j;
	int		tmp;
	t_node	*node;

	i = 0;
	j = pilea->length;
	node = pilea->bot;
	tmp = pilea->bot->value;
	while (i < pilea->length - 1)
	{
		if (tmp <= j / 5)
			return (i);
		tmp = node->prev->value;
		node = node->prev;
		i++;
	}
	return (-1);
}

void	ft_moove(t_dblist *pilea, t_dblist *pileb)
{
	int	i;

	i = ft_chunks(pilea);
	while (i > 0)
	{
		ft_ra(pilea);
		i--;
	}
	if (i != -1)
		ft_pb(pilea, pileb);
	if (i == -1)
		return ;
}

void	ft_moove_2(t_dblist *pilea, t_dblist *pileb)
{
	int	i;
	int	j;

	j = 0;
	i = ft_chunks_2(pilea);
	while (i >= 0)
	{
		ft_rra(pilea);
		i--;
		j++;
	}
	if (i != -1)
		ft_pb(pilea, pileb);
	if (j > 0)
		ft_pb(pilea, pileb);
	if (i == -1)
		return ;
}
 */