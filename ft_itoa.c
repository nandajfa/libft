/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 23:11:27 by jefernan          #+#    #+#             */
/*   Updated: 2021/09/30 09:12:19 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
	{
		i++;
		n = -1 * n;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	i;
	int		count;
	char	*str;

	count = ft_count(n);
	i = (long)n;
	str = (char *)malloc((count + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[count] = '\0';
	if (i == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		i *= -i;
	}
	count--;
	while (n != 0)
	{
		str[count] = i % 10 + '0';
		i /= 10;
		count--;
	}
	return (str);
}
