#include <iostream>
#include <vector>
using namespace std;

void hollow_rectangle(int row, int col) {
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            if (i == 1 || i == row || j == 1 || j == col) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void inverted_half_pyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void half_pyramid_180_notation(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j <= n - i) {
                cout << "  ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void half_pyramid_using_numbers(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

void floyds_triangle(int n) {
    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void butterfly_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        int space = 2 * n - 2 * i;
        for (int i = 1; i <= space; i++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        int space = 2 * n - 2 * i;
        for (int i = 1; i <= space; i++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void inverted_pattern(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void zero_one_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

void rhombus_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) {
            cout << " ";
        }
        for (int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void number_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void palindromic_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        for (int x = 2; x <= i; x++) {
            cout << x << " ";
        }
        cout << endl;
    }
}

void star_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--) {
        for (int k = 1; k <= n - i; k++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void zig_zag_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n * n; j++) {
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0)) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void hourglass_pattern(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void printPascalsTriangle(int n) {
    vector<vector<int>> triangle(n);

    for (int i = 0; i < n; i++) {
        triangle[i].resize(i + 1);
        triangle[i][0] = triangle[i][i] = 1;

        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, n, row, col;
    cout << "Choose a pattern to print:\n";
    cout << "1. Hollow Rectangle\n";
    cout << "2. Inverted Half Pyramid\n";
    cout << "3. Half Pyramid (180-degree rotation)\n";
    cout << "4. Half Pyramid Using Numbers\n";
    cout << "5. Floyd's Triangle\n";
    cout << "6. Butterfly Pattern\n";
    cout << "7. Inverted Pattern\n";
    cout << "8. 0-1 Pattern\n";
    cout << "9. Rhombus Pattern\n";
    cout << "10. Number Pattern\n";
    cout << "11. Palindromic Pattern\n";
    cout << "12. Star Pattern\n";
    cout << "13. Zig-Zag Pattern\n";
    cout << "14. Hourglass Pattern\n";
    cout << "15. Pascal's Triangle\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter rows and columns: ";
            cin >> row >> col;
            hollow_rectangle(row, col);
            break;
        case 2:
            cout << "Enter number of rows: ";
            cin >> n;
            inverted_half_pyramid(n);
            break;
        case 3:
            cout << "Enter number of rows: ";
            cin >> n;
            half_pyramid_180_notation(n);
            break;
        case 4:
            cout << "Enter number of rows: ";
            cin >> n;
            half_pyramid_using_numbers(n);
            break;
        case 5:
            cout << "Enter number of rows: ";
            cin >> n;
            floyds_triangle(n);
            break;
        case 6:
            cout << "Enter number of rows: ";
            cin >> n;
            butterfly_pattern(n);
            break;
        case 7:
            cout << "Enter number of rows: ";
            cin >> n;
            inverted_pattern(n);
            break;
        case 8:
            cout << "Enter number of rows: ";
            cin >> n;
            zero_one_pattern(n);
            break;
        case 9:
            cout << "Enter number of rows: ";
            cin >> n;
            rhombus_pattern(n);
            break;
        case 10:
            cout << "Enter number of rows: ";
            cin >> n;
            number_pattern(n);
            break;
        case 11:
            cout << "Enter number of rows: ";
            cin >> n;
            palindromic_pattern(n);
            break;
        case 12:
            cout << "Enter number of rows: ";
            cin >> n;
            star_pattern(n);
            break;
        case 13:
            cout << "Enter number of rows: ";
            cin >> n;
            zig_zag_pattern(n);
            break;
        case 14:
            cout << "Enter number of rows: ";
            cin >> n;
            hourglass_pattern(n);
            break;
        case 15:
            cout << "Enter number of rows: ";
            cin >> n;
            printPascalsTriangle(n);
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
