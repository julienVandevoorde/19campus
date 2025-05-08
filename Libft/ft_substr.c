/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 12:22:44 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/08 14:08:35 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(const char *str) {
    unsigned int i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_substr(char const *s, unsigned int start, size_t len) {
    char *dest;
    size_t i = 0;
    size_t str_len = ft_strlen(s);

    if (start >= str_len) {
        dest = malloc(1);
        if (!dest)
            return NULL;
        dest[0] = '\0';
        return dest;
    }

    if (len > str_len - start)
        len = str_len - start;

    dest = malloc((len + 1) * sizeof(char));
    if (!dest)
        return NULL;

    while (i < len) {
        dest[i] = s[start + i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
