/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:08:13 by jefernan          #+#    #+#             */
/*   Updated: 2021/09/28 12:52:02 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)s[i]);
		i--;
	}
	if (s[i] == c)
		return ((char *)s[i]);
	return (NULL);
}
