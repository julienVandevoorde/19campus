#include <stdlib.h>

static int	count_word(char const *str, char c)
{
	int	count = 0;
	int i = 0;

	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static char	*ft_strdup_range(char const *start, char const *end)
{
	int i = 0;
	int size = end - start;
	char *tab = (char *)malloc((size + 1) * sizeof(char));
	if (!tab)
		return (0);
	while (start < end)
	{
		tab[i++] = *start++;
	}
	tab[i] = '\0';
	return (tab);
}

static void	free_all(char **tab, int lign)
{
	int i = 0;
	while (i < lign)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char **tab;
	char const *start;
	int nbr_word;
	int lign = 0;
	int i = 0;

	if (!s)
		return (NULL);
	nbr_word = count_word(s, c);
	tab = (char **)malloc((nbr_word + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			start = &s[i];
			while (s[i] && s[i] != c)
				i++;
			tab[lign] = ft_strdup_range(start, &s[i]);
			if (!tab[lign])
				return (free_all(tab, lign), NULL);
			lign++;
		}
		else
			i++;
	}
	tab[lign] = NULL;
	return (tab);
}
