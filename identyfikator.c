
int main()
{
    return 0;
}

int identyfikator(char c[])
{
    int i=0;
    while(c[i]!=0)
    {
        if(!(c[i]>='a'&&c[i]<='z' || c[i]>='A' && c[i]<='Z'|| c[i]=='_')) return 0;
    }

    int i=1;
    while(c[i]!=0)
    {
         if(!((c[i]>='a'&&c[i]<='z') || (c[i]>='A' && c[i]<='Z')|| (c[i]=='_') 
         || (c[i]>= '0' && c[i]<= '9'))) return 0;
         i++;
    }
    return 1;

}