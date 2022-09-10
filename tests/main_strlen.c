/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:52:51 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 21:57:29 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;

	str1 = "uma string com 17";
	str2 = "string teste com 18";
	str3 = "mais uma string teste com 28";
	printf("%d\n", ft_strlen(str1));
	printf("%d\n", ft_strlen(str2));
	printf("%d\n", ft_strlen(str3));
	return (0);
