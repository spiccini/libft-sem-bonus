/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiccini <spiccini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:38:00 by spiccini          #+#    #+#             */
/*   Updated: 2020/05/18 15:01:54 by spiccini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_separation(int j, char **split, char c, char const *s)
{
	int i;
	int x;
	int z;

	i = 0;
	x = 0;
	z = 0;
	while (x < j)
	{
		if (s[i] == c || s[i] == '\0')
		{
			if ((i - z) >= 1)
			{
				split[x] = ft_substr(s, z, (i - z));
				x++;
				z = (i + 1);
			}
			else
				z++;
		}
		i++;
	}
	return (split);
}

int		ft_count(char const *s, char c)
{
	int i;
	int j;
	int x;

	i = 0;
	j = 0;
	x = 0;
	while (s[0] != '\0' && s[i] != '\0')
	{
		if (s[i] != c && x == 0)
		{
			x = 1;
			j++;
		}
		else if (s[i] == c)
			x = 0;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		j;

	if (s == 0)
		return (0);
	j = ft_count(s, c);
	split = (char **)malloc((j + 1) * sizeof(char *));
	if (split == 0)
		return (0);
	ft_separation(j, split, c, s);
	split[j] = NULL;
	return (split);
}
