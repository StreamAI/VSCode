#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i;
    printf("Hello,World.\n");
    for(i = 0; i < 10; i++){
        cout << i << " : " << &i << endl;
    }
    getchar();
    return 0;
}