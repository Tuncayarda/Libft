/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:04:24 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/10 14:31:46 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s, char c)
{
	int	curs;
	int	wc;

	wc = 0;
	curs = 0;
	if (!s)
		return (0);
	while (s[curs])
	{
		while (s[curs] == c)
			curs++;
		if (s[curs])
			wc++;
		while (s[curs] != c && s[curs])
			curs++;
	}
	return (wc);
}

char	**ft_split(char const *s, char c)
{
	size_t	f_curs;
	size_t	s_curs;
	size_t	wc;
	char	**tab;

	f_curs = 0;
	wc = 0;
	tab = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!s || !tab)
		return (NULL);
	while (s[f_curs])
	{
		while (s[f_curs] == c)
			f_curs++;
		s_curs = f_curs;
		while (s[f_curs] && s[f_curs] != c)
			f_curs++;
		if (f_curs > s_curs)
		{
			tab[wc] = ft_substr(s, s_curs, f_curs - s_curs);
			wc++;
		}
	}
	tab[wc] = (char *) NULL;
	return (tab);
}
