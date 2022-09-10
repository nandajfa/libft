/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:53:16 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 20:56:10 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    main (void)
{
    char    mem_dest[20];
    char    mem_src[] = "Hello world";
    size_t    n;
	char	*str;

	n = 7;
	str = ft_memcpy(mem_dest, mem_src, n);
	printf("My function: %s\n", str);
    printf("Original function: %p", memcpy(mem_dest, mem_src, n));
    //printf("Original function: %p", ft_memcpy(mem_dest, mem_src, n));
    return (0);
}