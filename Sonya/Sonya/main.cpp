#include <string>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    
    string str="12 34 56";
    istringstream ss(str);
    int mas[100];
    int n=0;
    while(ss>>mas[n++])
        ;
    n--;
    for (int i = 0; i < n; i++)
        cout<<mas[i]<<' ';
    system("pause");
    return 0;
}
