/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:54:35 by arsciand          #+#    #+#             */
/*   Updated: 2020/03/05 01:23:49 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared_libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dst;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(dst = ft_memalloc(len + 1)))
		return (NULL);
	if (s1)
		ft_strcpy(dst, s1);
	if (s2)
		ft_strcat(dst, s2);
	return (dst);
}
