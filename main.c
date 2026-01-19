#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[] = {40, 20, 1, 2, 3, 0, -1, -2, -3, 2, 1, -1, -10, 20, 30, 50, 1, 2, 3};

    int i, start, up, down, j;

    int n = (int)(sizeof(dizi) / sizeof(dizi[0]));

    int tlen = 0, Vlen = 0, bestVlen = 0, bestVstart = -1, bestTend = -1, bestVend = -1, bestTlen = 0, bestTstart = -1;
    printf("duz V ler: \n\n");
    for (i = 0; i < n; i++)
    {
        start = i;
        up = 0, down = 0;

        while (i < n - 1 && dizi[i] > dizi[i + 1])
        {
            i++;
            down = 1;
        }
        while (i < n - 1 && dizi[i] < dizi[i + 1])
        {
            i++;
            up = 1;
        }

        Vlen = i - start + 1;
        if (up && down)
        {
            for (j = start; j <= i; j++)
            {
                printf("%d ", dizi[j]);
            }
            printf("\t uzunluk: %d", Vlen);
            printf("\n");

            if (Vlen >= 3 && bestVlen < Vlen)
            {
                bestVlen = Vlen;
                bestVstart = start;
                bestVend = i;
            }
        }
        i = start;
    }

    printf("\n\n");

    printf("ters V ler: \n\n");

    for (i = 0; i < n; i++)
    {
        start = i;
        up = 0, down = 0;

        while (i < n - 1 && dizi[i] < dizi[i + 1])
        {
            i++;
            up = 1;
        }
        while (i < n - 1 && dizi[i] > dizi[i + 1])
        {
            i++;
            down = 1;
        }

        tlen = i - start + 1;
        if (down && up)
        {
            for (j = start; j <= i; j++)
            {
                printf("%d ", dizi[j]);
            }
            printf("\t uzunluk: %d", tlen);
            printf("\n");

            if (tlen >= 3 && tlen > bestTlen)
            {
                bestTlen = tlen;
                bestTstart = start;
                bestTend = i;
            }
        }
        i = start;
    }

    printf("\n");

    printf("en uzun V alt dizisi: ");
    for (i = bestVstart; i <= bestVend; i++)
    {
        printf("%d ", dizi[i]);
    }

    printf("\t uzunluk: %d", bestVlen);

    printf("\n");

    printf("en uzun ters V alt dizisi: ");
    for (i = bestTstart; i <= bestTend; i++)
    {
        printf("%d ", dizi[i]);
    }

    printf("\t uzunluk: %d", bestTlen);

    printf("\n");

    return 0;
}
