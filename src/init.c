/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:27:14 by ide-spir          #+#    #+#             */
/*   Updated: 2022/06/03 15:18:13 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(0);
}

int	init_push(int count, char **value, t_push *push)
{
	char	**splitted;
	int		i;
	int		j;

	i = 0;
	while (++i < count)
	{
		splitted = ft_split(value[i], ' ');
		j = -1;
		while (splitted && splitted[++j])
			ft_ps_lstadd_back(&(push->a), ft_ps_lstnew(ft_atoi(splitted[j])));
		free_splitted(splitted);
	}
	check_duplicate(push->a);
	return (1);
}

void	check_duplicate(t_ps_list *s)
{
	int			i;
	t_ps_list	*tmp1;
	t_ps_list	*tmp2;

	tmp1 = s;
	i = 0;
	while (tmp1)
	{
		tmp2 = s;
		i = 0;
		while (tmp2)
		{
			if (tmp1->content == tmp2->content)
				i++;
			if (i > 1)
				error();
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
}
