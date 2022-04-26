/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hagevorg <hagevorg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:52:00 by hagevorg          #+#    #+#             */
/*   Updated: 2022/04/18 16:48:51 by hagevorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	charec;

	str = (unsigned char *)s;
	charec = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == charec)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     char test[] = "barev";
//     // printf("%s", memchr("barevbarev", 'r', 3));
//     // printf("%s", ft_memchr("barevbarev", 'r', 3));
// }
