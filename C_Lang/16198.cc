#include<iostream>
#include<vector> 
#define endl "\n"
using namespace std; 
int N, Max_Energy, Tmp_Energy;
vector<int> V; 
void Input(){    
    cin >> N;    
    for (int i = 0; i < N; i++)    {        
        int a; cin >> a;        
        V.push_back(a);    
        }
    } 
void Select_Ball(){    
    if (V.size() == 2)    {        
        if (Max_Energy < Tmp_Energy) Max_Energy = Tmp_Energy;
            return;    
        }     
    for (int i = 1; i < V.size() - 1; i++)    {
        int Select = V.at(i);        
        Tmp_Energy = Tmp_Energy + V.at(i - 1) * V.at(i + 1);        
        V.erase(V.begin() + i);        
        Select_Ball();        
        V.insert(V.begin() + i, Select);        
        Tmp_Energy = Tmp_Energy - V.at(i - 1) * V.at(i + 1);    
    }
} 
void Solution(){    
    Select_Ball();    
    cout << Max_Energy << endl;
} 
void Solve(){    
    Input();    
    Solution();
} 
int main(void){    
    ios::sync_with_stdio(false);    
    cin.tie(NULL);    
    cout.tie(NULL);  
    Solve();     
    return 0;
}
