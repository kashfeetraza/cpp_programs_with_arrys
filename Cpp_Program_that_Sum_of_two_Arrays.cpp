/*
Today we made a program that added
two matrix
1. if the number of row and column is not equal to the
its shows it cannot added
2. we uses the array and for loop to find the correct
calculation.
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n, p, q, A[5][5], B[5][5], C[5][5];

    cout << "Enter the number of Row and colums:" << endl;
    cin >> m >> n;

    cout << "Enter the number of Row and colums:" << endl;
    cin >> p >> q;

    if ((m != p) && (n != q))
    {
        cout << "This number doesnot added";
        exit(0);
    }

    cout << "Enter the element of Matrix A:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter the element of Matrix B:" << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "The Sum of these Two matrix is" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << C[i][j] << " ";
            cout << "\n";
        }
    }

    return 0;
}