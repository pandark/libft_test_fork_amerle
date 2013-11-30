#include "test.h"

static int	ft_test_strsplit2(char const *s, const char c, const char final[6][25])
{
	int		res;
	char	**tab_res;
	size_t	i;

	res = 0;
	printf("Test : \"%s\" ('%c')\n", s, c);
	tab_res = ft_strsplit(s, c);
	if (!tab_res)
		++res;
	while (*final && *tab_res)
	{
		printf("\tCompare : \"%s\" - \"%s\"\n", *final, *tab_res);
		if (strcmp_bsd(*final, *tab_res))
			++res;
		++final;
		++tab_res;
	}
	if (*final || *tab_res)
		++res;
	printf("Status :");
	ft_print_status(res);
	i = 0;
	while (tab_res[i] != '\0')
	{
		free(&tab_res[i]);
		i++;
	}
	free(tab_res);
	return (res);
}

int	ft_test_strsplit(void)
{
	int		res;
	char	const test1[6][25] = {"Hello", "World", " ", " ", "!"};
	char	const test2[2][25] = { "" };
	char	const test3[2][25] = { "==========" };

	res = 0;
	ft_print_begin("ft_strsplit");
	res += ft_test_strsplit2("****Hello***World * *!", '*', test1);
	res += ft_test_strsplit2("**********************", '*', test2);
	res += ft_test_strsplit2("==========", '*', test3);
	return (ft_print_end(res));
}
