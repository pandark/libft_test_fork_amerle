/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <amerle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 07:41:59 by amerle            #+#    #+#             */
/*   Updated: 2013/11/20 07:49:31 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static int	ft_test_memcpy2(void *dest, const void *src, size_t len)
{
	int			res;
	char		*tmp;
	const char	*tmp2;

	tmp = (char *)dest;
	tmp2 = (const char *)src;
	res = 0;
	printf("Test");
	ft_memcpy(dest, src, len);
	while (len)
	{
		if (*tmp != *tmp2)
			++res;
		--len;
	}
	ft_print_status(res);
	return (res);
}

int			ft_test_memcpy(void)
{
	int	  res;
	char  *tmp;
	t_struct1 t1;
	t_struct1 t2;
	int   *test_ptr;

  test_ptr = (int * ) malloc(sizeof(int) * 2);
  tmp = (char *) malloc(sizeof(char) * strlen("test"));
	t1.m_str = tmp;
	t1.m_char = 'q';
	t1.m_pointer = (void *)test_ptr;
	res = 0;
	ft_print_begin("ft_memcpy");
	ft_test_memcpy2((void *)&t2, (const void *)&t1, sizeof(t_struct1));
  free(tmp);
  free(test_ptr);
	return (ft_print_end(res));
}
