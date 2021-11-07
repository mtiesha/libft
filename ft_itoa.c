/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiesha <mtiesha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:00:50 by mtiesha           #+#    #+#             */
/*   Updated: 2021/10/26 19:16:31 by mtiesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_mincheck(char *str)
{
	char	*ret;

	free(str);
	ret = (char *)malloc(12 * sizeof(char));
	if (ret != NULL)
	{
		ft_memcpy(ret, "-2147483648", 11);
		ret[12] = 0;
	}
	else
		free(ret);
	return (ret);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = (char *)malloc(2 * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_mincheck(str));
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}
	else if (n >= 10)
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n >= 0 && n < 10)
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}
