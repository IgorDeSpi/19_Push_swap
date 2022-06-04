/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:30:03 by ide-spir          #+#    #+#             */
/*   Updated: 2022/06/03 15:57:56 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static int	partition(int *arr, int low, int high)
{
	int	switcher;
	int	i;
	int	j;

	switcher = arr[high];
	i = (low - 1);
	j = low;
	while (j <= high - 1)
	{
		if (arr[j] <= switcher)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
		j++;
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

static void	quicksort(int *arr, int low, int high)
{
	int	sw;

	if (low < high)
	{
		sw = partition(arr, low, high);
		quicksort(arr, low, sw - 1);
		quicksort(arr, sw + 1, high);
	}
}

int	*sort_stack(t_ps_list *s)
{
	int	*k;
	int	i;

	k = malloc(sizeof(int) * ft_p_lstsize(s));
	if (!k)
		exit(1);
	i = 0;
	while (s)
	{
		k[i++] = s->content;
		s = s->next;
	}
	quicksort(k, 0, i - 1);
	return (k);
}
