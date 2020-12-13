/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 15:59:14 by mtellal           #+#    #+#             */
/*   Updated: 2020/12/13 16:27:55 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_substr(char const *s, unsigned int start, size_t len)
{
	void			*p;
	char			*tab;
	unsigned int	i;

	i = 0;
	tab = NULL;
	p = NULL;
	while (*s != '\0')
	{
		if (i == start && ft_strlen(s) >= len)
		{
			if ((tab = (char *)malloc(len * sizeof(char) + 1)) == NULL)
				return (NULL);
			p = (void *)tab;
			ft_strncpy(tab, s, len);
		}
		s++;
		i++;
	}
	*(tab + len) = '\0';
	return (p);
}
