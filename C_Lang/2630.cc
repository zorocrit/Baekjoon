#include <iostream>
using namespace std;

int paper[150][150];
int num;

int blue = 0, white = 0;


void DFS(int x, int y, int Size)
{
    bool Zero, One;
    Zero = One = true;
    for (int i = x; i < x + Size; i++)
    {
        for(int j = y; j <y + Size; j++)
        {
            if (paper[i][j] == 1) Zero = false;
            if (paper[i][j] == 0) One = false;
        }
    }

    if (Zero == true) { white++; return; }
    if (One == true) { blue++; return; }
    
    DFS(x, y, Size / 2);
    DFS(x, y + Size / 2, Size / 2);
    DFS(x + Size / 2, y, Size / 2);
    DFS(x + Size / 2, y+Size/2,Size/2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> num;
    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num; j++) {
            cin >> paper[i][j];
        }
    }
    DFS(0, 0, num);
    cout << white << "\n" << blue;
}