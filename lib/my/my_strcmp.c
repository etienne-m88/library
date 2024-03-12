/*
** EPITECH PROJECT, 2023
** strcmp
** File description:
** task06
*/
#include "../../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;

    while (s1[i] && s2[j]) {
        if (s1[i] != s2[j])
            return (s1[i] - s2[j]);
        i++;
        j++;
    }
    return (0);
}
