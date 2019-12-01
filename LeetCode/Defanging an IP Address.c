#include<stdio.h>
#include<stdlib.h>

char *defangIPaddr(char * address)
{
    int count = 0;

    while(address[count] != '\0')
    {
        count++;
    }

    char *defangIpAddress = (char *) malloc(sizeof(char) * (count + 7));

    int i = 0, j = 0;

    while(address[i] != '\0')
    {
        if(address[i] == '.')
        {
            defangIpAddress[j++] = '[';

            defangIpAddress[j++] = '.';

            defangIpAddress[j++] = ']';

            i++;
        }
        else
        {
            defangIpAddress[j++] = address[i++];
        }
    }

    defangIpAddress[j] = '\0';

    return defangIpAddress;
}

int main()
{
    printf("%s", defangIPaddr("255.100.50.0"));

    return 0;
}
