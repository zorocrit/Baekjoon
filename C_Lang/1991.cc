#include <iostream>
using namespace std;
pair <char, char> node[50];

void preorder(char car){
    if(car=='.')
    return;
    
    cout<<car;
    preorder(node[car-'A'].first);
    preorder(node[car-'A'].second);
}
void inorder(char car){
    if(car=='.')
    return;

    inorder(node[car-'A'].first);
    cout<<car;
    inorder(node[car-'A'].second);
}
void postorder(char car){
    if(car=='.')
    return;

    postorder(node[car-'A'].first);
    postorder(node[car-'A'].second);
    cout<<car;
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        char a, b, c;
        cin >> a >> b >> c;
        node[a-'A'].first = b;
        node[a-'A'].second = c;
    }

    preorder('A');
    cout << endl;
    inorder('A');
    cout << endl;
    postorder('A');

    return 0;
}