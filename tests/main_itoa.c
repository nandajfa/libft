/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:50:31 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 20:50:57 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	char	*result;
	int		numb;

	numb = 22141;
	result = ft_itoa(numb);
	printf("%d: %s\n", numb, result);
	numb = 2147483647;
	result = ft_itoa(numb);
	printf("%d: %s\n", numb, result);
	numb = -2147483648;
	result = ft_itoa(numb);
	printf("%d: %s\n", numb, result);
	numb = 0;
	result = ft_itoa(numb);
	printf("%d: %s\n", numb, result);
	return (0);
}