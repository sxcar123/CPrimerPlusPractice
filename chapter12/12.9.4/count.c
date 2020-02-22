#include"count.h"
int count(void)
{
    static int count=0;
    return ++count;
}
