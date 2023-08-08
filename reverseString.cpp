#include <iostream>
using namespace std;

void reverseIt(string text){
    for(int i = text.length(); i >= 0; --i){
        cout << text[i-1];
    }
}

string reverseIt2(string text){
    char temp;
    int index = text.length();

    for(int i = 0; i < index/2; i++){
        temp = text[i];
        text[i] = text[index - (i + 1)];
        text[index - (i + 1)] = temp;
    }
    return text;
}

int main(){
    reverseIt("Able was I ere I saw Elba.");

    cout << endl << reverseIt2("Able was I ere I saw Elba.");
}