//Hanoi cyfry

void Hanoi123(int n, int nFrom, int nTo)
{
 if(n==1)
 printf("Move disc from %d to %d\n", nFrom, nTo) //komunikat o przeniesieniu z pierwszego na docelowy
else
{
    Hanoi123(n-1,nFrom,6-nFrom-nTo); //przenosi n-1 dyskow z poczatkowego na pomocniczy
    // 6 poniewaz w Hanoi slupki sa ponumerowane 1,2,3
    //1+2+3=6 wiec po odjeciu nFrom i nTo daje nam numer slupka ktory nie jest poczatkowym
    //ani docelowym czyli jest tym pomocniczym
    printf("Move disc %d from %d to %d", n,nFrom,nTo); //wypisuje komunikat o przeniesieniu
    //najwiekszego dysku z nFrom do nTo
    Hanoi123(n-1,6-nFrom-nTo,nTo); //przenosi n-1 dyskow z pomocnicznego na docelowy
}   
}

/*
if n==1 --> komunikat pierwszy do docelowy
else
n-1 z docelowego na pomocniczy
komunikat n z pierwszy do docelowy
n-1 z pomocniczego na docelowy
*/

//roznica miedzy Hanoi123 a HanoiABC jest taka, ze nie mozemy obliczyc pomocniczego
//dlatego musimy dodac jeszcze jedna zmienna

void HanoiABC(int n, char cFrom, char cTo, char cWith)
{
    if(n==1)
    printf("Move disc from %c to %c\n", cFrom,cTo);
    else
    {
        HanoiABC(n-1,cFrom,cWith,cTo);
        printf("Move disc %d from %c to %c", n, cFrom,cTo);
        HanoiABC(n-1,cWith,cTo,cFrom);
    }
}

/*
if n==1 --> komunikat pierwszy do docelowy
else
n-1 z docelowego na pomocniczy (przy pomocy docelowego)
komunikat n z pierwszy do docelowy
n-1 z pomocniczego na docelowy (przy pomocy poczatkowego)
*/