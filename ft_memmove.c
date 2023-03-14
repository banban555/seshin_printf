/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshin <seshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 01:06:47 by seshin            #+#    #+#             */
/*   Updated: 2021/01/04 20:00:54 by seshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;
	size_t			i;

	if (dest == src || n == 0)
		return (dest);
	new_dest = (unsigned char *)dest;
	new_src = (unsigned char *)src;
	if (dest < src)
	{
		while (n--)
			*new_dest++ = *new_src++;
	}
	else
	{
		i = 0;
		while (++i <= n)
		{
			new_dest[n - i] = new_src[n - i];
		}
	}
	return (dest);
}
