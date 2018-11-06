/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 14:51:08 by bvilla            #+#    #+#             */
/*   Updated: 2018/10/29 17:57:15 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*ret;

	ret = s1;
	while (*s1)
		s1++;
	while (n--)
	{
		*(s1++) = *(s2);
		if (!*s2)
			return (ret);
		else
			s2++;
	}
	*s1 = '\0';
	return (ret);
}