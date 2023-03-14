/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshin <seshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 01:57:44 by seshin            #+#    #+#             */
/*   Updated: 2020/12/29 21:56:20 by seshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*new_str;
	unsigned char	find;
	size_t			i;

	new_str = (unsigned char*)str;
	find = c;
	i = 0;
	while (i < n)
	{
		if (new_str[i] == find)
			return (new_str + i);
		i++;
	}
	return (NULL);
}
