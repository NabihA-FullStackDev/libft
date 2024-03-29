/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:15:03 by naali             #+#    #+#             */
/*   Updated: 2019/07/24 19:22:40 by nabih            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		ft_strdel(char **as)
{
	if (as != NULL)
	{
		if (*as != NULL)
			free(*as);
		*as = NULL;
	}
}
