#include <stdio.h>
/*
 * GCD(greatest common divisor) using Euclid's algorithm:
 * 
 * if u > v 
 *      GCD of u and v = GCD of v and u-v
 *                                      
 */ 

/*
 * doesn't work
 *
void swap(int x, int y)
{
        x = x + y;
        y = x - y;
        x = x - y;
        printf("x = %d,y = %d\n", x, y); 
}


int gcd(int u, int v)
{
        while (u > 0)
        {
                if(u < v)
                        swap(u,v);dd
                u = u - v;

        }
        return v;
               
}
*/

int gcd(int u, int v)
{
        int t;
        while(v)
        {
                t = u;
                u = v;
                v = t % v;
        }
        return abs(u);
}


int main(int argc, char *argv[])
{
        int input_1, input_2;
        while(scanf("%d %d", &input_1, &input_2) != EOF)
                if(input_1 > 0 && input_2 > 0)
                        printf("%d and %d's GCD= %d\n",input_1, input_2, gcd(input_1, input_2));

}
