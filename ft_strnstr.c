/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshin <seshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 19:21:38 by seshin            #+#    #+#             */
/*   Updated: 2021/01/06 12:51:50 by seshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t pos;
	size_t i;
	size_t j;

	if (!*find)
		return ((char *)str);
	if (len == 0)
		return (NULL);
	pos = 0;
	while (str[pos] && pos < len)
	{
		i = 0;
		j = pos;
		while (find[i] && str[j] == find[i] && j < len)
		{
			j++;
			i++;
		}
		if (find[i] == '\0')
			return ((char *)(str + pos));
		pos++;
	}
	return (NULL);
}
