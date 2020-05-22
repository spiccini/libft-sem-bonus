/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiccini <spiccini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:36:12 by spiccini          #+#    #+#             */
/*   Updated: 2020/05/14 16:01:37 by spiccini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int x, size_t n)
{
	int		c;
	char	*aux;

	c = 0;
	aux = str;
	while (n > 0)
	{
		aux[c] = x;
		c++;
		n--;
	}
	return (aux);
}
