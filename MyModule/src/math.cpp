#include<iostream>
using namespace std;

int  math(int a, int b)
{
    int c;
    return c = a+b;
}

int main(){

int a,b,c;

cout  << "输入一个数字a";
cin  >> a;

cout << "输入第二个数字b";
cin >> b;

cout << "a+b = " << math(a,b) << endl;


return 0;

}