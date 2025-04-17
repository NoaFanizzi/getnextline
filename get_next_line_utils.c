/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofanizz <nofanizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:24:28 by nofanizz          #+#    #+#             */
/*   Updated: 2024/11/26 18:02:33 by nofanizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strchr(char *str, char c)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i + 1);
		i++;
	}
	return (0);
}

char	*ft_strdup(const char *s)
{
	char	*cpy;
	int		length;
	int		i;

	if (!s)
		return (NULL);
	length = ft_strlen((char *)s);
	cpy = ft_calloc(length + 1, sizeof(char));
	i = 0;
	if (!cpy)
		return (0);
	while (s[i])
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	char	*temp;
	size_t	i;

	temp = (char *)s;
	i = 0;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	size_t	size;
	void	*result;

	size = elementCount * elementSize;
	if (size > 2147483647 || size <= 0)
		return (malloc(sizeof(0)));
	result = malloc(size);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, size);
	return (result);
}
