/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshin <seshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 00:49:51 by seshin            #+#    #+#             */
/*   Updated: 2021/01/05 01:01:35 by seshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!dst && !src)
		return (0);
	while (src[i] != '\0')
		i++;
	if (dstsize == 0)
		return (i);
	while (j < dstsize - 1 && *src != '\0')
	{
		*dst++ = *src++;
		j++;
	}
	*dst = '\0';
	return (i);
}
