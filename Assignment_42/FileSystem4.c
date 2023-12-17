// Accept File name and one character , and Count Occurance of that character in the file.

#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>  //universal std
#include<fcntl.h>   // file control

#define BUFFERSIZE 1024

int CountOccurance(char FileName[])
{
    char Arr[BUFFERSIZE] = {'\0'};
    int iRet = 0;
    int fd = 0;   
    int i = 0;
    int iCount = 0;  

    fd = open(FileName , O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open %s file\n " , FileName);
        return 0;
    }
    else
    {
        printf("%s gets opened succesfully with file descriptor %d\n", FileName , fd);

        char ch = '\n';
        printf("Enter the character that you want to find : \n");
        scanf(" %c", &ch);

        while((iRet = read(fd, Arr,sizeof(Arr))) != 0)
        {
            for(i = 0; i < iRet ; i++)
            {
                if(Arr[i] == ch)
                {
                    iCount ++;
                }
            }
        }
        close(fd);
        return iCount;
    }
}

int main()
{
    char FileName[30]; 
    int iRet = 0; 

    printf("Enter the name of file that you want to open : \n");
    scanf("%s", FileName);

    iRet = CountOccurance(FileName);
    printf("Frequency of character are %d ",iRet);

    return 0;
}