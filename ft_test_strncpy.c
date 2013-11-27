/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <amerle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:50:08 by amerle            #+#    #+#             */
/*   Updated: 2013/11/27 14:26:58 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static int	ft_test_strncpy2(char const *s1, const char *s2, const size_t n)
{
	int		res;
	char	*str;
	char	*str2;

	res = 0;
	str2 = strdup(s1);
	str = strdup(s1);
	strncpy(str, s2, n);
	ft_strncpy(str2, s2, n);
	if (strncmp(str, str2, n))
		++res;
	printf("Test \"%s\": { \"%s\" | \"%s\" } (%lu)", s2, str2, str, n);
	ft_print_status(res);
	free(str);
	free(str2);
	return (res);
}

int			ft_test_strncpy(void)
{
	int		res;
	char	str[] = "bonjour tout le monde";
	char	str2[5] = "";
	char	*str3;
	char	str4[] = "Hello Les Chats";

	str3 = (char *) malloc(sizeof(char));
	res = 0;
	bzero(str2, 5);
	ft_print_begin("ft_strncpy");
	res += ft_test_strncpy2(str, "test", 4);
	res += ft_test_strncpy2(str2, "world", 5);
	res += ft_test_strncpy2(str4, "Pokemon", 65);
	res += ft_test_strncpy2(str2, "world", 0);
	res += ft_test_strncpy2(str3, "world", 0);
	res += ft_test_strncpy2(str3, "", 3);
	res += ft_test_strncpy2(str3, "World", 5);
	return (ft_print_end(res));
}
