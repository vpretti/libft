/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:12:02 by vpretti           #+#    #+#             */
/*   Updated: 2022/05/01 18:11:37 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_counter(const char *s, char c)
{
	size_t	i;
	int		flag;
	int		counter;

	i = 0;
	flag = 0;
	counter = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && s[i] != '\0' && flag == 0)
		{
			counter++;
			flag = 1;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		flag;
	char	**result;

	i = 0;
	j = 0;
	flag = -1;
	result = malloc((words_counter(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && flag < 0)
			flag = i;
		else if ((s[i] == c || i == ft_strlen(s)) && flag >= 0)
		{
			result[j++] = ft_substr(s, flag, i - flag);
			flag = -1;
		}
		i++;
	}
	result[j] = 0;
	return (result);
}
