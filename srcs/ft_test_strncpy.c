/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <amerle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:50:08 by amerle            #+#    #+#             */
/*   Updated: 2013/11/27 23:22:19 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static int	ft_test_strncpy2(char const *s1, const char *s2, const size_t n)
{
	int		res;
	char	*str1;
	char	*str2;

	res = 0;
	str2 = strdup(s1);
	str1 = strdup(s1);
	strncpy(str1, s2, n);
	ft_strncpy(str2, s2, n);
	if (strncmp_bsd(str1, str2, n))
	{
		++res;
	}
	printf("Test \"%s\": { \"%s\" | \"%s\" } (%lu)", s2, str2, str1, n);
	ft_print_status(res);
	free(str1);
	free(str2);
	return (res);
}

int			ft_test_strncpy(void)
{
	int		res;
	char	str[] = "bonjour tout le monde";
	char	str2[5] = "";
	char	str3[1];
	char	str4[] = "Hello Les Chats";

	str3[0] = '\0';
	res = 0;
	bzero(str2, 5);
	ft_print_begin("ft_strncpy");
	res += ft_test_strncpy2(str, "test", 4);
	res += ft_test_strncpy2(str2, "world", 5);
/*  res += ft_test_strncpy2(str4, "Pokemon", 65); */
	res += ft_test_strncpy2(str2, "world", 0);
	res += ft_test_strncpy2(str3, "world", 0);
	res += ft_test_strncpy2(str3, "", 3);
	res += ft_test_strncpy2(str4, "World", 5);
	return (ft_print_end(res));
}
