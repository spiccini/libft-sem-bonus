/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiccini <spiccini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:39:50 by spiccini          #+#    #+#             */
/*   Updated: 2020/05/18 15:02:34 by spiccini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strmap;
	int		i;

	if (s == 0)
		return (0);
	i = 0;
	strmap = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (strmap == 0)
		return (0);
	while (s[i] != '\0')
	{
		strmap[i] = f(i, s[i]);
		i++;
	}
	strmap[i] = '\0';
	return (strmap);
}
