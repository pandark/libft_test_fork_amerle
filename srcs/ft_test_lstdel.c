#include "test.h"

static size_t		g_is_delete;

static void	ft_test_lstdel2_del(void *content, size_t content_size)
{
	char	**str;

	str = (char **)content;
	if (*str && content_size == strlen(*str))
		++g_is_delete;
}

int	ft_test_lstdel(void)
{
	int		res;
	t_list	*elem;
	t_list	*elem2;
	char	str[] = "Bonjour";
	char	str2[] = "Bonjour 2";

	res = 0;
	ft_print_begin("ft_lstdel");
	elem = (t_list*)malloc(sizeof(t_list));
	elem2 = (t_list*)malloc(sizeof(t_list));
	elem->next = elem2;
	elem->content = (void *)str;
	elem->content_size = strlen(str);
	elem2->next = NULL;
	elem2->content = (void *)str2;
	elem2->content_size = strlen(str2);
	g_is_delete = 0;
	ft_lstdel(&elem, ft_test_lstdel2_del);
	if (elem != NULL)
	{
		printf("Elem is not NULL");
		res++;
	}
	else if (g_is_delete != 2)
	{
		printf("All elem were not deleted.\n");
		res++;
	}
	printf("Test : elem deleted:(%lu/2)", g_is_delete);
	ft_print_status(res);

	if (elem)
	{
		if (elem->next)
		{
			free(elem->next);
			printf("free elem->next\n");
		}
		printf("free elem\n");
		free(elem);
	}
	return (ft_print_end(res));
}
