#include <stdlib.h>

int count_word(char *str)
{
    int count = 0;
    int i = 0;

    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        if (str[i] >= 33 && str[i] <= 126)
            count++;
        while (str[i] >= 33 && str[i] <= 126)
            i++;
    }
    return (count);
}

char *ft_strdup(char *start, char *end)
{
    int i = 0;
    int size = end - start;
    char *tab;

    tab = (char *) malloc((size + 1) * sizeof(char));
    if (!tab)
        return (0);
    while (start < end)
    {
        tab[i] = *start;
        start++;
        i++;
    }
    tab[i] = '\0';
    return (tab);
}

char **ft_split(char *str)
{
    char **tab;
    char *start;
    char *end;
    int nbr_word = count_word(str);
    int lign = 0;
    int i = 0;

    tab = (char **) malloc((nbr_word + 1) * sizeof(char *));
    if (!tab)
        return (0);
    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        if (str[i] >= 33 && str[i] <= 126)
        {
            start = &str[i];
            while (str[i] >= 33 && str[i] <= 126)
                i++;
            end = &str[i];
            tab[lign] = ft_strdup(start, end);
            lign++;
        }
    }
    tab[lign] = NULL;
    return (tab);
}

#include <stdio.h>

int main(void)
{
    char *str = "Clement De Dessus les Moustier";
    char **tab;
    int i = 0;
    tab = ft_split(str);
    if (!tab)
        return (-1);
    while (tab[i])
    {
        printf("%s\n", tab[i]);
        i++;
    }
    
    while (tab[i])
    {
        free(tab[i]);
        i++;
    }
    free(tab);
    return (0);
}
