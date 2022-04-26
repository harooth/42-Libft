/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hagevorg <hagevorg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:44:07 by hagevorg          #+#    #+#             */
/*   Updated: 2022/04/06 15:47:16 by hagevorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret_value;
	char	*str;

	ret_value = NULL;
	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == c)
		{
			ret_value = str;
		}
		str++;
	}
	if (c == '\0')
		return (str + ft_strlen(str));
	return (ret_value);
}

// int main()
// {
//     char test[] = "barevayo";
//     printf("%s", ft_strrchr(test, 'a'));
//     return(0);
// }
