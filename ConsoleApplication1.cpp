// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>

/* int main()
{
    using namespace std;
    int a = 8;
    int b = 9;
    int c = a * b;
    
    cout << c << endl;
    int i;
    cout << "Enter any value" << endl;
    cin >> i;
    cout << "i = " << i;
    return 0; 
}      */

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

/* #include <iostream>
#include "math.h"
#include "print.h"

int main() {
    using namespace std;
    int x, y;
    cin >> x >> y;

    int result = Add(x, y);
    cout << result;
}

------------------References--------------------------
#include<iostream>

int main() {
    using namespace std;

    int x = 15;

    int &ref = x;

    cout << ref;
    return 0;
}

-------------------Pointers and Reference--------------------------
#include<iostream>

void Swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}
int main() {
    using namespace std;
    int a = 8, b = 16;
    Swap(&a, &b);
    cout << "a :" << a <<"\n";
    cout << "b :" << b << "\n";
    return 0;
}

------------------ Constant Variable ---------------------
#include<iostream>

int main() {
    using namespace std;
    float radius = 0; // initializing radius value
    cin >> radius;     // take input valuefrom the console
    const float PI = 3.14159; // initializing the constant PI value
    float circumference = PI * 2 * radius; // calculation for finding the value of circumference
    cout << "Circumference is :" << circumference << endl; // print circumference 

    return 0;
}                               
#include<iostream>

int Sum(int x, int y) {
    return 0;
}
int main() {
    using namespace std;
    auto i = 10;
    auto j = 5;
    //auto Sum = i + 4.3f;
    auto result = Sum(i, j);
    static auto y = 2;
    const auto x = 10;
    auto add = x + y;
    auto &var = x;
    auto *ptr = &x;
    cout << add << "\n";
    return 0;
}                               

#include<iostream>
void CreateWindow(const char * title, int x, int y, int width, int height);

void CreateWindow(const char * title = "Notepad", int x = -1, int y = -1, int width = -1, int height = -1) {
    using namespace std;
    cout << "Title : " << title << endl;
    cout << "x : " << x << endl;
    cout << "y : " << y << endl;
    cout << "width : " << width << endl;
    cout << "height : " << height << endl;
}
int main() {
    CreateWindow("Notepad");
    return 0;
}                                                    */

/*#include<iostream>
#include "math.h"
#include "print.h"

using namespace std;
//int Addition(int a, int b);

int AddNum(int x, int y) {

    //int main() {
    using namespace std;
    int sum = AddNum(2, 5);
    cout << sum;
    return 0;
}

void print(int count, char ch) {
    using namespace std;
    for (int i = 0; i < count; i++)
    {
        cout << ch;
    }
    cout << endl;
} 

void EndMessage() {
    using namespace std;
    cout << "End of program" << endl;
}


int main() {
    atexit(EndMessage);
    print(10, '#');
    print(10, 'c');
    void (*pfn) (int, char) = print;
    (*pfn) (8, '@');
    pfn(5, '+');
    using namespace std;
    cout << "End of main" << endl;
    //return AddNum;
} */



//int AddNum(int x, int y) {
//    int result = x + y;
//    return result;
//}

#include <iostream>

using namespace std;

int AddNum(int x, int y) {
    return x + y;
}

void print(int count, char ch) {
    for (int i = 0; i < count; i++) {
        cout << ch;
    }
    cout << endl;
}

void EndMessage() {
    cout << "End of program" << endl;
}

int main() {
    atexit(EndMessage);
    int x = 0;
    int y = 0;
    cin >> x >> y;
    int sum = AddNum(x, y);
    cout << sum << endl;
    char nChar;
    cin >> nChar;
    print(10, nChar);
    print(10, '#');
    print(10, 'c');
    void (*pfn) (int, char) = print;
    (*pfn) (8, '@');
    pfn(5, '+');
    cout << "End of main" << endl;
    return 0;    // returns 0

}

