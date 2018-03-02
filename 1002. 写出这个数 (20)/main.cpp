#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

void func(int n)
{
    char na[10];
    sprintf(na, "%d", n);
    int len = strlen(na);
    int sum = 0;
    for (int i = 0; i < len; i++) {
        int x = na[i] - 48;//asc code transform
        sum = sum + x;
    }

    char na1[10];
    sprintf(na1, "%d",sum);
    int len1 = strlen(na1);
    for (int i = 0; i < len1; i++) {
        int x = na1[i] - 48;//asc code transform
        switch(x) {
            case 0: if(i != len1-1){cout<<"lin ";}else {cout<<"lin\n";} break;
            case 1: if(i != len1-1){cout<<"yi ";}else {cout<<"yi\n";} break;
            case 2: if(i != len1-1){cout<<"er ";}else {cout<<"er\n";} break;
            case 3: if(i != len1-1){cout<<"san ";}else {cout<<"san\n";} break;
            case 4: if(i != len1-1){cout<<"si ";}else {cout<<"si\n";} break;
            case 5: if(i != len1-1){cout<<"wu ";}else {cout<<"wu\n";} break;
            case 6: if(i != len1-1){cout<<"liu ";}else {cout<<"liu\n";} break;
            case 7: if(i != len1-1){cout<<"qi ";}else {cout<<"qi\n";} break;
            case 8: if(i != len1-1){cout<<"ba ";}else {cout<<"ba\n";} break;
            case 9: if(i != len1-1){cout<<"jiu ";}else {cout<<"jiu\n";} break;
            default : break;
        }
    }
}

int main()
{
    int temp = 0;
    int n = 0;
    cin>>n;
    func(n);
    return 0;
}