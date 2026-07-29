#include<iostream>
#include"my_math.h"
using namespace std;

int main(){
    int result = math(2, 3);
    if (result == 5) {
        cout << "测试通过,math(2,3) = " << result << endl;
        return 0;
    } else {
        cout << "测试失败！期望 5,实际 " << result << endl;
        return 1;
    }
}