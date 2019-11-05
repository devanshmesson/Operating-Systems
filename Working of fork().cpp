#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include<bits/stdc++.h>
int main()
{
    int cnt=0;
   int pid1 = fork();
    int pid2 = fork();
   int pid3 = fork();
    
  if(pid1==0 || pid2==0 || pid3==0)
  {
    printf("\n-----------if conditon------------\n\n");
    printf("Child Process Id is : %d\n",getpid());
    printf("Parent Process Id is : %d\n",getppid());
    
  }
  else
  {
        printf("\n-----------else conditon------------\n\n");

    printf("Parent Process Id is : %d\n",getpid());
   //printf("%d\n",getppid());
  }
    return 0;
}

