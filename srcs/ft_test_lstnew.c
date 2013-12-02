/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <amerle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 21:23:49 by amerle            #+#    #+#             */
/*   Updated: 2013/12/01 21:32:16 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	ft_test_lstnew(void)
{
	t_list		*elem;
	int			res;
	char const	str[] = "Welcome";

	res = 0;
	ft_print_begin("ft_lstnew");
	elem = ft_lstnew((void const *)str, strlen(str));
	if (!elem)
		++res;
	else if (memcmp(elem->content, (void *)str, strlen(str))
				|| elem->content_size != strlen(str)
				|| elem->next != NULL)
		++res;
	printf("Test");
	ft_print_status(res);
	return (ft_print_end(res));
}
