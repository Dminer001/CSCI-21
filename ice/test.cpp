#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int Biggest (int first_number, int second_number) {
    if (first_number > second_number) {
        return first_number;
    } else {
        return second_number;
    }
}

int Biggest (int first_number, int second_number, int third_number) {
    if ((first_number > second_number) && first_number < third_number) {
        return third_number;
    } else if ((first_number > second_number) && (first_number > third_number)){
        return first_number;
    } else {
        return second_number;
    }
}

void Swap (int &first_number, int &second_number) {
    int temp;
    temp = first_number;
    first_number = second_number;
    second_number = temp;
}

int main(){
    string full_Name;
   
    
    cout << "What is your name?" << endl;
    cin >> full_Name;

    cout << Biggest(17, 21, 3) << endl;
    cout << Biggest(13, 33) << endl;
    return 0;
}