/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiccini <spiccini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 12:32:34 by spiccini          #+#    #+#             */
/*   Updated: 2020/05/18 12:56:12 by spiccini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux_dst;
	unsigned char	*aux_src;

	aux_dst = (unsigned char *)dst;
	aux_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		aux_dst[i] = aux_src[i];
		if (aux_src[i] == (unsigned char)c)
			return (&aux_dst[i + 1]);
		i++;
	}
	return (0);
}
