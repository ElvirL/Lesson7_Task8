/*
������� 8. ������* (�������������� �������)
��� ����� �������
�������� ���������, ������� ������� �� ����� �������������� �����������, ����������� ��������� ������� �#�. 
����� ������ ������������ �������� �������������. ���������� �������� �����.*/

#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "������� ������ ������: ";
    cin >> n;
    if (n<=0){
        cout << "������ ������ ���� ������������� ������";
    }
    else {
        int total_length = 1;
        for (int i=1; i<n; ++i){
            total_length+=2;
        }

        string grid_symbols = "#";
        for (int i=1; i<=n; ++i){
            for (int j = 1; j<=(total_length/2)+1-i;++j){
                cout << " ";
            }
            cout << grid_symbols;
            for (int j=(total_length/2)+1+i;j<=total_length;++j){
                cout << " ";
            }
            cout << endl;
            grid_symbols+="##";
        }
    }
}