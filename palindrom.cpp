//moje
char str = "abba";
int start = 0;
int end = 0;

while(str[end]!=0)
{
    end++;
}

end--; //indeks ostatniego znaku

while(start<end)
{
    if(str[start]!=str[end]) return 0;
    start++;
    end--;
}

return 1;

//inna wersja
char str = "abba";
int start = 0;
int end = 0;
int isPalindrome = 1;

while(str[end]!=0)
{
    end++;
}

end--; //indeks ostatniego znaku

while(start<end)
{
    if(str[start]!=str[end])
    {
        isPalindrome = 0;
        break;
    }
    start++;
    end--;
}

if(isPalindrome) printf("Ciag jest palindromem");
else printf("Nie jest");