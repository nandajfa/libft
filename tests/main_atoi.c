/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:22:13 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 20:25:08 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char str[] = "548697";
	char str2[] = "-548697";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", ft_atoi("698"));
	printf("%d\n", ft_atoi("123"));
	printf("%d\n", ft_atoi(str2));
}