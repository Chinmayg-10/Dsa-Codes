#include <iostream>
#include <cstring>  // For strlen
using namespace std;

int getlength(char arr[]) {
    int count = 0;
    int index = 0;
    while (arr[index] != '\0') {
        count++;
        index++;
    }
    return count;
}

int main() {
    char array[20];
    cin >> array;
    int length = getlength(array);
    int e=length-1;
    int index=0;
    while(index<=e){
        swap(array[index],array[e]);
        index++;
        e--;
    }
    cout<<array;
}

