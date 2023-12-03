#include <iostream>
#include <cstdlib>



using namespace std;




int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int nn;
    int ingi = 0;
    cin >> nn;
    for(int ii = 0; ii < nn; ii++) {
        int aa, bb;
        cin >> aa >> bb;
        if(abs(aa - ingi) <= bb) {
            ingi++;
        }
    }
    cout << ingi;
    return 0;
}
