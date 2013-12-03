#include "test.h"

static void	ft_toupper2(char *c)
{
	if (c)
	{
		*c = (char)toupper((int)*c);
	}
}

static int		ft_test_striter2(char *s, void (*f)(char *c))
{
	int		res;
	size_t	len;
	char	*save;
	size_t	i;

	res = 0;
	i = 0;
	len = strlen(s);
	printf("Test : \"%s\"", s);
	save = strdup(s);
	ft_striter(s, f);
	while (i < len)
	{
		if (s[i] != (char)toupper(save[i]))
			++res;
		++i;
	}
	printf(" { \"%s\" }", s);
	free(save);
	ft_print_status(res);
	return (res);
}

int		ft_test_striter(void)
{
	int		res;
	char	str[] = "##WelCome in New world !##";
	char	str3[] = "##WelCome in New world !##";
	char	str2[] = "";

	res = 0;
	ft_print_begin("ft_striter");
	res += ft_test_striter2(str, ft_toupper2);
	res += ft_test_striter2(str2, ft_toupper2);
	res += ft_test_striter2(str3, ft_toupper2);
	return (ft_print_end(res));
}
