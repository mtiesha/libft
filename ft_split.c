/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiesha <mtiesha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:01:46 by mtiesha           #+#    #+#             */
/*   Updated: 2021/10/26 19:16:32 by mtiesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_counter(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c && *++s != c && *s != 0)
			count++;
		if (*s == 0)
			return (count);
		s = (const char *)(ft_strchr(s, c));
	}
	return (count);
}

static size_t	ft_len_not_c(char const *s, char c)
{
	size_t		count;
	const char	*src;

	count = 0;
	src = ft_strdup(s);
	while (*s != c && *s != 0)
	{
		count++;
		s++;
	}
	return (count);
}

static void	ft_ret_free(char **ret, size_t i)
{
	while (i-- >= 0)
		free(ret[i]);
	free(ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	count;
	size_t	i;

	count = ft_counter(s, c);
	i = 0;
	ret = (char **)malloc((count + 1) * sizeof(char *));
	if (ret == NULL)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
		{
			ret[i] = NULL;
			return (ret);
		}
		ret[i] = ft_substr(s, 0, ft_len_not_c(s, c));
		if (ret[i] == NULL)
		{
			ft_ret_free(ret, i);
			return (NULL);
		}
		s = ft_strchr(s, c);
		i++;
	}
	ret[i] = NULL;
	return (ret);
}

int	main(void)
{
	char	*p;
	char	c;
	char	**gm;

	p = "44Hello44World44Rock44444";
	c = '4';
	gm = ft_split(p, c);
	if (gm == NULL)
	{
		printf("NULL\n");
		return (1);
	}
	printf("%s\n", gm[4]);
	return (0);
}
