/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiesha <mtiesha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:53:02 by mtiesha           #+#    #+#             */
/*   Updated: 2021/11/03 19:16:32 by mtiesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_find_zero(const char *string, size_t n)
{
	int	i;

	i = 0;
	while (string[i] != '\0' && n)
	{
		i++;
		n--;
	}
	if (string[i] != '\0')
		return (0);
	return (i);
}

static size_t	ft_concaten(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (dest[i] != 0)
		i++;
	while (n - 1)
	{
		dest[i++] = *src++;
		n--;
	}
	dest[i] = 0;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	dest_len = ft_find_zero(dest, size);
	if (!dest_len)
	{
		while (size--)
			*dest++ = *src++;
		return (src_len + size);
	}
	if (size > dest_len)
		return (ft_concaten(dest, src, size - 1));
	else
		return (ft_concaten(dest, src, size - dest_len - 1));
}
