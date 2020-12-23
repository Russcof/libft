/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 15:59:14 by mtellal           #+#    #+#             */
/*   Updated: 2020/12/23 17:04:09 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		if (!(tab = (char *)malloc(sizeof(char))))
			return (NULL);
		*tab = '\0';
		return (tab);
	}
	if (!(tab = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	tab = ft_strncpy(tab, (s + start), len);
	*(tab + len) = '\0';
	return (tab);
}
