/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:08:30 by jefernan          #+#    #+#             */
/*   Updated: 2021/09/29 18:04:23 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_size;
	size_t	i;

	i = 0;
	needle_size = ft_strlen(needle);
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && (i < len))
	{
		if ((ft_strncmp(haystack, needle, needle_size) == 0)
			&& (i + needle_size < len))
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}

/*exemplo
 char *big = "O rato roeu a roupa do rei de Roma";
 char *little = "roupa";
 quantidade de bytes de busca
 int main(void)
{
	ft_strmapi(big, little, 19); - retorna = "roupa do rei de Roma"
}
retorna onde começou a encontrar.
Compara se for igual retorna 0, retorna a big no começo*/

