/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 19:34:01 by mtellal           #+#    #+#             */
/*   Updated: 2020/12/21 14:48:19 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*tab;
	unsigned int	i;
	char const		*r;

	i = 0;
	tab = NULL;
	r = s;
	if (s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == '\n' || *s == '\t' || *s == ' ')
			i++;
		s++;
	}
	s = r;
	if ((tab = (char *)malloc(sizeof(char) * (ft_strlen(s) - i)
					+ 1)) == NULL)
		return (NULL);
	r = tab;
	while ((*s == '\n' || *s == '\t' || *s == ' ') && *s != '\0')
		s++;
	while ((!(*s == '\n' || *s == '\t' || *s == ' ')) && *s != '\0')
		*tab++ = *s++;
	*tab = '\0';
	return ((char *)r);
}
