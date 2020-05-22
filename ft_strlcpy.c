/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiccini <spiccini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:39:04 by spiccini          #+#    #+#             */
/*   Updated: 2020/05/18 14:06:35 by spiccini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *org, size_t t)
{
	size_t i;
	size_t torg;
	size_t x;

	if (dst == 0 || org == 0)
		return (0);
	torg = ft_strlen(org);
	i = 0;
	x = (torg < t) ? (torg + 1) : t;
	if (t == 0)
		return (torg);
	while (i != x)
	{
		dst[i] = org[i];
		i++;
	}
	dst[i - 1] = '\0';
	return (torg);
}
