#include <stdio.h>
#include <string.h>
int main()
{
    char testdarui[] = "mendokusai";
    int i;
    printf("The string '%s' is %lu characters long.\n", testdarui,strlen(testdarui));
    for (i = 1; i <= strlen(testdarui); i++)
        printf("%d\n", i);
    printf("\nthis statement executes after for loop end!!!!");

    return 0;
}