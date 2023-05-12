#include <stdio.h>
#include <stdlib.h>

typedef struct listaelem{
    int adat;
    struct listaelem *kov;
} LISTAELEM;

LISTAELEM *fej = NULL;
LISTAELEM *vege = NULL;

void ll_betesz(int szam)
{
    LISTAELEM *uj = malloc(sizeof(LISTAELEM));
    //(*uj).adat = szam;
    uj -> adat = szam;
    uj -> kov = NULL;
    //(*uj).kov = NULL;

    if(fej == NULL)
    {
        fej = uj;
        vege = uj;
    }
    else
    {
        vege -> kov = uj;
        vege = uj;
    }
}

void ll_kiir()
{
    LISTAELEM *akt = fej;

    while(akt != NULL)
    {
        printf("%d\n", akt -> adat);
        akt = akt -> kov;
    }
}

void ll_rek_torol_elem(LISTAELEM *akt)
{
    if(akt != NULL)
    {
        LISTAELEM *kov = akt -> kov;
        free(akt);
        ll_rek_torol_elem(kov);
    }
}

void ll_torol()
{
    ll_rek_torol_elem(fej);
    fej = NULL;
    vege = NULL;
}

int main()
{
    int szam;
    while(1)
    {
        printf("Adj meg egy + szamot a 0 vegjelig: ");
        scanf("%d", &szam);

        if(szam == 0)
        {
            puts("Nulla vegjel!");
            break;
        }

        ll_betesz(szam);
    }
    ll_kiir();
    ll_torol();
}