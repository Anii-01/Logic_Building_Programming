// Accept file name , Read all data from file and Display all content.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFERSIZE 1024


int main()
{
    int fdopen = 0;
    char FnameSrc[30];
    char Buffer [BUFFERSIZE]= {'\0'};
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter the name of file that we want to Read and Display : \n");
    scanf("%s",FnameSrc);

    fdopen = open(FnameSrc, O_RDONLY);

    if(fdopen == -1)
    {
        printf("Unable to Open file!\n");
    }
    else
    {
        printf("File is Succesfully Opened! with fd %d \n",fdopen);
    }

    while(iRet = read(fdopen , Arr , (sizeof(Arr)!=0)))
    {
       printf("%s",Arr);
    }
    close(fdopen);

    return 0;
}