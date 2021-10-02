/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:18:07 by jefernan          #+#    #+#             */
/*   Updated: 2021/10/02 20:20:34 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			words++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (words);
}

static int	ft_wordlen(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i++);
}

static char	*worddup(const char *s, int len)
{
	char	*str;
	int		i;

	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	*ft_free(char **tab, int stop)
{
	int	count;

	count = 0;
	while (count < stop)
		free(tab[count]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		len;
	int		word;
	int		count;

	if (s == NULL)
		return (NULL);
	word = ft_countwords(s, c);
	tab = malloc((word + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	count = 0;
	while (count < word)
	{
		len = ft_wordlen(s, c);
		if (len)
		{
			tab[count] = worddup(s, len);
			if (tab[count++] == NULL)
				return (ft_free(tab, count - 1));
		}
		s += len + 1;
	}
	tab[count] = NULL;
	return (tab);
}
