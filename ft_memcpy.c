/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiesha <mtiesha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:58:23 by mtiesha           #+#    #+#             */
/*   Updated: 2021/10/26 19:16:31 by mtiesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!destination && !src)
		return (NULL);
	d = destination;
	s = src;
	while (n-- > 0)
		*d++ = *s++;
	return (destination);
}
