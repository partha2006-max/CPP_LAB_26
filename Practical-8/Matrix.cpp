#include <iostream>
using namespace std;
class Matrix {
    int a[2][2];
public:
    void input() {
        cout << "Enter 2x2 matrix elements:\n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> a[i][j];
            }
        }
    }
    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix operator+(Matrix m) {
        Matrix temp;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }
        return temp;
    }
    Matrix operator-(Matrix m) {
        Matrix temp;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                temp.a[i][j] = a[i][j] - m.a[i][j];
            }
        }
        return temp;
    }
    bool operator==(Matrix m) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                if (a[i][j] != m.a[i][j])
                    return false;
            }
        }
        return true;
    }
};
int main() {
    Matrix m1, m2, add, sub;
    cout << "Enter first matrix:\n";
    m1.input();
    cout << "Enter second matrix:\n";
    m2.input();
    add = m1 + m2;
    sub = m1 - m2;
    cout << "\nMatrix Addition:\n";
    add.display();
    cout << "\nMatrix Subtraction:\n";
    sub.display();
    if (m1 == m2) cout << "\nBoth matrices are equal.";
    else cout << "\nMatrices are not equal.";
    return 0;
}