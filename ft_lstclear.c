/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 21:35:26 by mtellal           #+#    #+#             */
/*   Updated: 2020/12/17 21:42:22 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*t;

	t = (t_list *)lst;
	while (t->next)
	{
		ft_lstdelone(t, del);
		t = t->next;
	}
	if (t)
		ft_lstdelone(t, del);
}
