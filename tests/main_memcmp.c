/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:52:45 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 20:52:56 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	str1[15];
	char	str2[15];
	int		ret;

	memcpy(str1, "abcdef", 6);
	memcpy(str2, "ABCDEF", 6);
	ret = ft_memcmp(str1, str2, 5);
	if (ret > 0)
		printf("str2 is less than str1");
	else if (ret < 0)
		printf("str1 is less than str2");
	else
		printf("str1 is equal to str2");
	return (0);
}