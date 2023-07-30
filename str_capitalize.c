#include <stdio.h>

char    *lowercase(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    return(str);
}

char    *firstupper(char *str)
{
    if(str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
    return(str);
}

char    *capitalize(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == ' ' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
        {
            str[i + 1] = str[i + 1] - 32;
        }
        i++;
    }
    return(str);
}

int main (int argc, char **argv)
{
    if(argc != 2)
    {
        printf("`\n");
        return(0);
    }
    lowercase(argv[1]);
    firstupper(argv[1]);
    capitalize(argv[1]);
    printf("%s", argv[1]);
    return(0);
}

