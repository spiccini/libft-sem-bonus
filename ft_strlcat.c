/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiccini <spiccini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:38:55 by spiccini          #+#    #+#             */
/*   Updated: 2020/05/18 15:03:39 by spiccini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t t)
{
	size_t tsrc;
	size_t tdst;
	size_t i;
	size_t soma;

	tdst = ft_strlen(dst);
	tsrc = ft_strlen(src);
	i = 0;
	if (t > tdst)
		soma = tdst + tsrc;
	else
		soma = t + tsrc;
	while (src[i] != '\0' && tdst < (t - 1) && t > 0)
	{
		dst[tdst] = src[i];
		i++;
		tdst++;
	}
	if (tdst <= t)
		dst[tdst] = '\0';
	return (soma);
}
