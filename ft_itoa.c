/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 16:08:09 by mtellal           #+#    #+#             */
/*   Updated: 2020/12/16 16:17:29 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ndigit(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	if (n > 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		zero;

	zero = ft_ndigit(n);
	if ((tab = (char *)malloc(sizeof(char) * zero + 1)) == NULL)
		return (NULL);
	if (n == -2147483648)
	{
		tab = "-2147483648";
		return (tab);
	}
	if (n < 0)
	{
		tab[0] = '-';
		n *= -1;
	}
	tab[zero--] = '\0';
	while (n > 0)
	{
		tab[zero--] = (unsigned char)((n % 10) + '0');
		n /= 10;
	}
	return (tab);
}
