/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:47:30 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 21:51:36 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	*src;
	char	*dup;

	src = "Heloooo";
	dup = ft_strdup(src);
	printf ("src = %s and dup = %s\n", src, dup);
	return (0);
}