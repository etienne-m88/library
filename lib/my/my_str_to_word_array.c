/*
** EPITECH PROJECT, 2023
** bsq
** File description:
** str_to_word_array
*/
#include "../../include/my.h"

int count_separator(char const *str)
{
    int i = 0;
    int count = 0;

    for (; str[i]; i++)
        if (str[i] == '\n')
        count++;
    return (count);
}
/*
int space_separator(char const *str)
{
    int i = 0;
    int count = 0;

    for (; str[i]; i++)
        if (str[i] == ' ')
        count++;
        if (str[i] == "  ")
        count++;
        count = count - 1;
    return (count);
}
*/  
char **my_str_to_word_array(char *str)
{
    int count = 0;
    int size_array = count_separator(str);
    char **array;

    if (str[0] == '\0')
        return NULL;
    array = malloc(sizeof(char *) * (size_array + 1));
    for (int i = 0; i < size_array; i++) {
        for (; str[count] != '\n'; count++);
        array[i] = malloc(sizeof(char) * (count + 1));
        for (int j = 0; j != count; j++)
            array[i][j] = str[j];
            array[i][count] = '\0';
            str += count + 1;
            count = 0;
        }
    array[size_array] = NULL;
    return (array);
}