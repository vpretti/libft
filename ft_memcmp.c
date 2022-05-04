/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:48:38 by vpretti           #+#    #+#             */
/*   Updated: 2022/05/01 17:36:39 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	size_t			i;
	unsigned char	*s1_u;
	unsigned char	*s2_u;

	s1_u = (unsigned char *) s1;
	s2_u = (unsigned char *) s2;
	i = 0;
	while (size--)
	{
		if (s1_u[i] != s2_u[i])
		{
			return (s1_u[i] - s2_u[i]);
		}
		i++;
	}
	return (0);
}
