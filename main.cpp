/*
Задание 8. Ёлочка* (дополнительное задание)
Что нужно сделать
Напишите программу, которая выводит на экран равнобедренный треугольник, заполненный символами решётки «#». 
Пусть высота треугольника вводится пользователем. Обеспечьте контроль ввода.
*/

#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите высоту елочки ";
    cin >> n;
    if (n<=0){
        cout << "Высоту елочки должны быть положительным числом";
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