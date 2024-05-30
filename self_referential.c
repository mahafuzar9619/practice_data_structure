#include<stdio.h>
struct point{
    int x;
    int y;
    struct point *ptr;
};
int main()
{
    struct point v1,v2;
    v1.x = 44;
    v1.y = 45;
    v1.ptr = NULL;

    v2.x = 55;
    v2.y = 66;
    v2.ptr = NULL;

    v1.ptr = &v2;

    printf("%d %d\n",v1.ptr->x,v1.ptr->y);
    return 0;
}
