/*******************************************************
 * File        : 1.0-MultiFileCompileAndLink-main.cpp
 * Description : 多个源文件的编译与链接
 * Author      : Teacher
 * Date        : 2025-04-29
 *
 *******************************************************/

#include <iostream>
#include <cstdlib> //atoi()
#include "1.1-MultiFileCompileAndLink-func-add.h"
using namespace std;

int main(int argc, char** argv) {
    if(argc != 3){
        cout << "Usage:" << argv[0]
                 << " op1 op2" << endl;
        return 1;
    }

    int a, b;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    cout << ADD(a, b) << endl;
    return 0;
}