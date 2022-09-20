#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void orig() {
    char cSrc[] = "Aticleworld";
    // The destination string size is 14.
    char cDest[16] = {0};
    // copying n bytes of cSrc into cDest
    //Using own my_memcpy function
    memmove(cDest, cSrc, 12);
    printf("Copied string: %s\n", cDest);
    int iSrc[] = {10, 20, 30, 40, 50};
    int n = sizeof(iSrc)/sizeof(iSrc[0]);
    int iDest[n], index = 0;
    // copying n bytes of iSrc into iDest
    //Using own my_memcpy function
    memmove(iDest, iSrc, sizeof(iSrc));
    printf("\nCopied array is \n");
    for (index=0; index<n; index++)
    {
        printf("%d ", iDest[index]);
    }
    printf("\n");
}

void my() {
    char cSrc[] = "Aticleworld";
    // The destination string size is 14.
    char cDest[16] = {0};
    // copying n bytes of cSrc into cDest
    //Using own my_memcpy function
    ft_memmove(cDest, cSrc, 12);
    printf("Copied string: %s\n", cDest);
    int iSrc[] = {10, 20, 30, 40, 50};
    int n = sizeof(iSrc)/sizeof(iSrc[0]);
    int iDest[n], index = 0;
    // copying n bytes of iSrc into iDest
    //Using own my_memcpy function
    ft_memmove(iDest, iSrc, sizeof(iSrc));
    printf("\nCopied array is \n");
    for (index=0; index<n; index++)
    {
        printf("%d ", iDest[index]);
    }
    printf("\n");
}


int main() {
    orig();
    my();
    return 0;
}
