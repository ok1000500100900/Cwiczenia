//sprawdzanie czy ciag jest podciagiem
char ciag[] = "inzynieriaianalizadanych";
char wzorzec[]="analiza";
int dl1=0;
int dl2=0;
int result=1;
int index=0;

while(ciag[dl1]!=0)dl1++;
while(wzorzec[dl2]!=0)dl2++;

for(int i=0;i<dl1-dl2;i++)
{
    result=1;
    for(int j=0;j<dl2;j++)
    {
        if(wzorzec[j]!=ciag[i+j])
        {
            result=0;
            break;
        }

    }
}

if(result){
    index=i;
    break;
}

//znajdywanie podciagu o maksymalnej dlugosci
char ciag="anaaaaliza";
int max=0;
int dl = 1;
int start = 0;
int end =0;
int dlugosc = 0;

while(ciag[dlugosc]!=0)dlugosc++;

for(int i=0; i<dlugosc;i++)
{
    for(int j=i+1; j<dlugosc;j++)
    {
        if(ciag[i]==ciag[j])dl++;
        else
        {
            if(dl>max)
            {
                max=dl;
                end=j-1;
            }
            dl=1;
            i=j-1;
        }
    }
}

if(dl>max)
{
    max=dl;
    end=dlugosc-1;
}
start = end-max+1;

//algorytm znajdowania podciagu o maksymalnej sumie elementow
int ciag = {12,15,-4,66,-8,-90,7,0,0,0};
int maxS=0;

for(int i=0;i<nSize;i++)
{
    for(int j=i;j<nSize;j++)
    {
        int sumaTemp=0;
        for(int k=i; k<=j;k++)
        {
            sumaTem+=ciag[k];
            if(sumaTemp>maxS) maxS=sumaTemp;
        }
    }
}