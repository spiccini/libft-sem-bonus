/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiccini <spiccini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:35:04 by spiccini          #+#    #+#             */
/*   Updated: 2020/05/22 18:09:36 by spiccini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*cs;

	cs = (unsigned char*)s;
	i = 0;
	while (n > 0)
	{
		if ((unsigned char)c == cs[i])
			return ((void*)&cs[i]);
		i++;
		n--;
	}
	return (0);
}
