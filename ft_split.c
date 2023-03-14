/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshin <seshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 18:48:17 by seshin            #+#    #+#             */
/*   Updated: 2021/01/05 19:16:21 by seshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_num(const char *str, char c)
{
	size_t i;
	size_t num;

	i = 0;
	num = 0;
	while (str[i])
	{
		if (str[i] != c && str[i] != 0)
		{
			num++;
			while (str[i] != c && str[i] != 0)
				i++;
		}
		else if (str[i] != 0)
			i++;
	}
	return (num);
}

static void		*free_mem(char **mem, size_t cnt)
{
	size_t i;

	i = 0;
	while (i < cnt)
	{
		free(mem[i]);
		i++;
	}
	free(mem);
	return (NULL);
}

static void		do_split(char const *s, char c, char **str)
{
	size_t i;
	size_t j;
	size_t start;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && s[i] != 0)
		{
			start = i;
			while (s[i] != c && s[i] != 0)
				i++;
			if (!(str[j] = (char *)malloc(sizeof(char) * (i - start + 1))))
			{
				free_mem(str, j);
				return ;
			}
			ft_strlcpy(str[j], s + start, i - start + 1);
			j++;
		}
		else if (s[i] != 0)
			i++;
	}
}

char			**ft_split(char const *s, char c)
{
	char	**str;
	size_t	n;

	if (!s)
		return (NULL);
	n = get_num(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (n + 1))))
		return (NULL);
	str[n] = NULL;
	if (n == 0)
		return (str);
	do_split(s, c, str);
	return (str);
}
