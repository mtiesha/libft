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

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	unsigned char	*substr;

	if (!str || !len)
		return (NULL);
	if (start >= ft_strlen(str))
		return (ft_strdup(""));
	substr = (unsigned char *)malloc((len + 1) * sizeof(char));
	if (substr != NULL)
	{
		ft_memcpy(substr, str + start, len);
		substr[len] = 0;
		return ((char *)(substr));
	}
	else
		free(substr);
	return (NULL);
}
