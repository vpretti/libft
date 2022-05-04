/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 23:22:07 by vpretti           #+#    #+#             */
/*   Updated: 2022/05/01 17:13:11 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	const char	*str_str;
	int			signal;
	int			res;

	str_str = str;
	signal = 1;
	res = 0;
	while (ft_isascii(*str_str) == 2)
		str_str++;
	if (*str_str == '+' || *str_str == '-')
	{
		if (*str_str == '-')
			signal *= -1;
		str_str++;
	}
	while (ft_isdigit(*str_str))
	{
		res = (res * 10) + (*str_str - '0');
		str_str++;
	}
	return (res * signal);
}
