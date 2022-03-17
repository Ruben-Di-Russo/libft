/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:44:44 by rdi-russ          #+#    #+#             */
/*   Updated: 2022/01/10 16:55:56 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = size * count;
	dst = malloc(tot_size);
	if (!(dst))
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}
