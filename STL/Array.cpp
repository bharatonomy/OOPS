#include <iostream>
#include <array>
using namespace std;

int main(){
    int basic[3]={1,3,5};

array<int,4> a = {5,6,7,8};

int size = a.size();

for(int i=0;i<size;i++){
cout<<a[i]<<endl;
}

cout<<"Element at 2nd index: "<<a.at(2)<<endl;
string isEmpty= a.empty()?"False":"True";
cout<<"Empty or not: "<<isEmpty<<endl;
cout<<"First Element:"<<a.front()<<endl;
cout<<"Last Element:"<<a.back()<<endl;
}