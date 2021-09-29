/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:18:35 by jefernan          #+#    #+#             */
/*   Updated: 2021/09/29 18:50:08 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)malloc((len + 1) * sizeof(*s));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = (s[start] + i);
		i++;
	}
	str[i] = '\0';
	return (str);
}
