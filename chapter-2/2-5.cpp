#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    int pad = 1;
    int rows;
    int cols;

    // square
    const int square_length = 3;
    rows = square_length + pad * 2;
    cols = rows;
    for (int r = 0; r < rows; ++r) {
        string::size_type c = 0;
        while(c < cols) {
            if (r == 0 || r == rows - 1 || c == 0 || c == cols -1)
                cout << " ";   
            else
                cout << "*";
            ++c;
        }
        cout << endl;
    }

    // rectangle
    const int rect_width = 4;
    const int rect_height = 3;
    rows = rect_height + pad * 2;
    cols = rect_width + pad * 2;
    for (int r = 0; r < rows; ++r) {
        string::size_type c = 0;
        while(c < cols) {
            if (r == 0 || r == rows - 1 || c == 0 || c == cols -1)
                cout << " ";   
            else
                cout << "*";
            ++c;
        }
        cout << endl;
    }

    // triangle
    const int tri_width = 5;
    const int tri_height = 3;
    rows = tri_height + pad * 2;
    cols = tri_width + pad * 2;
    for (int r = 0; r < rows; ++r) {
        string::size_type c = 0;
        string::size_type col_mid = (cols + 1) / 2 - 1;
        while(c < cols) {
            if (r > 0 && r < rows - 1 && c > col_mid - r && c < col_mid + r)
                cout << "*";  
            else
                cout << " ";
            ++c;
        }
        cout << endl;
    }

    return 0;
}
