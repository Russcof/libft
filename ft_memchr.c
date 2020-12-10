/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:08:54 by mtellal           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/12/09 14:20:41 by mtellal          ###   ########.fr       */
=======
/*   Updated: 2020/12/09 14:11:12 by mtellal          ###   ########.fr       */
>>>>>>> 10503954ae2af7d9b12805eb755d414987f881e3
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
<<<<<<< HEAD
	const char *tab;
=======
	char *tab;
>>>>>>> 10503954ae2af7d9b12805eb755d414987f881e3

	tab = s;
	while (n--)
	{
		if (*tab == c)
		{
<<<<<<< HEAD
			return ((void *)tab);
=======
			return (tab);
>>>>>>> 10503954ae2af7d9b12805eb755d414987f881e3
		}
		tab++;
	}
	return (NULL);
}
