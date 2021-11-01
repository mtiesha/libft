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
	unsigned int			i;
	int						s;
	long long				res;

	i = 0;
	s = 1;
	res = 0;
	while (st[i] != '\0' && (st[i] == 32
			|| st[i] == ' ' || st[i] == '\t'
			|| st[i] == '\n' || st[i] == '\r' 
			|| st[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(st[i]))
		res = res * 10 + (st[i++] - '0');
	if (res != 0)
		return ((int)(res * s));
	return (0);
}
