/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:11:30 by vpretti           #+#    #+#             */
/*   Updated: 2022/05/01 17:54:11 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*src_u;
	unsigned char	*dst_u;

	src_u = (unsigned char *)src;
	dst_u = (unsigned char *)dst;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (dst > src)
	{
		while (n)
		{
			dst_u[n - 1] = (unsigned char)src_u[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
