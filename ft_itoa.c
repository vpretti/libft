/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:12:22 by vpretti           #+#    #+#             */
/*   Updated: 2022/05/01 17:05:38 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_tam(int n)
{
	int	tam;

	tam = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		tam++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		tam++;
	}
	return (tam);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = num_tam(n) - 1;
	str = malloc ((num_tam(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[num_tam(n)] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (str);
}
