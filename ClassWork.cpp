#include <iostream>
#include<windows.h>
using namespace std;




int main()
{
    /*int arr[] = { 1,2,3,4,5 };
    int arr2[5];
    arr2[0] = 1;
    arr2[1] = 2;
    arr2[2] = 3;
    arr2[3] = 4;
    arr2[4] = 5;
    for (int i = 0; i < 5; i+=2) {
        cout << arr2[i] << endl;
    }
    int i = 0;
    while (i > 5) {
        cout << arr2[5] << endl;
    }*/




    string students[] = { "Jamala", "Danial", "Fahur", "Khalia", "Hamud" };
    string students2[] = { "Indian", "Yararat" };
    string winner_name;
    cin >> winner_name;
    bool found = false;
        for (int i = 0; i < 5; i++) {
            if (students[i] == winner_name) {
                cout << "first group" << endl;
                found = true;
            }
            else if (students2[i] == winner_name) {
                cout << "second group" << endl;
                found = true;
            }
            else if (i == 4 && found == false) 
                cout << "There is no name as you want" << endl;
        }
    
    return 0;
}

