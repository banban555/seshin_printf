/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshin <sesehin@student.42seoul.k>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 03:47:06 by seshin            #+#    #+#             */
/*   Updated: 2020/12/31 16:30:31 by seshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_end(char const *s, char const *set, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len && ft_strchr(set, s[len - i - 1]))
		i++;
	return (len - i);
}

static size_t	ft_start(char const *s, char const *set, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len && ft_strchr(set, s[i]))
		i++;
	return (i);
}

char			*ft_strtrim(char const *s, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	char	*str;

	if (!s)
		return (NULL);
	if (!set)
		return (ft_strdup(s));
	len = ft_strlen(s);
	start = ft_start(s, set, len);
	end = ft_end(s, set, len);
	if (start >= end)
	{
		str = (char *)malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	if (!(str = malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	ft_strlcpy(str, s + start, end - start + 1);
	return (str);
}
