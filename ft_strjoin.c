/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:58:35 by rdi-russ          #+#    #+#             */
/*   Updated: 2022/01/17 13:57:44 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = ((char *)malloc (len1 + len2 + 1));
	if (!(s3))
		return (0);
	ft_memcpy(s3, s1, len1);
	ft_memcpy(s3 + len1, s2, len2);
	s3[len1 + len2] = '\0';
	return (s3);
}
