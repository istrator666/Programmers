#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n;
    cin >> n;

    string Ast = "*";
    
    for (int i = 0; i < n; ++i)
    {
        cout << Ast << endl;
        Ast += "*";
    }
    
    return 0;
}