/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:08:54 by mtellal           #+#    #+#             */
/*   Updated: 2020/12/09 14:20:41 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *tab;

	tab = s;
	while (n--)
	{
		if (*tab == c)
		{
			return ((void *)tab);
		}
		tab++;
	}
	return (NULL);
}
