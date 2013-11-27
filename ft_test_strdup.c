/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <amerle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:11:23 by amerle            #+#    #+#             */
/*   Updated: 2013/11/27 14:09:09 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static int	ft_test_strdup2(const char *str)
{
	int		res;
	char	*cpy;
	char	*cpy2;

	res = 0;

	cpy = ft_strdup(str);
	cpy2 = strdup(str);
	printf("Test \"%s\" : { \"%s\" | \"%s\" }", str, cpy, cpy2);
	if (strcmp(cpy, cpy2))
		++res;
	ft_print_status(res);
	return (res);
}

int			ft_test_strdup(void)
{
	int	res;

	res = 0;
	ft_print_begin("ft_strdup");
	res += ft_test_strdup2("Hello world !");
	res += ft_test_strdup2("");
	return (ft_print_end(res));
}
