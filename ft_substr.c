/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muharsla <muharsla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:46:38 by muharsla          #+#    #+#             */
/*   Updated: 2024/11/09 16:39:07 by muharsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	b;
	size_t	c;

	if (!s)
		return (NULL);
	b = ft_strlen(s);
	if (start >= b)
		len = 0;
	else if (b < len + start)
		len = b - start;
	a = (char *)malloc((sizeof(char) * len) + 1);
	if (a == NULL)
		return (NULL);
	c = 0;
	while (c < len && s[start + c])
	{
		a[c] = s[start + c];
		c++;
	}
	a[c] = '\0';
	return (a);
}
