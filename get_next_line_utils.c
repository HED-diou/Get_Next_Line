/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:02:39 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/29 17:20:36 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	a;
	char			*p;

	a = 0;
	if (!s)
		return (0);
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	if (*s == 0 || len == 0)
	{
		p[a] = 0;
		return (p);
	}
	while (s[start] && a < len && start <= ft_strlen(s))
	{
		p[a] = s[start];
		a++;
		start++;
	}
	p[a] = '\0';
	return (p);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		res;
	char	*clon;

	if (!s1)
		return (NULL);
	clon = (char *)malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	res = 0;
	i = 0;
	if (clon == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		clon[i] = s1[i];
		i++;
	}
	while (s2[res] != '\0')
	{
		clon[i] = s2[res];
		i++;
		res++;
	}
	free((char *)s1);
	clon[i] = '\0';
	return (clon);
}

char	*ft_strdup(char *t1)
{
	int		n;
	char	*t2;
	int		i;

	n = 0;
	while (t1[n])
		n++;
	t2 = (char *)malloc((n + 1) * sizeof(char));
	if (t2 == NULL)
		return (0);
	i = 0;
	while (t1[i])
	{
		t2[i] = t1[i];
		i++;
	}
	t2[i] = '\0';
	return (t2);
}
