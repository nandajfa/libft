/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 22:05:15 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 22:07:08 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main (void)
{
	const char	str[] = "http://www.tutorialspoint.com";
	const char	ch = '.';
	char		*ret;

	ret = ft_strrchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
	
	return (0);
}

/*
busca um caractere numa string e retorna o ponteiro para a última ocorrência
*/