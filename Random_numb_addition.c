#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
int main()
{
    int rnum, start = 10, end = 99, amount= 10 ,i,sum=0;
    srand(time(0));
    for(i=0; i<amount; i++)
    {
        //rnum = rand() % (end + 1 - start) + start;
        rnum = rand() % (end +1  - start) +start;
        sum = sum + rnum;
        sleep(1);
    
        printf("%d \n", rnum);
    }
    char dummy;
    sleep(10);
    printf("Time up Press enter to get the sum \n");
    scanf("%c", &dummy);
    printf("sum = %d",sum);
    //getch();
    return 0;
}
