/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hagevorg <hagevorg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:34:28 by hagevorg          #+#    #+#             */
/*   Updated: 2022/04/13 17:39:50 by hagevorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;
	size_t		idx;

	if (!dest && !src)
		return (NULL);
	pdest = dest;
	psrc = src;
	idx = 0;
	while (idx < n)
	{
		pdest[idx] = psrc[idx];
		idx++;
	}
	return (dest);
}

// int main()
// {
//     char test[] = "";
// }
