/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshin <seshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 02:04:54 by seshin            #+#    #+#             */
/*   Updated: 2021/01/04 17:29:12 by seshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*new_str1;
	unsigned char	*new_str2;
	size_t			i;

	new_str1 = (unsigned char*)str1;
	new_str2 = (unsigned char*)str2;
	i = 0;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (new_str1[i] != new_str2[i])
			return (new_str1[i] - new_str2[i]);
		i++;
	}
	return (0);
}
