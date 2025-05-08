/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:28:27 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/08 15:42:38 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(const char *str) {
    unsigned int i;

    i = 0;
    while (str[i]) {
        i++;
    }
    return (i);
}

int ft_is_in_set(char c, const char *set) {
    unsigned int i;

    i = 0;
    while (set[i]) {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(const char *s1, const char *set) {
    unsigned int start;
    unsigned int end;
    unsigned int i;
    char *dest;

    if (!s1 || !set)
        return (NULL);

    start = 0;
    end = ft_strlen(s1);
    while (s1[start] && ft_is_in_set(s1[start], set))
        start++;
    while (end > start && ft_is_in_set(s1[end - 1], set))
        end--;

    dest = malloc((end - start + 1) * sizeof(char));
    if (!dest)
        return (NULL);

    i = 0;
    while (start < end) {
        dest[i] = s1[start];
        i++;
        start++;
    }
    dest[i] = '\0';

    return (dest);
}
