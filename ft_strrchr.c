/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiccini <spiccini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:40:38 by spiccini          #+#    #+#             */
/*   Updated: 2020/05/14 15:40:42 by spiccini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int local;
	int i;

	i = 0;
	local = c;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			local = i;
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	if (local == c)
		return (0);
	return ((char *)&str[local]);
}
