/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiesha <mtiesha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:52:04 by mtiesha           #+#    #+#             */
/*   Updated: 2021/10/26 19:16:30 by mtiesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	unsigned char	*s;

	s = (unsigned char *)malloc(number * sizeof(size));
	if (s != NULL)
	{
		ft_bzero(s, number);
		return ((void *)(s));
	}
	else
		free(s);
	return (NULL);
}
