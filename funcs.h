// заголовочный файл funcs.h 
#ifndef __FUNCS_H__
 #define __FUNCS_H__ 
 double MySum(double, double); 
 double MySub(double, double);
 #endif 
 // __FUNCS_H__
//funcs.cpp #include "stdafx.h" #include "funcs.h" double MySum(double a, double b) { return a + b; } double MySub(double a, double b) { return a - b; }
//файл program.cpp #include "stdafx.h" #include #include "funcs.h" using namespace std; int main() { cout << MySum(10, 3) << endl; cout << MySub(10, 3) << endl; return 0; }
