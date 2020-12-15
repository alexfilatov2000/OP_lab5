#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int** a = new int*[10];
       for (int i = 0; i < 10; i++)
       {
           a[i] = new int[10];
       }

       for (int i = 0; i < 10; i++)
       {
           for (int j = 0; j < 10; j++)
           {
               a[i][j]++;
           }
       }
       return 0;
}
