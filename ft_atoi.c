/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiccini <spiccini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:30:07 by spiccini          #+#    #+#             */
/*   Updated: 2020/05/15 19:08:07 by spiccini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_turnnumber(const char *str, int pos, int isneg, int number)
{
	int i;
	int neg;
	int num;

	i = pos;
	neg = isneg;
	num = number;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]))
		{
			num = num * 10 + (str[i] - '0');
			i++;
		}
		else
		{
			num = num * neg;
			return (num);
		}
	}
	num = num * neg;
	return (num);
}

int	ft_atoi(const char *str)
{
	int i;
	int num;
	int neg;

	neg = 1;
	i = 0;
	num = 0;
	while ((str[i] == ' ') || (str[i] == '\f') || (str[i] == '\n') ||
	(str[i] == '\r') || (str[i] == '\t') || (str[i] == '\v'))
		i++;
	if ((str[i] == 45) || (str[i] == 43))
	{
		if (str[i] == 45)
			neg = -1;
		i++;
	}
	if ((str[i] == 45) || (str[i] == 43))
		return (num);
	num = ft_turnnumber(str, i, neg, num);
	return (num);
}
