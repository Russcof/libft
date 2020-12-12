/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 14:08:05 by mtellal           #+#    #+#             */
/*   Updated: 2020/12/12 14:12:42 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *meule_de_foin, const char *aiguille, size_t n)
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
			if (i == n)
				return ((char *)(meule_de_foin - i + 1));
		}
		else
		{
			i = 0;
			aiguille = a;
		}
		meule_de_foin++;
	}
	return (NULL);
}
