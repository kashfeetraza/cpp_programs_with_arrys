#include <iostream>
using namespace std;

int main()
{
    int row1, row2, col1, col2;
    int A[5][5], B[5][5], C[5][5];

    cout << "Enter The row of colum of Matrix:" << endl;
    cin >> row1 >> col1;

    cout << "Enter The row of colum of Matrix:" << endl;
    cin >> row2 >> col2;

    if (col1 != row2)
    {
        cout << "Matrix cannot be multiply";
        exit(0);
    }

    cout << "Enter the Element of A Matrix:" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> A[i][j];
        }
    }
    
    cout << "Enter the Element of A Matrix:" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Enter the Element of B Matrix:" << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> B[i][j];
        }
    }

    cout << "Enter the Element of B Matrix:" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << B[i][j] << " ";
        }
        cout<<endl;
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < row2; k++)
            {
                C[i][j] += A[i][j] * B[i][j];
            }
        }
    }

    cout << "Product of Matrix:" << endl;

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
