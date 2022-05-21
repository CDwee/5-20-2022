// Started at 5:56 5-20-2022

// Section 12
// Section Arithmetic

#include <iostream>

using namespace std;

int main() {
    
    int scores [] {100, 95, 89, 68, -1};
    int *score_ptr{scores};
    
    while (*score_ptr != -1) {
        cout << *score_ptr << endl;
        score_ptr++;
    }
 
    cout << "\n-----------------------" << endl;
    score_ptr = scores;
    while (*score_ptr != -1)
        cout << *score_ptr++ << endl;
        
    cout << "\n-----------------------" << endl;
    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"James"};
    
    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};
    
    cout << boolalpha;
    cout << p1 << " == " << p2 << ": " << (p1 == p2) << endl;     // false
    cout << p1 << " == " << p3 << ": " << (p1 == p3) << endl;     // true
    
    cout << *p1 << " == " << *p2 << ": " << (*p1 == *p2) << endl;     // true
    cout << *p1 << " == " << *p2 << ": " << (*p1 == *p3) << endl;     // true
    
    p3 = &s3;   // point to James
    cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl;       // false
    
    
    cout << "\n-----------------------" << endl;
    char name[] {"Frank"};
    
    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};
    
    char_ptr1 = &name[0];   // F
    char_ptr2 = &name[3];   // n
    
    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;

    cout << endl;
    return 0;
}


// Section 12
// Passing Pointers 1
#include <iostream>

using namespace std;


void double_data(int *int_ptr) {
    *int_ptr *= 2;
}

int main() {
    int value {10};
    int *int_ptr {nullptr};
    
    cout << "Value: " << value << endl;
    double_data(&value);
    cout << "Value: " << value << endl;
    
    cout << "---------------------------" << endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;
    
    cout << endl;
    return 0;
}

// Section 12
// Passing Pointers 2
#include <iostream>
#include <string>
#include <vector>

using namespace std;


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main() {
    int x {100}, y {200};
    cout <<"\nx: " << x << endl;
    cout << "y: " << y << endl;
    
    swap(&x, &y);
    
    cout <<"\nx: " << x << endl;
    cout << "y: " << y << endl;
    
    cout << endl;
    return 0;
}


// Section 12
// Passing Pointers 3
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(const vector<string>  *const v) {
//    (*v).at(0) = "Funny";
    for (auto str: *v) 
        cout << str << " ";
    cout << endl;
//    v = nullptr;    
}

void display(int *array, int sentinel) {
    while(*array != sentinel)
        cout << *array++ << " ";
    cout << endl;
}

int main() {
    
//    cout << "----------------------------" << endl;
//    vector<string> stooges {"Larry", "Moe", "Curly"};
//    display(&stooges);
    
    cout << "\n-----------------------------" << endl;
    int scores[] {100, 98, 97, 79, 85, -1};
    display(scores, -1);
    
    cout << endl;
    return 0;
}

// Ended at 5:58 5-20-2022
