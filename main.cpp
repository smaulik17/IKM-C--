#include "index.h"

int main(){
    int a,b,m,n;//инициализация переменных

    //ввод данных
    safeInput("введите a(0<=a<=40000) (число, возводимое в степень m): ",a,0,40000);
    safeInput("введите m(0<=m<=10) (число, степень a): ",m,0,10);
    safeInput("введите b(0<=b<=40000) (число, возводимое в степень n): ",b,0,40000);
    safeInput("введите n(0<=n<=10) (число, степень b): ",n,0,10);

    //вызов функций возведения в степень
    long long a_m=poww(a,m);
    long long b_n=poww(b,n);

    //сравнение и вывод
    cout<<"a^m равно: "<<a_m<<endl<<"b^n равно: "<<b_n<<endl;
    if(a_m>b_n)cout<<"a^m больше b^n на "<<(a_m-b_n)<<endl;
    else if(b_n>a_m)cout<<"b^n больше a^m на "<<(b_n-a_m)<<endl;
    else cout<<"a^m равно b^n"<<endl;
    
    return 1;
}