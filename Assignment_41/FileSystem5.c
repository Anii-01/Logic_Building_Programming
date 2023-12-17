// Accept file name , accept one string and write that string in the end of that file.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int fdopen = 0;
    char FnameSrc[30];
    char Arr[100] = {'\0'};
    int iRet = 0;
     
    printf("Enter the name of file that we want to open and content at the end : \n");
    scanf("%s",FnameSrc);

    fdopen = open(FnameSrc, O_RDWR | O_APPEND);

    if(fdopen == -1)
    {
        printf("Unable to Open file!\n");
    }
    else
    {
        printf("File is Succesfully Opened! with fd %d \n",fdopen);

        printf("Enter the data you want to write into the file : \n");
        scanf(" %[^'\n']s",Arr);

        iRet = write(fdopen , Arr , strlen(Arr));

        printf("%d bytes gets successfully written into the file\n ",iRet);

    }
    close(fdopen);
    
    return 0;
}