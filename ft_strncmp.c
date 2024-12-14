/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muharsla <muharsla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:54:59 by muharsla          #+#    #+#             */
/*   Updated: 2024/10/19 11:54:59 by muharsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	m;

	m = 0;
	if (n == 0)
		return (0);
	while ((s1[m] != '\0' || s2[m] != '\0') && m < n)
	{
		if (s1[m] != s2[m])
			return ((unsigned char)s1[m] - (unsigned char)s2[m]);
		m++;
	}
	return (0);
}
