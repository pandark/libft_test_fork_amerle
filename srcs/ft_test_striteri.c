#include <string.h>
#include "test.h"

static void	ft_toupper3(unsigned int i, char *c)
{
	if (c && i < 10)
	{
		*c = (char)toupper((int)*c);
	}
}

static int		ft_test_striteri2(char *s, void (*f)(unsigned int, char*))
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
	ft_striteri(s, f);
	while (i < len)
	{
		if (i < 10 && s[i] != (char)toupper(save[i]))
			++res;
		else if (i >= 10 && s[i] != save[i])
			++res;
		++i;
	}
	printf(" { \"%s\" }", s);
	free(save);
	ft_print_status(res);
	return (res);
}

int		ft_test_striteri(void)
{
	int		res;
	char	str1[] = "##WelCome in New world !##";
	char	str3[] = "##WelCome in New world !##";
	char	str2[] = "";

	ft_print_begin("ft_striteri");
	res += ft_test_striteri2(str1, ft_toupper3);
	res += ft_test_striteri2(str2, ft_toupper3);
	res += ft_test_striteri2(str3, ft_toupper3);
	return (ft_print_end(res));
}