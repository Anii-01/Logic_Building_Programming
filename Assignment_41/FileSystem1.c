// Accept file name and open it in read mode.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


int main()
{
    int fdread = 0;
    char FnameSrc[30];
    printf("Which file you want to open, Enter that name : \n");
    scanf("%s",FnameSrc);

    fdread = open(FnameSrc , O_RDONLY );

    if(fdread == -1)
    {
        printf("Unable to open file!\n");
    }
    else
    {
        printf("File is Succesfully Opened! with fd %d \n",fdread);
    }

    close(fdread);

    return 0;
}