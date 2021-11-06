/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiesha <mtiesha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:26:30 by mtiesha           #+#    #+#             */
/*   Updated: 2021/10/26 19:16:30 by mtiesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int			i;
	int						s;
	long long				res;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] != '\0' && (str[i] == 32 || str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			s = -1;
	}
	while (ft_isdigit(str[i]))
	{
		if (res > 214748364 && *str > 7 && s == 1)
			return (-1);
		if (res > 214748364 && *str > 8 && s == -1)
			return (0);
		res = res * 10 + (str[i++] - '0');
	}
	return ((int)(res * s));
}
