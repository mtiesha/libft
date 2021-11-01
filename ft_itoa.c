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

static char	*ft_strrev(char *s)
{
	char	tmp;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s);
	while (j > i)
	{
		j--;
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
	}
	return (s);
}

static unsigned long	ft_size(int n)
{
	unsigned long	count;

	count = 0;
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static char	*ft_alloc(int n)
{
	char	*str;

	if (n == 0)
	{
		str = (char *)(ft_calloc(2, sizeof(char)));
		str[0] = '0';
		return (str);
	}
	if (n < 0)
		str = (char *)malloc((ft_size(n) + 2) * sizeof(char *));
	else
		str = (char *)malloc((ft_size(n) + 1) * sizeof(char *));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	return (str);
}

static char	*ft_min_int(char *str)
{
	if (str == NULL)
		return (NULL);
	return ("-2147483648");
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		flag;

	i = 0;
	flag = 0;
	str = ft_alloc(n);
	if (str == NULL || n == -2147483648)
		return (ft_min_int(str));
	if (n < 0)
	{
		n = n * -1;
		flag++;
	}
	while (n)
	{
		str[i++] = (n % 10) + '0';
		n = n / 10;
	}
	if (flag)
		str[i] = '-';
	return (ft_strrev(str));
}
