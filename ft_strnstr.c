/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiccini <spiccini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:40:20 by spiccini          #+#    #+#             */
/*   Updated: 2020/05/14 15:40:22 by spiccini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t t)
{
	size_t tam_l;
	size_t i;

	i = 0;
	tam_l = ft_strlen(l);
	if (tam_l == 0)
		return ((char *)b);
	while (b[i] != '\0' && tam_l <= t)
	{
		if (ft_strncmp(&b[i], l, tam_l) == 0)
			return ((char *)&b[i]);
		i++;
		t--;
	}
	return (0);
}
