/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 11:03:26 by mtellal           #+#    #+#             */
/*   Updated: 2020/12/12 11:13:20 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t taille)
{
	size_t t;

	t = ft_strlen(dst) + ft_strlen(src);
	while (*dst != '\0')
	{
		dst++;
		taille--;
	}
	while (*src != '\0' && taille > 1)
	{
		*dst++ = *src++;
		taille--;
	}
	*dst = '\0';
	return (t);
}
