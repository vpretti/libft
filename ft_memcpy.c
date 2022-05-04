/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:02:48 by vpretti           #+#    #+#             */
/*   Updated: 2022/05/01 17:49:11 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*src_u;
	unsigned char	*dst_u;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	src_u = (unsigned char *)src;
	dst_u = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		*dst_u = *src_u;
		dst_u++;
		src_u++;
		i++;
	}
	return (dst);
}
