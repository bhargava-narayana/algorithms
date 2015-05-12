#include <stdio.h>

void prime_num(int num1, int num2)
{
        int i;
        int j;
        int flag;
        for(i = num1; i < num2; ++i)
        {
                flag = 0;
                for(j = 2; j <= i/2; ++j)
                {
                        if(i%j == 0)
                        {
                                flag = 1;
                                break;
                        }
                }
                if(flag == 0)
                        printf("%d ",i);
        }           
}

int main(int argc, char *argv[])
{
        int input1;
        int input2;
        printf("enter 2 numbers: ");
        while(scanf("%d %d", &input1, &input2) != EOF)
        {
                if(input1 != input2)
                {
                        printf("prime numbers between %d and %d\n", input1, input2);
                        prime_num(input1, input2);
                }
                else
                        printf("invlaid inputs\n");
        }
        
        
                


}
