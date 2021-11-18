/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiesha <mtiesha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:54:23 by mtiesha           #+#    #+#             */
/*   Updated: 2021/11/10 13:39:26 by mtiesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)(haystack));
	while (*haystack && len >= needle_len)
	{
		if (*haystack == *needle
			&& ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)(haystack));
		haystack++;
		len--;
	}
	return (NULL);
}
