/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:56:57 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 21:08:10 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main ()
{
    char dest[] = "Hello world";
    const char src[]  = "Olá mundo";
	//Source and destination before memmove
    printf("Before ft_memmove >> dest = %s, src = %s\n\n", dest, src);
    ft_memmove(dest, src, 5);
    //Source and destination after memmove
    printf("After ft_memmove >> dest = %s, src = %s\n\n", dest, src);
    
    //Source and destination before memmove
    printf("Before memmove >> dest = %s, src = %s\n\n", dest, src);
    memmove(dest, src, 5);
    //Source and destination after memmove
    printf("After memmove >> dest = %s, src = %s\n\n", dest, src);
	return 0;
}