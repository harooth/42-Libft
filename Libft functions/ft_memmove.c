/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hagevorg <hagevorg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:07:59 by hagevorg          #+#    #+#             */
/*   Updated: 2022/04/14 17:32:18 by hagevorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest;
	const char	*s;

	if (!dst && !src)
		return (NULL);
	i = 0;
	dest = dst;
	s = src;
	if (dest > s)
	{
		while (len-- > 0)
		{
			dest[len] = s[len];
		}
	}
	else
	{
		while (i < len)
		{
			dest[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// int main()
// {
// 	char src[] = "lorem ipsum dolor sit amet";
//     char *dst;
//     dst = src+1;
//     ft_memmove(dst, "consectetur", 5);
// 	printf("%s", dst);
// 	return 0;
// }