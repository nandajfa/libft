/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:53:22 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 22:10:45 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char *str;
	char *substr;

	str = "ola tudo bem";
	substr = ft_substr(str, 1, 10);
	printf ("%s should be a substr of %s", substr, str);
	return (0);
}