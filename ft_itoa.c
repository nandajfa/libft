/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 23:11:27 by jefernan          #+#    #+#             */
/*   Updated: 2021/10/01 20:05:50 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	i;

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
	int		i;
	int		count;
	char	*str;

	count = ft_count(n);
	i = count;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		str = (char *)ft_calloc((count + 2), sizeof(char));
		str[0] = '-';
		n *= -1;
	}
	else
		str = (char *)ft_calloc((count + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	while (n != 0 || i != 0)
	{
		str[0] = '0';
		str[--i] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
