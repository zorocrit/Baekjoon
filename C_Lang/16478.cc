#include <iostream>
using namespace std;
int main(){
    int P_ab, P_bc, P_cd;
    scanf("%d %d %d", &P_ab, &P_bc, &P_cd);
    printf("%.7f", (double)P_ab * P_cd / P_bc);
}