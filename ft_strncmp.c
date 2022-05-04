/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 05:07:05 by vpretti           #+#    #+#             */
/*   Updated: 2022/05/01 20:44:58 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	s1_char;
	unsigned char	s2_char;

	if (n == 0)
		return (0);
	while (*s1 && *s2 && (*s1 == *s2) && (n - 1))
	{
		s1++;
		s2++;
		n--;
	}
	s1_char = (unsigned char)*s1;
	s2_char = (unsigned char)*s2;
	return (s1_char - s2_char);
}
