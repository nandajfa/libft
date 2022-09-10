/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:33:02 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 20:46:08 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	ch = 'a';

	if (ft_isalnum(ch))
        printf("\nCharacter is alphanumeric\n");
    else
        printf("\nCharacter is not alphanumeric\n");
	return (0);
}

