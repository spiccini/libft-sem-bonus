/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiccini <spiccini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:38:44 by spiccini          #+#    #+#             */
/*   Updated: 2020/05/18 14:12:05 by spiccini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ns;
	int		soma;
	int		ts1;
	int		ts2;

	if (s1 == 0 || s2 == 0)
		return (0);
	ts1 = ft_strlen(s1);
	ts2 = ft_strlen(s2);
	soma = (ts1 + ts2);
	ns = malloc((soma + 1) * sizeof(char));
	if (ns == 0)
		return (0);
	ft_memcpy(ns, s1, ts1);
	ft_memcpy(&ns[ts1], s2, ts2);
	ns[soma] = '\0';
	return (ns);
}
