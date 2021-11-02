/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiesha <mtiesha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:52:25 by mtiesha           #+#    #+#             */
/*   Updated: 2021/10/26 19:16:31 by mtiesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*csrc;
	long long		src_len;

	csrc = (unsigned char *)(src);
	src_len = ft_strlen((char *)(csrc)) + 1;
	while (n > 0 && src_len > 0)
	{
		if (*csrc == (unsigned char)(c))
			return (csrc);
		csrc++;
		n--;
		src_len--;
	}
	return (NULL);
}
