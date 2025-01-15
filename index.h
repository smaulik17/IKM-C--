#include <iostream>
#include <string>
using namespace std;

//функция для возведения в степень
long long poww(int a,int b){
    long long res=1;//long long для хранения 
    for(int i=0;i<b;i++)res*=a;
    return res;
}

//функция проверят является ли строка числом
bool num(const string&str,int&n){
    n=0;
    for(char c:str) {
        if(!isdigit(c))return false;//не число
        n=n*10+(c-'0');//преобразование символа в число
    }
    return true;//это число
}

// Функция для безопасного ввода с защитой
void safeInput(const string&p,int&o,int min,int max){
    string i;//для хранения ввода
    while(true){
        cout<<p;
        getline(cin,i);
        //проверка ввода
        int number;
        if (num(i,number)){
            if (number>=min&&number<=max){
                o=number;
                break;
            }
            else cout<<"ошибка: введите целое число в диапазоне от "<<min<<" до "<<max<<endl;
            }else cout<<"ошибка: введите корректное целое число"<<endl;
        }
}