/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <pbourmea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 11:42:59 by pbourmea          #+#    #+#             */
/*   Updated: 2017/06/05 13:53:44 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strdup(const char *s1)
// {
// 	int		i;
// 	char	*dup;
// 	int len;
//
// 	len = ft_strlen(s1);
// 	i = 0;
// 	dup = malloc(sizeof(char) * (len));
// 	if (!dup)
// 		return (NULL);
// 	while (s1[i] != '\0')
// 	{
// 		dup[i] = s1[i];
// 		i++;
// 	}
// 	dup[len] = '\0';
// 	return (dup);
// }

char				*ft_strdup(const char *s1)
{
	char	*res;
	int		size;

	size = ft_strlen(s1);
	res = malloc(sizeof(char) * (size + 1));
	if (res)
	{
		ft_memcpy(res, s1, size);
		res[size] = '\0';
	}
	return (res);
}
