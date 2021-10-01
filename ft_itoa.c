/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 23:11:27 by jefernan          #+#    #+#             */
/*   Updated: 2021/10/01 11:00:57 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	i;
	unsigned int	nbr;
	int				count;
	char			*str;

	count = ft_count(n);
	nbr = (unsigned int)n;
	i = count;
	if (n < 0)
	{
		str = (char *)ft_calloc((count + 2), sizeof(char));
		str[0] = '-';
		nbr *= -1;
		i++;
	}
	else
	str = (char *)ft_calloc((count + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	if (nbr == 0)
		str[0] = '0';
	while (nbr != 0)
	{
		str[--i] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}
