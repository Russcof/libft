/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:54:15 by mtellal           #+#    #+#             */
/*   Updated: 2020/12/11 11:28:09 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void const *src, int c, size_t n)
{
	unsigned char		*tab;
	unsigned char const	*tab1;

	tab = dest;
	tab1 = src;
	while (n--)
	{
		if (*tab1 == c)
		{
			return ((void *)(tab + 1));
		}
		*tab++ = *tab1++;
	}
	return (NULL);
}
