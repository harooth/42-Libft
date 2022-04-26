/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hagevorg <hagevorg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:06:25 by hagevorg          #+#    #+#             */
/*   Updated: 2022/04/06 17:06:40 by hagevorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	inb;
	char			a;

	inb = nb;
	if (nb < 0)
	{
		inb = (unsigned int)nb;
		write(fd, "-", 1);
		inb = -1 * inb;
	}
	if (inb > 9)
	{
		ft_putnbr_fd (inb / 10, fd);
		a = inb % 10 + 48;
		write(fd, &a, 1);
	}
	else
	{
		a = inb + 48;
		write(fd, &a, 1);
	}
}
