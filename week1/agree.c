#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("DO you agree?");
    if(c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if(c == 'n' || c == 'Y')
    {
        printf("Not agreed.\n");
    }
}