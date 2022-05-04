/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:56:23 by vpretti           #+#    #+#             */
/*   Updated: 2022/05/01 17:07:30 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*mem_s;
	size_t			i;

	i = 0;
	mem_s = (unsigned char *)s;
	while (i < n)
	{
		mem_s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
