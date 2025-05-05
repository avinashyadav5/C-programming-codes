#include <stdio.h>
int main()
{
    int i, c;
    char text[100];
    FILE *ifp;
    ifp = fopen("C:\\Users\\91911\\Desktop\\aaa.exe.txt","w+");
    printf ("ENTER TEXT");
    scanf ("%[^\n]s", text);
    for (c =0; c < 100; c++)
    {
        for (i = 0; text[i]; i++)
        {
            putc(text[i], ifp);
        }
        putc ('\n', ifp);
        
    }
    
    printf ("\n Entered text is : %s", text);
    fclose (ifp);

return 0;
}
