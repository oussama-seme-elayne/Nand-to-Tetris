#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[2] = { 1, 0};
    int i, ans;

    for (i = 0; i < 2; i++) {
        if (a[i] == 0)
            ans = 1;
        else
            ans = 0;
        printf("\n  NOT %d = %d", a[i], ans);
    }
}
