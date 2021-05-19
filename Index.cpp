#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename T>

//Generics

void printArray(vector<T> arr){
  
    int count = arr.size();
    for (int i = 0; i < count; i++)
    {
        cout<< arr[i] << "\n";
    }
    
}

int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    
    vector<string> c;
    c.push_back("A");
    c.push_back("B");
    c.push_back("C");

    printArray<int>(a);
    cout<<"\n";
    printArray<string>(c);
    


    return 0;

}