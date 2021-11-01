/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiesha <mtiesha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:16:37 by mtiesha           #+#    #+#             */
/*   Updated: 2021/10/26 19:16:32 by mtiesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*cneedle;
	const char	*cstack;

	cneedle = needle;
	while (*haystack)
	{
		cstack = haystack;
		while ((*haystack++) == (*needle++))
		{
			if (!(*needle))
				return ((char *)(cstack));
			if (!(*haystack))
				return (NULL);
		}
		needle = cneedle;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needlelen;

	needlelen = ft_strlen(needle);
	if (0 == needlelen)
		return ((char *)(haystack));
	i = len;
	if (ft_strstr(haystack, needle))
	{
		while (i > 0)
		{
			if (0 == ft_strncmp(haystack, needle, needlelen) && i > 1)
				return ((char *)(haystack));
			haystack++;
			i--;
		}
	}
	return (NULL);
}
