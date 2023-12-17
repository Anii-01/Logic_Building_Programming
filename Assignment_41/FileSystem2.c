// Accept file name and create that file.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


int main()
{
    int fdcreate = 0;
    char FnameSrc[30];
    printf("Enter the name of the file that we want to create : \n");
    scanf("%s",FnameSrc);

    fdcreate = creat(FnameSrc , 0777);

    if(fdcreate == -1)
    {
        printf("Unable to create file!\n");
    }
    else
    {
        printf("File is Succesfully Created! with fd %d \n",fdcreate);
    }

    close(fdcreate);

    return 0;
}