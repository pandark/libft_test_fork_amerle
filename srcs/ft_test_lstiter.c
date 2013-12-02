/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_lstiter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <amerle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 04:10:01 by amerle            #+#    #+#             */
/*   Updated: 2013/12/02 06:02:08 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	ft_test_lstiter_iter(t_list *elem)
{
	int	*ptr;

	if (elem)
	{
		ptr = (int *)elem->content;
		*ptr += 1;
	}
}

int	ft_test_lstiter(void)
{
	int		res;
	int		i1;
	int		i2;
	t_list	*elem;
	t_list	*elem2;
	int		*tmp1;
	int		*tmp2;

	res = 0;
	i1 = 150;
	i2 = -130;
	ft_print_begin("ft_lstiter");
	elem = (t_list*)malloc(sizeof(t_list));
	elem2 = (t_list*)malloc(sizeof(t_list));
	elem->next = elem2;
	elem->content = (void *)&i1;
	elem->content_size = elem2->content_size = sizeof(int);
	elem2->content = (void *)&i2;
	elem2->content_size = elem2->content_size = sizeof(int);
	elem2->next = NULL;;
	ft_lstiter(elem, ft_test_lstiter_iter);
	tmp1 = (int *) elem->content;
	tmp2 = (int *) elem2->content;
	if (*tmp1 != 151)
	{
		printf("*(elem->content) (%d) != (151)\n", *tmp1);
		res++;
	}
	else if (*tmp2 != -129)
	{
		printf("*(elem2->content) (%d) != (-129)\n", *tmp2);
		res++;
	}
	else
	{
		printf("Test passed function passed as argument was applied./n");
	}
	printf("Test");
	ft_print_status(res);
	return (ft_print_end(res));
}
