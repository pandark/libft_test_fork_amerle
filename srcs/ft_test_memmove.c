/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <amerle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 08:52:26 by amerle            #+#    #+#             */
/*   Updated: 2013/11/25 15:11:41 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <string.h>

static int	ft_test_memmove2(char *str, const char *src, size_t len)
{
	int		res;
	char	*src2;

	res = 0;
	src2 = strdup(src);
	printf("Test : \"%s\" and \"%s\" (%lu)", str, src, len);
	ft_memmove(str, src, len);
	memmove((src2 + (src - str)), src2, len);
	if (memcmp((src2 + (src - str)), str, len))
		++res;
	printf(" { \"%s\" | \"%s\" }", str, (src2 + (src - str)));
	ft_print_status(res);
  free(src2);
	return (res);
}

int	ft_test_memmove(void)
{
	int		res;
	char	str[] = "bonjour tout le monde";

	res = 0;
	ft_print_begin("ft_memmove");
	res += ft_test_memmove2((void *)(str + 1), (const void *)str, strlen(str));
	return (ft_print_end(res));
}
