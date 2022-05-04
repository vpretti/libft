/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 22:27:50 by vpretti           #+#    #+#             */
/*   Updated: 2022/05/01 17:14:54 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	little_len = ft_strlen(little);
	if (!little)
		return (NULL);
	i = 0;
	if (little[0] == 0)
		return ((char *)big);
	while (big[i] && i <= len)
	{
		if (i + little_len > len)
			return (NULL);
		if (ft_strncmp(&big[i], &little[0], little_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
