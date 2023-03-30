/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:56:56 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/30 10:51:29 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int			i;
	t_dblist	*pilea;
	t_dblist	*pileb;

	if (argc <= 1)
		return (write(1, "Error\n", 6));
	if (ft_check_args_3(argv) != 0)
		return (write(1, "Error\n", 6));
	if (ft_check_args(argv) != 0)
		return (write(1, "Error\n", 6));
	if (ft_check_args_2(argc, argv) != 0)
		return (write(1, "Error\n", 6));
	//if (ft_check_args_4(argv) != 0)
	//	return (write(1, "Error\n", 6));
	i = 1;
	pilea = dlist_new();
	pileb = dlist_new();
	while (argv[i])
	{
		pilea = ft_add_bot(pilea, ft_atoi(argv[i]));
		i++;
	}
	if (argc == 3)
		ft_two(pilea);
	if (argc == 4)
		ft_tree(pilea);
	if (argc == 5 || argc == 6)
		ft_five(pilea, pileb);
	ft_print_pile(pilea);
	printf("\n pilea \n\n\n");
	ft_print_pile(pileb);
	printf("\n pileb \n\n\n");
	//instru
	printf("smallest=%d\n", ft_find_smallest(pilea));
	printf("next smallest=%d\n", ft_find_next_smallest(pilea, ft_find_smallest(pilea)));
	printf("find index result =====> %d\n", ft_find_index(pilea, 77));
	//ft_hundred(pilea, pileb);
 	ft_pb(pilea, pileb);
	ft_pb(pilea, pileb);
	ft_pb(pilea, pileb);
	ft_pb(pilea, pileb);
	ft_pb(pilea, pileb);
	ft_pb(pilea, pileb);
 	ft_pb(pilea, pileb);
	ft_pb(pilea, pileb);
	ft_pb(pilea, pileb);
	ft_pb(pilea, pileb);
	ft_pb(pilea, pileb);
	ft_pb(pilea, pileb);
	ft_pb(pilea, pileb);
	ft_pb(pilea, pileb);
	ft_pb(pilea, pileb);
	ft_pb(pilea, pileb);
	ft_pb(pilea, pileb);
	ft_pb(pilea, pileb);
	ft_pb(pilea, pileb);
	//printf("pilea->length=%d\n", pilea->length);
	printf("\n===========after algo==========\n\n");
	//printf("pilea->length=%d\n", pilea->length);
	//ft_print_pile(pilea);
	printf("\n pilea\n\n\n");
	ft_print_pile(pileb);
	printf("\n pileb\n\n\n");

	return (0);
}
