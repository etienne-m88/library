/*
** EPITECH PROJECT, 2023
** getnbr
** File description:
** lib/my
*/

int my_getnbr(char const *str)
{
    int nb = 0;
    int isneg = 0;

    if (str[0] == '-') {
        isneg = 1;
        str += 1;
    }
    for (int i = 0; str[i]; i++)
        if (str[i] < '0' || str[i] > '9')
            return (84);
    for (int i = 0; str[i]; i++) {
        nb += str[i] - 48;
        nb *= 10;
    }
    nb /= 10;
    if (isneg == 1)
        nb *= -1;
    return (nb);
}
