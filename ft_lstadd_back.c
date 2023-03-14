/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshin <seshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 04:01:04 by seshin            #+#    #+#             */
/*   Updated: 2021/01/06 01:46:48 by seshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *curr;

	if (!lst || !new)
		return ;
	if (!(*lst))
		*lst = new;
	curr = *lst;
	while (curr->next)
		curr = (*curr).next;
	curr->next = new;
	new->next = NULL;
}
