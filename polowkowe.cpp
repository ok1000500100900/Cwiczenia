
/* p - poczatek
k - koniec
x - szukana wartosc
*/

int polowkowe(int x, int tab[], int p,int k)
{
    int s = (p+k)/2;
    if(p<=k)
    {
        if(tab[s]>x) // x jest mniejszy od wartosci srodka, czyli znajduje sie w pierwszej polowie
        return polowkowe(x, tab,p,s-1);

        if(tab[s]<x) // x jest > od wart srodka, czyli znajduje sie w drugiej polowie
        return polowkowe(x, tab, s+1, k);

        return s;
    }

    return -1;
}