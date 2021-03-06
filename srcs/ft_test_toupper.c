#include "test.h"

static int	ft_test_toupper2(int c)
{
	int	res;
	int	res2;
	int	res3;

	res = 0;
	res2 = ft_toupper(c);
	res3 = toupper(c);
	if (res2 != res3)
		++res;
	printf("Test : %c { %c - %c }", (char)c, (char)res2, (char)res3);
	ft_print_status(res);
	return (res);
}

int	ft_test_toupper(void)
{
	int 	res;
  char  c;

	res = 0;
	c = 'a';
	ft_print_begin("ft_toupper");
	while (c <= 'z')
	{
	  res += ft_test_toupper2((char)c);
    c++;
  }
	return (ft_print_end(res));
}
