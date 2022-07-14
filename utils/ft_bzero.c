/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenaubry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:11:05 by kenaubry          #+#    #+#             */
/*   Updated: 2021/11/27 18:11:07 by kenaubry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_cpy;

	s_cpy = s;
	while (n--)
		*s_cpy++ = 0;
}
