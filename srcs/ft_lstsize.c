/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 11:49:51 by naali             #+#    #+#             */
/*   Updated: 2019/07/24 19:20:57 by nabih            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_lstsize(t_list *alst)
{
	size_t		size;
	t_list		*tmp;

	size = 0;
	tmp = NULL;
	if (alst != NULL)
	{
		tmp = alst;
		while (tmp != NULL)
		{
			size = size + 1;
			tmp = tmp->next;
		}
	}
	return (size);
}
