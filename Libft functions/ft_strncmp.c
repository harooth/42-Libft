/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hagevorg <hagevorg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:49:06 by hagevorg          #+#    #+#             */
/*   Updated: 2022/04/13 17:22:50 by hagevorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!s1 && !s2)
		return (0);
	while (*s1 == *s2 && n != 0 && (*s1 != '\0'))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

// int main()
// {
//     printf("%d\n", ft_strncmp("test\200", "test\0", 6));
//     printf("%d", strncmp("test\200", "test\0", 6));
// }
