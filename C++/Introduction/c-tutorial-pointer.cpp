#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
void update(int *a,int *b) {
int c = *a;
    *a = *a + *b;
*b = fabs(c-*b);
	
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
} 
