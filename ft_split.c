/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 18:30:38 by mtellal           #+#    #+#             */
/*   Updated: 2020/12/15 18:58:38 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_nmot(char const *s, char c)
{
	unsigned int	m;
	char const		*a;

	m = 0;
	a = s;
	while (*a != '\0')
	{
		if (*a != c)
		{
			m++;
			while (*a != c && *(a + 1) != '\0')
				a++;
		}
		a++;
	}
	return (m);
}

unsigned int		ft_nlettre(char const *s, char c)
{
	unsigned int	l;
	char const		*a;

	l = 0;
	a = s;
	while (*a == c && *a != '\0')
		a++;
	while (*a != c && *a != '\0')
		l++;
	return (l);
}

void				ft_scpy(char *d, char const *s, unsigned int i)
{
	while (i-- > 0)
		*d++ = *s++;
	*d = '\0';
}

char				**ft_split(char const *s, char c)
{
	char			**t;
	char			*tab;
	unsigned int	mot;

	tab = NULL;
	mot = ft_nmot(s, c);
	if (!s || (t = (char **)malloc(sizeof(char *) * (mot + 1))) == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (*s != c)
		{
			if ((tab = (char *)malloc(sizeof(char) * ft_nlettre(s, c)
							+ 1)) == NULL)
				return (NULL);
			ft_scpy(tab, s, ft_nlettre(s, c));
			*t++ = tab;
			while (*s != c && *(s + 1) != '\0')
				s++;
		}
		s++;
	}
	*t = 0;
	return ((t - mot));
}
