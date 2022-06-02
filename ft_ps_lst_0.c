/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_lst_0.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:10:16 by ide-spir          #+#    #+#             */
/*   Updated: 2022/06/02 10:31:02 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps_list	*ft_ps_lstnew(int content)
{
	t_ps_list	*ret;

	ret = (t_ps_list *)malloc(sizeof(t_ps_list));
	if (!ret)
		exit(15);
	ret->next = NULL;
	ret->prev = NULL;
	ret->content = content;
	return (ret);
}

t_ps_list	ft_ps_lstadd_front(t_ps_list **lst, t_ps_list *new)
{
	if (*lst)
	{
		new->next = *lst;
		new->prev = NULL;
		(*lst)->prev = new;
		*lst = new;
	}
	else
	{
		new->prev = NULL;
		*lst = new;
	}
}

int	ft_p_lstsize(t_ps_list *lst)
{
	int			i;
	t_ps_list	*tmp;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

t_ps_list	*ft_ps_lstlast(t_ps_list *lst)
{
	t_ps_list	*tmp;

	tmp = lst;
	while (tmp && tmp->next)
		tmp = tmp->next;
	return (tmp);
}

void	ft_ps_lstadd_back(t_ps_list **lst, t_ps_list *new)
{
	t_ps_list	*last;

	if (!new)
		exit(15);
	if (*lst)
	{
		last = ft_ps_lstlast(*lst);
		new->next = NULL;
		last->next = new;
		new->prev = last;
	}
	else
	{
		new->next = NULL;
		new->prev = NULL;
		*lst = new;
	}
}
