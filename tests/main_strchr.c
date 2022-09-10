/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:19:19 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 21:47:21 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void) 
{
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char *ret;

	ret = strchr(str, ch);

	printf("String after |%c| is - |%s|\n", ch, ret);
	ret = ft_strchr(str, ch);
	printf("String after ft |%c| is - |%s|\n", ch, ret);
   return(0);
}