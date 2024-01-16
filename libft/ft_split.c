/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 00:31:14 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/16 23:19:34 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	ft_free_all(char **s)
{
	size_t	i;

	i = 0;
	while (s[i] != NULL)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static size_t	ft_get_num_tokens(char *s, char c)
{
	size_t	num_tokens;

	num_tokens = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s == '\0')
			return (num_tokens);
		while (*s != c && *s != '\0')
		{
			s++;
		}
		num_tokens++;
	}
	return (num_tokens);
}

static size_t	ft_count_word_len(const char *s, int c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}

static char	*ft_get_word_start(const char *s, int c)
{
	size_t	word_start;

	word_start = 0;
	while (s[word_start] == c && s[word_start] != '\0')
		word_start++;
	return ((char *)(s + word_start));
}

char	**ft_split(char const *s, char c)
{
	char			**tokens;
	size_t			num_tokens;
	size_t			i;
	size_t			len;

	num_tokens = ft_get_num_tokens((char *)s, c);
	tokens = (char **)malloc((num_tokens + 1) * sizeof(char *));
	if (tokens == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		s = ft_get_word_start(s, c);
		len = ft_count_word_len(s, c);
		if (len > 0)
			tokens[i++] = ft_substr(s, 0, len);
		if (tokens[i - 1] == NULL)
		{
			ft_free_all(tokens);
			return (NULL);
		}
		s = s + len;
	}
	tokens[i] = NULL;
	return (tokens);
}

/*
char	**ft_split(char const *s, char c)
{
	char			**tokens;
	unsigned int	num_tokens;
	unsigned int	i;
	unsigned int	start;
	unsigned int	len;

	num_tokens = ft_get_num_tokens((char *)s, c);
	tokens = (char **)malloc((num_tokens + 1) * sizeof(char *));
	if (tokens == NULL)
		return (NULL);
	start = 0;
	i = 0;
	while (i < num_tokens && s[start] != '\0')
	{
		while (s[start] == c && s[start] != '\0')
			start++;
		len = 0;
		while (s[start + len] != c && s[start + len] != '\0')
			len++;
		if (len > 0)
			tokens[i++] = ft_substr(s, start, len);
		start = start + len;
	}
	tokens[i] = NULL;
	return (tokens);
}
*/