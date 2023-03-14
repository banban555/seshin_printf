/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshin <sesehin@student.42seoul.k>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 14:02:54 by seshin            #+#    #+#             */
/*   Updated: 2021/01/03 23:13:25 by seshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *d, int c, size_t len)
{
	unsigned char	*dest;
	unsigned char	src;
	size_t			i;

	i = 0;
	dest = d;
	src = c;
	while (i < len)
	{
		dest[i] = src;
		i++;
	}
	return (dest);
}
