#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rad;
    int area;
    int perimeter;


    printf("enter radius:");
    scanf("%d", &rad);

    area = (22/7) * rad * rad;
    perimeter = 2 * (22/7) * rad;

    printf("\n area is:%d", area);
    printf("\n perimeter is:%d", perimeter);

}
