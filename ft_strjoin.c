/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muharsla <muharsla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:17:00 by muharsla          #+#    #+#             */
/*   Updated: 2024/10/19 17:39:05 by muharsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	int		d;
	char	*c;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	c = (char *)malloc(sizeof(char) * (a + b + 1));
	if (!c)
		return (NULL);
	d = 0;
	while (d < a)
	{
		c[d] = s1[d];
		d++;
	}
	while (d < a + b)
	{
		c[d] = s2[d - a];
		d++;
	}
	c[d] = '\0';
	return (c);
}
