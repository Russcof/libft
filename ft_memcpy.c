/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 15:18:40 by mtellal           #+#    #+#             */
/*   Updated: 2020/12/08 16:30:52 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	unsigned char *tab;
	unsigned char *tab1;

	tab = (unsigned char *)dest;
	tab1 = (unsigned char *)src;
	while (n--)
	{
		*tab++ = *tab1++;
	}
	return (dest);
}
