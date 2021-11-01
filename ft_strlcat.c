/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiesha <mtiesha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:53:02 by mtiesha           #+#    #+#             */
/*   Updated: 2021/10/26 19:16:32 by mtiesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_concaten(char *dest, const char *src, size_t dest_size)
{
	dest = ft_memchr(dest, '\0', dest_size);
	while (*src++)
		*dest++ = src[-1];
	dest = 0;
}

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t			src_dest_len;
	int				i;
	unsigned long	dest_len;

	i = 0;
	src_dest_len = ft_strlen(src) + ft_strlen(dest);
	if (!dest || !src)
		return (0);
	if (!dest_size)
		return (src_dest_len);
	if (dest_size >= src_dest_len + 1)
		ft_concaten(dest, src, dest_size);
	else
	{
		dest_len = ft_strlen(dest) + 1;
		dest = ft_memchr(dest, '\0', dest_size);
		dest_size = dest_size - dest_len;
		while (dest_size--)
			*dest++ = *src++;
		dest = 0;
	}
	return (src_dest_len);
}
