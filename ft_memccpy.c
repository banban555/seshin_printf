/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshin <seshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 00:35:26 by seshin            #+#    #+#             */
/*   Updated: 2021/01/04 02:23:57 by seshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = dest;
	b = (unsigned char *)src;
	while (n--)
	{
		*a = *b;
		if (*a == (unsigned char)c)
			return (a + 1);
		a++;
		b++;
	}
	return (NULL);
}
