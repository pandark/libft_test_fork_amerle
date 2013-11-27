/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <amerle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:20:23 by amerle            #+#    #+#             */
/*   Updated: 2013/11/27 14:05:44 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static int	ft_test_strcpy2(char const *s1, const char *s2)
{
	int		res;
	char	*str1;
	char	*str2;

	res = 0;
	str2 = strdup(s1);
	str1 = strdup(s1);
	ft_strcpy(str2, s2);
	strcpy(str1, s2);
	if (strcmp(str1, str2))
		++res;
	printf("Test \"%s\" : { \"%s\" | \"%s\" }", s2, str2, str1);
	free(str1);
	free(str2);
	ft_print_status(res);
	return (res);
}

int			ft_test_strcpy(void)
{
	int		res;
	char	str[] = "bonjour tout le monde";
	char	str2[5] = "";
	char	str3[] = "";

	res = 0;
	ft_print_begin("ft_strcpy");
	res += ft_test_strcpy2(str, "test");
	res += ft_test_strcpy2(str2, "world");
	res += ft_test_strcpy2(str2, "world");
	res += ft_test_strcpy2(str2, "world");
	res += ft_test_strcpy2(str3, "world");
	res += ft_test_strcpy2(str3, "");
	res += ft_test_strcpy2(str3, "World");
	return (ft_print_end(res));
}
