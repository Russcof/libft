/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:54:15 by mtellal           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/12/09 14:32:15 by mtellal          ###   ########.fr       */
=======
/*   Updated: 2020/12/08 16:58:28 by mtellal          ###   ########.fr       */
>>>>>>> 10503954ae2af7d9b12805eb755d414987f881e3
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void const *src, int c, size_t n)
{
<<<<<<< HEAD
	unsigned char	*tab;
	const unsigned char *tab1;
=======
	unsigned char *tab;
	unsigned char *tab1;
>>>>>>> 10503954ae2af7d9b12805eb755d414987f881e3

	tab = dest;
	tab1 = src;
	while (n--)
	{
		if (*tab == c)
		{
			return ((void *)(tab + 1));
		}
		*tab++;
	}
	return (NULL);
}
