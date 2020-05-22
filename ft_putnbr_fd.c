/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiccini <spiccini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:36:52 by spiccini          #+#    #+#             */
/*   Updated: 2020/05/18 14:55:19 by spiccini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long long	cnum;

	cnum = n;
	if (cnum < 0)
	{
		ft_putchar_fd('-', fd);
		cnum = cnum * -1;
	}
	c = (cnum % 10) + '0';
	cnum = cnum / 10;
	if (cnum > 0)
		ft_putnbr_fd(cnum, fd);
	ft_putchar_fd(c, fd);
}
