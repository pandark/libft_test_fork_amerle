/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <amerle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 07:37:57 by amerle            #+#    #+#             */
/*   Updated: 2013/11/20 07:38:36 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static int	ft_test_bzero2(void *buf, size_t len)
{
	int		res;
	char	*tmp;

	res = 0;
	ft_bzero(buf, len);
	tmp = (char *)buf;
	while (len)
	{
		if (*tmp)
			++res;
		--len;
	}
	printf("Test");
	ft_print_status(res);
	return (res);
}

int	    ft_test_bzero(void)
{
	int			  res;
	t_struct1	s_test;
  char      *tmp;

  tmp = (char *) malloc(sizeof(char) * strlen("You will fail :D"));

  s_test.m_str = tmp;
  s_test.m_char = 't';
  s_test.m_int  = 45;
	res = 0;
	ft_print_begin("ft_bzero");
	res += ft_test_bzero2(&s_test, sizeof(t_struct1));
	free(tmp);
	tmp = NULL;
	return (ft_print_end(res));
}
