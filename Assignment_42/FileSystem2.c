// Accept file name and count Small letters from that file.

#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>  //universal std
#include<fcntl.h>   // file control

#define BUFFERSIZE 1024

int CountSmall(char FileName[])
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
    }
    else
    {
        printf("%s gets opened succesfully with file descriptor %d\n", FileName , fd);

        while((iRet = read(fd, Arr,sizeof(Arr))) != 0)
        {
            for(i = 0; i < iRet ; i++)
            {
                if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
                {
                    iCount ++;
                }
            }
        }
        return iCount;
        
        close(fd);
    }
}

int main()
{
    char FileName[30]; 
    int iRet = 0; 
    
    printf("Enter the name of file that you want to open : \n");
    scanf("%s", FileName);

    iRet = CountSmall(FileName);
    printf("Count of Small letters are : %d",iRet);

    return 0;
}