/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:21:03 by cfontain          #+#    #+#             */
/*   Updated: 2022/06/03 15:00:13 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_callocbzero(size_t nmemb, size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	if (nmemb != 0 && size > (size_t) -1 / size)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = ft_callocbzero(sizeof(char), (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (free (s1), NULL);
	while (s1[i] != 0)
	{
		str[i] = s1[i];
		i++;
	}
	while (s2 && s2[j] != 0)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = 0;
	return (free (s1), str);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
			i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	int		i;
	int		size;
	char	*str;

	if (s)
	{
		size = ft_strlen(s);
		i = 0;
		str = ft_callocbzero(sizeof(char), (size + 1));
		if (str == NULL)
			return (NULL);
		while (s[i] != 0)
		{
			str[i] = s[i];
			i++;
		}
		str[i] = 0;
	}	
	return (str);
}

int	ft_end_line(char *line)
{
	int		i;

	i = 0;
	while (line[i] != 0)
	{
		if (line[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
