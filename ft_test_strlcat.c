#include "test.h"

int	ft_test_strlcat2(char const *s1, char const *s2, size_t dest_size)
{
	int		res;
	size_t	res2;
	size_t	res3;
	char	*str2;
	char	*str3;

	res = 0;
	str2 = (char *) malloc(sizeof(char) * dest_size);
	str3 = (char *) malloc(sizeof(char) * dest_size);
	strlcpy(str2, s1, dest_size);
	strlcpy(str3, s1, dest_size);
	res3 = strlcat(str3, s2, dest_size);
	res2 = ft_strlcat(str2, s2, dest_size);
	if (res2 != res3)
	{
		printf("Error different return betwenn std and libft\n");
		++res;
	}
	else if (strcmp(str3, str2))
	{
		printf("Error different copying behaviour on dest\n");
		++res;
	}
	printf("Test : \"%s\" { \"%s\" (%lu) | \"%s\" (%lu) } size: (%lu)", s2 ,str2, res2, str3, res3, dest_size);
	free(str2);
	free(str3);
	ft_print_status(res);
	return (res);
}

int	ft_test_strlcat(void)
{
	int		res;
	char	buff[100];
	char	str[] = " ergnwerignwergn wekrgnwmerngwerngqoi weqfewnfqkowenf qknergkwertngk mfkwerfkwner kgnwerkgnw kerngwlkergnwo kerglwen rkgwefgmnwe,fgnwlfngwkerngwker ngkwerngkw enrgokwner kgnwerkog nwerkngweflgnw,fmgnw ekfngwokerngwkerng okwerng,we nrgkwenrgm wenrglwen rglwerng o";

	buff[0] = '\0';
	res = 0;
	ft_print_begin("ft_strlcat");
	res += ft_test_strlcat2(buff, "Hello", 100);
	res += ft_test_strlcat2(buff, " world !", 100);
	res += ft_test_strlcat2(buff, "", 100);
	res += ft_test_strlcat2(buff, "!!!!!!!!!!", 1);
	res += ft_test_strlcat2(buff, str, 100);
	return (ft_print_end(res));
}
