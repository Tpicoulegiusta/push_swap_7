/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instrct_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:31:17 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/21 17:07:52 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_dblist *pilea)
{
	if (!pilea)
		return ;
	ft_add_top(pilea, pilea->bot->value);
	ft_del_bot_list(pilea);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_dblist *pileb)
{
	if (!pileb)
		return ;
	ft_add_top(pileb, pileb->bot->value);
	ft_del_bot_list(pileb);
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_dblist *pilea, t_dblist *pileb)
{
	if (!pilea || !pileb)
		return ;
	ft_add_top(pilea, pilea->bot->value);
	ft_del_bot_list(pilea);
	ft_add_top(pileb, pileb->bot->value);
	ft_del_bot_list(pileb);
	write(1, "rrr\n", 4);
}

void	ft_ss(t_node *a, t_node *b, t_node *c, t_node *d)
{
	int	tmp;
	int	tmp2;

	if (!a || !b)
		return ;
	tmp = a->value;
	a->value = b->value;
	b->value = tmp;
	if (!c || !d)
		return ;
	tmp2 = c->value;
	c->value = d->value;
	d->value = tmp2;
	write(1, "ss\n", 3);
}
