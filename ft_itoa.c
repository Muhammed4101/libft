/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muharsla <muharsla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:59:05 by muharsla          #+#    #+#             */
/*   Updated: 2024/10/27 14:16:12 by muharsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_word(long int n, int *result)
{
	int	digit;

	digit = 0;
	if (n < 0)
	{
		n *= -1;
		*result = 1;
		digit++;
	}
	if (n == 0)
		digit++;
	while (n > 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	num;
	int			result;
	int			digit;

	num = n;
	result = 0;
	digit = count_word(num, &result);
	str = (char *)malloc(sizeof(char) * (digit + 1));
	if (!str)
		return (NULL);
	if (result == 1)
	{
		str[0] = '-';
		num *= -1;
	}
	str[digit--] = 0;
	while (num > 0)
	{
		str[digit--] = 48 +(num % 10);
		num /= 10;
	}
	if (n == 0)
		str[0] = 48;
	return (str);
}
