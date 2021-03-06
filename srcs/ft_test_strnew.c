#include "test.h"

static int	ft_test_strnew2(size_t size)
{
	int		res;
	char	*str;
	size_t	i;

	res = 0;
	i = 0;
	str = ft_strnew(size);
	memset(str, '1', size);
	while (i < (size + 1) && str)
	{
		if (str[i] == 1)
			++res;
		++i;
	}
	if (str)
	{
		ft_strdel(&str);
		if (str)
			++res;
	}
	printf("Test : %ld", size);
	ft_print_status(res);
	return (res);
}

int	ft_test_strnew(void)
{
	int	res;

	res = 0;
	ft_print_begin("ft_strnew & ft_strdel");
	res += ft_test_strnew2(1024);
	res += ft_test_strnew2(1);
	return (ft_print_end(res));
}
