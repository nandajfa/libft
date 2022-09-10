/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:54:12 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 22:09:49 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int				main(void)
{
	int 	src_size;
	char 	*src;
	char 	*dest;

	src = ft_calloc(11, sizeof(char));
	dest = ft_calloc(8, sizeof(char));
	src = "Hello world";
	src_size = ft_strlcpy(dest, src, 8);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("src_size: %d\n", src_size);
	return(0);
}

/* 
- **dest:** destino da cópia
- **src:** origem de onde os dados serão copiados
- **dest size:** quantidade de dados que serão copiados para o **dest**
*/