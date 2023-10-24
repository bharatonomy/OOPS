#include <iostream>

using namespace std;

// template <typename T>
template <typename J>
J area_rect(J a,J b){
    J result =a*b;
    return result;
}

int main(){

int x1 = area_rect<int>(2,19);
double x2 = area_rect<double>(2.645,16.3439);
float x3 = area_rect<float>(3.7,21.39);

cout<<"STL in C++\n"<<x1<<endl<<x2<<endl<<x3<<endl;
    
    return 0;
}