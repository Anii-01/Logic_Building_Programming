// Accept File name and one count, read that number of character from starting position.

#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>  
#include<fcntl.h>  

#define BUFFERSIZE 1024

int CountOccurance(char FileName[] , int iCount)
{
    char Arr[BUFFERSIZE] = {'\0'};
    int iRet = 0;
    int fd = 0;   
    int i = 0;

    fd = open(FileName , O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open %s file\n " , FileName);
        return 0;
    }
    else
    {
        printf("%s gets opened succesfully with file descriptor %d\n", FileName , fd);

        while((iRet = read(fd, Arr,sizeof(Arr))) != 0)
        {
            for(i = 0; i < iCount ; i++)
            {
                    printf("%c",Arr[i]);
            }
        }
        close(fd);
    }
}

int main()
{
    char FileName[30];
    int iCount = 0; 

    printf("Enter the name of file that you want to open : \n");
    scanf("%s", FileName);

    printf("Enter the number of characters : \n");
    scanf("%d", &iCount);

    CountOccurance(FileName , iCount);
    printf("\nFirst %d Characters are read successfully from %s \n", iCount, FileName);

    return 0;
}