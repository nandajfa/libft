/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:19:01 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 21:50:11 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

int main(void)
{
	int	s;
	int	r;

	s = -1;
	while (++s <= 13)
	{
		char	src[5] = "Love";
		char	dst[9] = "Home";
		if (s < 1)
		{
			printf("src:%s |dst:%s\n", src, dst);
			printf("r = ft_strlcat(dst, src, size)\n");
		}
		r = ft_strlcat(dst, src, s);
		printf("size:%d | src:%s | dst:%s | return: %d\n", s, src, dst, r);
	}
	return (0);
}