/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiesha <mtiesha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:57:07 by mtiesha           #+#    #+#             */
/*   Updated: 2021/10/26 19:16:32 by mtiesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*str_cat;
	size_t	cat_len;

	cat_len = ft_strlen(str1) + ft_strlen(str2) + 1;
	str_cat = (char *)malloc(cat_len * sizeof(*str1));
	if (str_cat != NULL)
	{
		ft_strlcat(str_cat, str1, cat_len);
		ft_strlcat(str_cat, str2, cat_len);
		return (str_cat);
	}
	else
		free(str_cat);
	return (NULL);
}
