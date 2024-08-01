#include <iostream>
using namespace std;
int main()

{
    int a[10][10];
    int b, i, j, w, lr = 0, lc = 0, n, m;
    cout<<"Name: Deepanshu Jindal \nUID: 21BCS1933\n ";
    cout << "No of rows: ";
    cin >> m;
    cout << "No of columns: ";
    cin >> n;
    cout << "Enter the elements in matrix: ";
    int p=n,q=n;
    while(m--){
        while(n--)
            cin >> a[m][n];
        n=p;
    }
    m=q;
    cout << "Enter the base address";//base address =1000
    cin >> b;
    cout << "Enter the size of one element";
    cin >> w;
    i = m - 1;
    j = n - 1;
    cout << "address of A["<<m-1<<","<<n-1<<"] "<<a[m-1][n-1] <<" is "<< b + w * (n * (i - lr) + (j - lc));
    return 0;
    
}
