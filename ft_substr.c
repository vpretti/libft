/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:11:02 by vpretti           #+#    #+#             */
/*   Updated: 2022/05/01 17:08:37 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	if (start > ft_strlen(s))
	{
		res = (char *) malloc(1 * sizeof(char));
		if (!res)
			return (NULL);
		res [0] = '\0';
		return (res);
	}
	if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	res = (char *) malloc (sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = s[i + start];
		i++;
	}
	res[i] = '\0';
	return (res);
}
