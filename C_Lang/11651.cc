#include <iostream>
#include <algorithm>
using namespace std;
pair<int, int> arr[100010];


bool dum(pair<int, int> a, pair<int, int> b);

int main() {
    int num;
    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr+num, dum);
    for(int i = 0; i < num; i++){
        cout << arr[i].first << " " <<arr[i].second << "\n";
    }
    return 0;
}

bool dum(pair<int, int> a, pair<int, int> b) {
    if(a.second < b.second)
    {
        return true;
    }
    else if(a.second == b.second)
    {
        if(a.first < b.first)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}