#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void recusrivePermute(char str[], int k)
{
    int j;
    // base-case: since all letters are fixed, we can ONLY print what's stored in str
    if (k == strlen(str))
    printf("%s\n", str);

    else
    {
        // loop through each possible starting letter for index k, the first index for which we have a choice.
        for (j = k; j < strlen(str); j++)
        {
            ExchangeCharacters(str, k, j);

        // print out all the permutations listed in the above feed
            recusrivePermute(str, k + 1);


        // Put the original character that used to be there back in its place
            ExchangeCharacters(str, j, k);


        }
    }


}


int main()
{

}