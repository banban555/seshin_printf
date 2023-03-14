/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshin <seshin@studuent.42seoul.k>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 19:35:04 by seshin            #+#    #+#             */
/*   Updated: 2021/01/05 19:07:17 by seshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_space(char c)
{
	if ((c == ' ' || c == '\t' || c == '\n'
				|| c == '\v' || c == '\r' || c == '\f'))
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int		sign;
	long	result;
	int		i;

	i = 0;
	sign = 1;
	result = 0;
	while (check_space(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		if (result * sign > 2147483647)
			return (-1);
		if (result * sign < -2147483648)
			return (0);
		i++;
	}
	return (sign * result);
}
