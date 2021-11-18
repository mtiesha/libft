/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiesha <mtiesha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:54:23 by mtiesha           #+#    #+#             */
/*   Updated: 2021/11/10 13:39:25 by mtiesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_revstr(char *str)
{
	char			temp;
	unsigned long	i;
	unsigned long	end;

	i = 0;
	end = ft_strlen(str) - 1;
	while (i < end)
	{
		temp = str[i];
		str[i] = str[end];
		str[end] = temp;
		i++;
		end--;
	}
	return (str);
}

static size_t	ft_count_dig(int n)
{
	size_t	count;

	count = 1;
	while (n / 10)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static char	*ft_array_write(int nbr, char *s, size_t sign)
{
	long	cn;
	size_t	i;

	cn = nbr;
	i = 0;
	if (sign)
		cn = cn * -1;
	ft_memset(s, '0', ft_strlen(s) + sign);
	while (cn)
	{
		s[i++] = (cn % 10) + '0';
		cn = cn / 10;
	}
	if (sign)
		s[i] = '-';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	nlen;
	size_t	flag;

	flag = 0;
	if (n < 0)
		flag = 1;
	nlen = ft_count_dig(n);
	str = ft_calloc(nlen + flag + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (nlen == 1 && flag == 0)
	{
		str[0] = n + '0';
		return (str);
	}
	if (nlen == 1 && flag == 1)
	{
		str[0] = '-';
		n = n * -1;
		str[1] = n + '0';
		return (str);
	}
	str = ft_array_write(n, str, flag);
	return (ft_revstr(str));
}
