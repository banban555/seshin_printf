/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshin <seshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 13:51:18 by seshin            #+#    #+#             */
/*   Updated: 2021/01/04 19:28:50 by seshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char find;

	find = c;
	while (*str)
	{
		if (*str == find)
		{
			return ((char *)str);
		}
		str++;
	}
	if (*str == find)
		return ((char *)str);
	return (0);
}
