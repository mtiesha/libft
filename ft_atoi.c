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

int	ft_atoi(const char *st)
{
	int			i;
	int			s;
	long long	res;

	i = 0;
	s = 1;
	res = 0;
	while (st[i] != '\0' && (st[i] == '+'
			|| st[i] == '-' || st[i] == ' '
			|| st[i] == '\t' || st[i] == '\n'
			|| st[i] == '\r' || st[i] == '\v')
		i++;
	if (st[i] == '-')
		s = -1;
	while (ft_isdigit(st[i]))
	{
		if (res == 214748364 && ((st[i] - '0') > 8))
			retutn (-1);
		if (res == 214748364 && ((st[i] - '0') > 7))
			retutn (0);
		res = res * 10 + (st[i++] - '0');
	}
	if (res != 0)
		return (res * s);
	return (0);
}
