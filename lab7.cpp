// COMSC-210 | Lab  7| Tianyi Cao
#include <iostream>
#include <string>

using namespace std;

//avoiding magic number
const int SIZE = 5;

string* reverseArray(string*);
void displayArray(string*);

int main(){
    string *names = nullptr;
    names = new string[SIZE];
    for(int i=0;i<SIZE;i++){
        *(names + i) = 1;
    }
    
}

void displayArray(string *names){
    for (int i=0; i<SIZE;i++){
        cout << *(names +i) << " ";
    }
    cout << endl;
}

string* reverseArray(string *names){
    
}