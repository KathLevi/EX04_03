//////////////////////////
//Name: Kathleen Levi
//
//Project: EX04_03 (11.5)
//
//Date: May 26, 2015
//////////////////////////

#include <iostream>
using namespace std;

int smallestElement(int* list, int size);

int main(){
    int list[] = {1, 2, 4, 5, 10, 100, 2, -22};
    
    cout << smallestElement(list, 9);
}

int smallestElement(int* list, int size){
    int smallest = list[0];
    
    for (int i = 1; i < size; i++){
        if (list[i] < list[0])
            smallest = list[i];
    }
    return smallest;
}