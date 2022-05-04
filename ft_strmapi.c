/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:12:43 by vpretti           #+#    #+#             */
/*   Updated: 2022/05/01 17:14:38 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str_mapi;
	unsigned int	i;

	i = 0;
	str_mapi = (char *) malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (!str_mapi)
		return (NULL);
	while (s[i])
	{
		str_mapi[i] = f(i, s[i]);
		i++;
	}
	str_mapi[i] = '\0';
	return (str_mapi);
}
