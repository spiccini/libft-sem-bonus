/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiccini <spiccini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:38:27 by spiccini          #+#    #+#             */
/*   Updated: 2020/05/18 15:02:17 by spiccini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	t;
	char	*ns;

	t = (ft_strlen(s) + 1);
	ns = malloc(t);
	if (ns == 0)
		return (0);
	ft_strlcpy(ns, s, t);
	return (ns);
}
