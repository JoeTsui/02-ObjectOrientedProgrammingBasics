/*******************************************************
 * File        : 02.01-CompilationEnvironmentTesting-
 *               0.1-SingleFileCompileAndLink.cpp
 * Description : 单个源文件的编译与链接
 * Author      : Teacher
 * Date        : 2025-04-29
 *
 *******************************************************/

#include <iostream>
#include <cstdlib> //atoi()
using namespace std;

int ADD(int a, int b) { return a + b; }
  
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