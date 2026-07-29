#include<iostream>
#include "my_math.h"
using namespace std;

int main(){

int a,b,c;

cout  << "输入一个数字a";
cin  >> a;

cout << "输入第二个数字b";
cin >> b;

cout << "a+b = " << math(a,b) << endl;


return 0;

}