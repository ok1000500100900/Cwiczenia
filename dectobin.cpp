void dectobin(int liczba)
{
    if(liczba)>=2
    dectobin(liczba>>1); //przesuniecie bitu w prawo, rownoznaczne z dzieleniem przez 2

    putchar('0'+ liczba%2); //wypisanie znakowo ostatniego bitu
}