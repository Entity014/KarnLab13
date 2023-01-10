#include<iostream>
#include<ctime>

using namespace std;

long long int fibonacci(int);

void Question_2()
{
    int x;
    cin >> x;
    cout << fibonacci(x);
}

void Question_3()
{
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
}

int main(){
    Question_3();
    return 0; 
}

long long int fibonacci(int x)
{
    if (x == 0 || x == 1) return x;
    else return fibonacci(x-1) + fibonacci(x-2);
}