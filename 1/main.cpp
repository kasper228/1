#include <iostream>

using namespace std;

void info()
{
    int num = 123;
    char num1 = 'f';
    string num2 = "wegwsrgsrg";
    bool num3 = true;
    cout<<"Имя: "<<typeid(num).name()<<" Размер: "<<sizeof(num)<<endl;
    cout<<"Имя: "<<typeid(num1).name()<<" Размер: "<<sizeof(num1)<<endl;
    cout<<"Имя: "<<typeid(num2).name()<<" Размер: "<<sizeof(num2)<<endl;
    cout<<"Имя: "<<typeid(num3).name()<<" Размер: "<<sizeof(num3)<<endl;
}

void operation()
{
    int num1 = 10;
    int num2 = 5;
    char num3 = 'f';
    char num4 = 'g';
    string num5 = "eg";
    string num6 = "tg";
    bool num7 = true;
    bool num8 = false;

    cout<<"int(10) + int(5): "<<num1+num2<<endl;
    cout<<"char(f) + char(g): "<<char(num3+num4)<<endl;
    cout<<"char(f) - char(g): "<<char(num3-num4)<<endl;
    cout<<"str(eg) + str(tg): "<<num5 + num6<<endl;
    cout<<"bool(t) + bool(f): "<<num7 + num8<<endl;
    cout<<"bool(t) - bool(f): "<<num7 - num8<<endl;
}

int main()
{
    info();
    operation();
    return 0;
}

