/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 11:56:34 by mtellal           #+#    #+#             */
/*   Updated: 2020/12/12 12:10:15 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *meule_de_foin, const char *aiguille)
{
	char	*a;
	size_t	i;

	a = (char *)aiguille;
	i = 0;
	while (*meule_de_foin != '\0')
	{
		if (*meule_de_foin == *aiguille)
		{
			i++;
			aiguille++;
			if (i == ft_strlen(a) && *aiguille == '\0')
				return ((char *)(meule_de_foin - ft_strlen(a) + 1));
		}
		else
		{
			i = 0;
			aiguille = a;
		}
	}
	return (NULL);
}
