#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fp;
    char ch;
    int pqtdecar = 0, pqtdespace = 0, pqtdetabs = 0, pqtdelines = 0;

    fp = fopen("my.txt", "r");

    while (1)
    {
        ch = fgetc(fp);
        if (ch == 32)
        {
            pqtdespace++;
        }
        if (ch == 45)
        {
            pqtdetabs++;
        }
        if (ch == 10)
        {
            pqtdelines++;
        }
        if (ch == EOF)
        {
            break;
        }
        pqtdecar++;
    }
    fclose(fp);

    printf("Quantidade da caracteres: %d\n", pqtdecar);
    printf("Quantidade de espaços: %d\n", pqtdespace);
    printf("Quantidade de tabs: %d\n", pqtdetabs);
    printf("Quantidade de linhas: %d\n", pqtdelines);

    return 0;
}