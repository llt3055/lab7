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
    //for(int i=0;i<SIZE;i++){
        //*(names + i) = "a";
    //}
    *(names) = "ted";
    *(names + 1) = "jin";
    *(names + 2) = "joe";
    *(names + 3) = "tyler";
    *(names + 4) = "liu";
    cout << "original name"<< endl;
    displayArray(names);

    string *reverse = reverseArray(names);
    cout << "reverse array";
    displayArray(reverse);
    
    delete[] names;
    names = nullptr;
    return 0;
}

void displayArray(string *names){
    for (int i=0; i<SIZE;i++){
        cout << *(names +i) << " ";
    }
    cout << endl;
}

string* reverseArray(string *names){
    for (int i= 0;i<SIZE/2;i++){
        string temp = *(names + i);
        *(names + i) = *(names + (SIZE -1 -i));
        *(names + (SIZE -1 -i)) = temp;
    }
    return names;
}