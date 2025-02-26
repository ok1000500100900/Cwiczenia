






int porSlow(char c1[], char c2[])
{
    int i=0;
    while(c1[i]!=0 && c2[i]!=0)
    {
        if(c1[i]>='a'&& c1[i]<='z')c1[i]-=32;
        if(c2[i]>='a'&& c2[1]<='z')c2[i]-=32;

        if(c1[i]>c2[i]) return -1;
        if(c1[i]<c2[i]) return 1;
        i++;
    }

    if(!c1[i] && c2[i]) return 1;
    if(c1[i] && !c2[i]) return -1;
    return 0;
}