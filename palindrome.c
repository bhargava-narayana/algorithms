#include <stdio.h>
#include <stdbool.h>

unsigned int reverse(unsigned int value)
{
        bool result;
        unsigned int reverse;
        unsigned int remainder;
        
        reverse = 0;

        while(value > 0)
        {
                remainder = value % 10;
                printf("remainder = %u\n", remainder);
                reverse = reverse * 10 + remainder;
                printf("reverse = %u\n", reverse);
                value /= 10;
                printf("new value= %u\n", value);
        }

        printf("final reverse = %u\n", reverse);
        return reverse;
}

bool is_palindrome(unsigned int value1)
{
        unsigned int value2 = reverse(value1);
      
        if(value1 == value2)
                return true;
        else 
                return false;
}

int main()
{
        int N;
        bool result;
        unsigned int input;

        for(scanf("%d", &N); N; --N)
        {
                scanf("%u", &input);
                if(result = is_palindrome(input))
                {
                        printf("%u is a palindrome\n", input);
                        
                }
                else 
                        printf("%u is NOT a palindrome\n", input);
        }

        return 0;
}
