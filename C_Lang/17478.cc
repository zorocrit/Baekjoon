#include <iostream>
using namespace std;
int n = 0;
int check = -1;
void repeat() {
    n--;
    check++;
    for(int x = 0; x < check; x++) {
        cout << "____";
    }
    cout << "\"����Լ��� ������?\"" << endl;
    for(int x = 0; x < check; x++) {
        cout << "____";
    }
    cout <<"\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << endl;
    for(int x = 0; x < check; x++) {
        cout << "____";
    }
    cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << endl;
    for(int x = 0; x < check; x++) {
        cout << "____";
    }
    cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << endl;
    if(n > 0) repeat();
    else {
        for(int x = 0; x <= check; x++) {
            cout << "____";
        }
        cout << "\"����Լ��� ������?\"" << endl;
        for(int x = 0; x <= check; x++) {
            cout << "____";
        }
        cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << endl;
        for(int x = 0; x <= check; x++) {
            cout << "____";
        }
        cout << "��� �亯�Ͽ���." << endl;
    }
    for(int x = 0; x < check; x++) {
        cout << "____";
    }
    cout << "��� �亯�Ͽ���." << endl;
    check--;
}

int main() {
    cin >> n;
    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << endl;
    repeat();
    return 0;
}