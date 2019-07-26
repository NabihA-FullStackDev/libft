/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:52:38 by naali             #+#    #+#             */
/*   Updated: 2019/07/24 19:22:23 by nabih            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *s, int c)
{
	char		conv;
	char		*cpy;

	conv = (char)c;
	cpy = (char*)s;
	while (*cpy != '\0')
	{
		if (*cpy == conv)
			return (cpy);
		cpy = cpy + 1;
	}
	if (conv == '\0')
		return (cpy);
	return (NULL);
}
