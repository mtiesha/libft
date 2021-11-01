/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiesha <mtiesha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:30:45 by mtiesha           #+#    #+#             */
/*   Updated: 2021/10/26 19:16:32 by mtiesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t num)
{
	if (*string2 && *string1)
	{
		while (*string1 && *string2 && num > 0)
		{
			if (!((unsigned char)(*string1) == (unsigned char)(*string2)))
				return ((unsigned char)(*string1) - (unsigned char)(*string2));
			string2++;
			string1++;
			num--;
		}
		return (0);
	}
	return ((unsigned char)(*string1) - (unsigned char)(*string2));
}
