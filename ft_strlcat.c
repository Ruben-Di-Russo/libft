/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:01:33 by rdi-russ          #+#    #+#             */
/*   Updated: 2022/01/17 14:58:53 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_lenght;
	size_t	dst_lenght;

	i = 0;
	src_lenght = ft_strlen(src);
	dst_lenght = ft_strlen(dst);
	if (dstsize == 0)
		return (src_lenght);
	while (src[i] != '\0' && dst_lenght + i < dstsize - 1)
	{
		dst[dst_lenght + i] = src[i];
		i++;
	}
	if (i > 0)
		dst[dst_lenght + i] = '\0';
	if (dst_lenght < dstsize)
		return (dst_lenght + src_lenght);
	return (dstsize + src_lenght);
}
