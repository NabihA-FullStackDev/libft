/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:56:36 by naali             #+#    #+#             */
/*   Updated: 2019/07/24 19:21:03 by nabih            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		*ft_memalloc(size_t size)
{
	size_t			i;
	void			*tmp;
	unsigned char	*cpy;

	i = 0;
	if ((tmp = malloc(size)) == NULL)
		return (NULL);
	cpy = (unsigned char*)tmp;
	while (i < size)
	{
		cpy[i] = '\0';
		i = i + 1;
	}
	return (tmp);
}
