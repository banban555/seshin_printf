/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshin <seshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 02:26:43 by seshin            #+#    #+#             */
/*   Updated: 2021/01/04 23:52:02 by seshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;

	if (!s)
		return (NULL);
	if (!(new_s = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		new_s[0] = '\0';
		return (new_s);
	}
	ft_strlcpy(new_s, (char *)(s + start), len + 1);
	return (new_s);
}
