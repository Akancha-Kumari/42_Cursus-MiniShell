/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:24:52 by akumari           #+#    #+#             */
/*   Updated: 2025/03/25 13:25:22 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

char	*ft_strndup(char *src, size_t len)
{
	char	*cpy_str;
	size_t	i;

	cpy_str = (char *)malloc(len + 1);
	if (cpy_str == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0' && i < len)
	{
		cpy_str[i] = src[i];
		i++;
	}
	cpy_str[i] = '\0';
	return (cpy_str);
}
