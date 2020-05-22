/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiccini <spiccini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:34:28 by spiccini          #+#    #+#             */
/*   Updated: 2020/05/15 14:24:52 by spiccini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_counter(long long number, int cont)
{
	while (number > 0)
	{
		number = number / 10;
		cont++;
	}
	return (cont);
}

char	*ft_turnstr(char *memory, int cont, long long cnum, int neg)
{
	while (cnum > 0)
	{
		memory[cont] = (cnum % 10) + '0';
		cnum = cnum / 10;
		cont--;
	}
	if (neg == -1)
		memory[cont] = '-';
	return (memory);
}

char	*ft_itoa(int num)
{
	long long	cnum;
	char		*memory;
	int			cont;
	int			neg;

	cont = 0;
	neg = 1;
	cont = (num == 0) ? 1 : cont;
	cnum = num;
	if (num < 0)
	{
		cnum = cnum * (-1);
		neg = -1;
		cont++;
	}
	cont = ft_counter(cnum, cont);
	memory = malloc(cont + 1);
	if (memory == 0)
		return (0);
	memory[cont--] = '\0';
	if (num == 0)
		memory[cont] = 0 + '0';
	return (ft_turnstr(memory, cont, cnum, neg));
}
