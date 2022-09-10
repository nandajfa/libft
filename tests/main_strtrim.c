/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:53:18 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 22:10:12 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*set;

	str = "abc affffff abc";
	set = "abc";
	printf("%s", ft_strtrim(str, set));
	return (0);
}