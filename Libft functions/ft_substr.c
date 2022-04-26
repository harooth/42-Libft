/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hagevorg <hagevorg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:12:14 by hagevorg          #+#    #+#             */
/*   Updated: 2022/04/14 17:26:47 by hagevorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	str = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && len != 0)
		{
			str[j] = s[i];
			j++;
			len--;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

// int main()
// {
//     char str[] = "lorem ipsum dolor sit amet";
//     printf("%s", ft_substr(str, 0, 10));
//     return(0);
// }
