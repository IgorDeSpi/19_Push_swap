/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_lst_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:25:00 by ide-spir          #+#    #+#             */
/*   Updated: 2022/06/03 15:18:13 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ps_lstdelone(t_ps_list *lst)
{
	if (!lst)
		return ;
	free(lst);
}

void	ft_ps_lstclear(t_ps_list **lst)
{
	t_ps_list	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		ft_ps_lstdelone(tmp);
	}
}

void	ft_ps_lstiter(t_ps_list *lst, void (*f)(int))
{
	t_ps_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}

void	ft_ps_lstdelfront(t_ps_list **lst)
{
	t_ps_list	*tmp;

	if (!lst || !*lst)
		return ;
	tmp = *lst;
	*lst = (*lst)->next;
	if (*lst)
		(*lst)->prev = NULL;
	ft_ps_lstdelone(tmp);
}

void	ft_ps_lstiter_back(t_ps_list *lst, void (*f)(int))
{
	t_ps_list	*tmp;

	tmp = ft_ps_lstlast(lst);
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->prev;
	}
}
