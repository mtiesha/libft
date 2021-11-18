/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiesha <mtiesha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:54:23 by mtiesha           #+#    #+#             */
/*   Updated: 2021/11/10 13:39:26 by mtiesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t			str1_len;
	size_t			str2_len;
	size_t			str1str2_len;
	unsigned char	*ret;

	if (!str1 && !str2)
		return (ft_strdup(""));
	if (!str1)
		return (ft_strdup(str2));
	if (!str2)
		return (ft_strdup(str1));
	str1_len = ft_strlen(str1);
	str2_len = ft_strlen(str2);
	str1str2_len = str1_len + str2_len;
	ret = malloc((str1str2_len + 1) * sizeof(char));
	if (ret != NULL)
	{
		ft_memcpy(ret, str1, str1_len);
		ft_memcpy(ret + str1_len, str2, str2_len);
		ret[str1str2_len] = 0;
		return ((char *)(ret));
	}
	return (NULL);
}
