/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:08:59 by jefernan          #+#    #+#             */
/*   Updated: 2021/09/24 10:42:53 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*des;
	char	*sr;

	i = 0;
	des = (char *)dst;
	sr = (char *)src;
	if (src > dst)
	{
		while (i < len)
		{
			des[i] = sr[i];
			i++;
		}
	}
	else
	{
		i = len - i;
		while (i < len)
		{
			des[i] = sr[i];
			i--;
		}
	}
	return (dst);
}
