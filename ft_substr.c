/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiesha <mtiesha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:05:49 by mtiesha           #+#    #+#             */
/*   Updated: 2021/10/26 19:16:33 by mtiesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	unsigned char	*substr;

	substr = (unsigned char *)malloc((len + 1) * sizeof(char));
	if (substr != NULL)
	{
		str = str + start;
		ft_memcpy(substr, str, len);
		substr[len + 1] = 0;
		return ((char *)(substr));
	}
	else
		free(substr);
	return (NULL);
}
