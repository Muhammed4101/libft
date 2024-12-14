/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muharsla <muharsla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:50:08 by muharsla          #+#    #+#             */
/*   Updated: 2024/11/13 00:58:43 by muharsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	checker(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
		if (set[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		a;
	int		b;
	int		c;

	a = 0;
	c = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	b = ft_strlen(s1);
	while (s1[a] && checker(s1[a], (char *)set))
		a++;
	while (a < b && checker(s1[b - 1], (char *)set))
		b--;
	str = (char *)malloc(sizeof(char) * (b - a + 1));
	if (!str)
		return (NULL);
	while (a < b)
		str[c++] = s1[a++];
	str[c] = '\0';
	return (str);
}
