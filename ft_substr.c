/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiccini <spiccini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:41:56 by spiccini          #+#    #+#             */
/*   Updated: 2020/05/20 18:42:02 by spiccini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	ts;

	if (s == 0)
		return (0);
	ts = ft_strlen(s);
	if (start > ts)
		start = ts;
	if (len > (ts - start))
		len = (ts - start);
	ss = (char *)malloc((len + 1) * sizeof(char));
	if (ss == 0)
		return (0);
	ft_strlcpy(ss, &s[start], (len + 1));
	return (ss);
}
