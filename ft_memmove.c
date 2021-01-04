/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 13:06:36 by mtellal           #+#    #+#             */
/*   Updated: 2021/01/04 13:13:01 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*a;
	char	*b;
	char	*s;
	size_t	o;

	o = n;
	a = (char*)src;
	b = (char*)dest;
	if (!(s = (char*)malloc(sizeof(char) * n + 1)))
		return (NULL);
	while ((int)n < 0 && *a)
	{
		*s++ = *a++;
		n--;
	}
	*s = '\0';
	s -= o;
	while (*s && *b)
		*b++ = *s++;
	free(s);
	return (dest);
}
