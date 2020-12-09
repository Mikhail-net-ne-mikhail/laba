#include <stdio.h>
#include <string.h>
#include <locale.h>
void prikol(char* str)
{
    char* src = str, * dst = str;
    int space = 1;
    while (*src) 
    {
        if (space && *src == ' ') 
        {
            ++src;
            continue;
        }
        if (space)
            space = 0;
        if (*src == ' ')
            space = 1;
        *dst++ = *src++;
    }
    if (*dst == ' ')
        --dst;
    *dst = '\0';
}


int main()
{
    setlocale(0, "Russian");
    char str[100];
    printf("Введите строку\n");
    gets_s(str);
    prikol(str);
    printf("Строка после изменения\n");
    puts(str);
    return 0;
}
