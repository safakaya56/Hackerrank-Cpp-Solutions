#include <iostream>

using namespace std;

void operattion(int* a, int* b) {
    int total = 0, difference = 0;
    
    if (*a - *b > 0) 
    {
        difference = *a - *b;
    }
    else
    {
        difference = -1*(*a - *b);
    }
    
    total = *a + *b;
    cout << total << endl;
    cout << difference;

    }

int main() 
{
    int a, b;
    int* pa = &a;
    int* pb = &b;
    cin >> a >> b;
    operattion(pa,pb);

    return 0;
}
