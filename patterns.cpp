#include <iostream>
using namespace std;

class GursewakPatterns
{
public:
    void simplePyramid(int n)
    {
        cout << "Simple Pyramid\n=============" << endl;
        int row = 1;
        while (row <= n)
        {
            int col = 1;
            while (col <= row)
            {
                cout << "*";
                col++;
            }
            cout << endl;
            row++;
        }

        cout << "=============" << endl
             << endl;
    }

    void flippedSimplePyramid(int n, bool isTriangle = false)
    {
        if (isTriangle)
        {
            cout << "Triangle \n=============" << endl;
        }
        else
        {
            cout << "Flipped Simple Pyramid\n=============" << endl;
        }
        int row = 1;
        while (row <= n)
        {
            int col = 1;
            while (col < n - row + 1)
            {
                cout << " ";
                col++;
            }

            col = 1;
            while (col <= row)
            {
                if (isTriangle)
                    cout << "* ";
                else
                    cout << "*";

                col++;
            }

            cout << endl;
            row++;
        }

        cout << "=============" << endl
             << endl;
    }

    void invertedPyramid(int n)
    {
        cout << "Inverted Pyramid\n=============" << endl;
        int row = 1;
        while (row <= n)
        {
            int col = 1;
            while (col <= n - row + 1)
            {
                cout << "*";
                col++;
            }
            cout << endl;
            row++;
        }

        cout << "=============" << endl
             << endl;
    }

    void invertedFlippedPyramid(int n)
    {
        cout << "Inverted Flipped Pyramid\n=============" << endl;
        int row = 1;
        while (row <= n)
        {

            int col = 1;
            while (col < row)
            {
                cout << " ";
                col++;
            }

            col = 1;
            while (col <= n - row + 1)
            {
                cout << "*";
                col++;
            }
            cout << endl;
            row++;
        }

        cout << "=============" << endl
             << endl;
    }

    void triangle(int n)
    {
        this->flippedSimplePyramid(n, true);
    }

    void halfDiamondPattern(int n)
    {
        cout << "Half Diamond Pattern\n=============" << endl;

        int row = 1;
        while (row < n)
        {

            int col = 1;
            while (col <= row)
            {
                cout << "*";
                col++;
            }
            cout << endl;
            row++;
        }

        row = 1;
        while (row <= n)
        {

            int col = 1;
            while (col <= n - row + 1)
            {
                cout << "*";
                col++;
            }
            cout << endl;
            row++;
        }

        cout << "=============" << endl
             << endl;
    }

    void flippedHalfDiamondPattern(int n)
    {
        cout << "Flipped Half Diamond Pattern\n=============" << endl;

        int row = 1;
        while (row < n)
        {

            int col = 1;
            while (col < n - row + 1)
            {
                cout << " ";
                col++;
            }

            col = 1;
            while (col <= row)
            {
                cout << "*";
                col++;
            }
            cout << endl;
            row++;
        }

        row = 1;
        while (row <= n)
        {

            int col = 1;
            while (col <= row - 1)
            {
                cout << " ";
                col++;
            }

            col = 1;
            while (col <= n - row + 1)
            {
                cout << "*";
                col++;
            }
            cout << endl;
            row++;
        }

        cout << "=============" << endl
             << endl;
    }

    void diamondPattern(int n)
    {
        cout << "Diamond Pattern\n=============" << endl;

        // Upper Part of Diamond
        int row = 1;
        while (row <= n)
        {

            int col = 1;
            while (col < n - row + 1)
            {
                cout << " ";
                col++;
            }

            col = 1;
            while (col <= row)
            {
                cout << "* ";
                col++;
            }
            cout << endl;
            row++;
        }

        // Bottom Part of Diamond
        row = 1;
        while (row <= n)
        {

            int col = 1;
            while (col <= row)
            {
                cout << " ";
                col++;
            }

            col = 1;
            while (col < n - row + 1)
            {
                cout << "* ";
                col++;
            }
            cout << endl;
            row++;
        }

        cout << "=============" << endl
             << endl;
    }

    void print(int n, string item)
    {
        if (n == 0)
            return;

        cout << item;
        print(--n, item);
    }

    void diamondPatternClean(int n)
    {
        cout << "Diamond Pattern - v2\n=============" << endl;

        int row = 1;
        int spaces = n - 1;
        while (row <= n)
        {
            print(spaces, " ");
            print(row, "* ");
            cout << endl;
            row++;
            spaces--;
        }

        row = 2;
        spaces = 1;
        while (row <= n)
        {
            print(spaces, " ");
            print(n - row + 1, "* ");
            cout << endl;
            row++;
            spaces++;
        }
        cout << "=============" << endl
             << endl;
    }

    void hourglass(int n)
    {
        cout << "Hour Glass \n=============" << endl;

        int row = 1;
        int spaces = 0;
        while (row <= n)
        {
            print(spaces, " ");
            print(n - row + 1, "* ");
            cout << endl;
            row++;
            spaces++;
        }

        row = 2;
        spaces--;
        spaces--;
        while (row <= n)
        {
            print(spaces, " ");
            print(row, "* ");
            cout << endl;
            row++;
            spaces--;
        }

        cout << "=============" << endl
             << endl;
    }

    void numberPyramid(int n)
    {
        cout << "Number Pyramid \n=============" << endl;

        int row = 1;
        while (row <= n)
        {
            int col = 1;
            while (col <= row)
            {
                cout << row;
                col++;
            }
            cout << endl;
            row++;
        }

        cout << "=============" << endl
             << endl;
    }

    void continuousNumberPyramid(int n)
    {
        cout << "Continuous Number Pyramid \n=============" << endl;

        int row = 1;
        int count = 1;
        while (row <= n)
        {
            int col = 1;
            while (col <= row)
            {
                cout << count << " ";
                col++;
                count++;
            }
            cout << endl;
            row++;
        }

        cout << "=============" << endl
             << endl;
    }

    void rotatedNumberPyramid(int n)
    {
        cout << "Rotated Number Pyramid \n=============" << endl;

        int row = 1;
        while (row <= n)
        {
            int col = 1;

            // Print Spaces
            while (col <= n - row)
            {
                cout << " ";
                col++;
            }

            col = 1;
            int count = row;
            while (col <= row)
            {
                cout << count;
                col++;
                count++;
            }
            cout << endl;
            row++;
        }

        cout << "=============" << endl
             << endl;
    }

    void palindromeTriangle(int n)
    {
        cout << "Palindrome Triangle \n=============" << endl;

        int row = 1;
        while (row <= n)
        {
            int col = 1;

            // Print Spaces
            while (col <= n - row)
            {
                cout << " ";
                col++;
            }

            col = 1;
            int count = row;
            while (col <= row)
            {
                cout << count;
                col++;
                count++;
            }

            count--;
            count--;
            while (count >= row)
            {
                cout << count--;
            }
            cout << endl;
            row++;
        }

        cout << "=============" << endl
             << endl;
    }

    void alphabetPyramid(int n)
    {
        cout << "Alphabet Pyramid \n=============" << endl;

        int row = 1;
        while (row <= n)
        {
            int col = 1;
            while (col <= row)
            {
                char ch = 'A' + row - 1;
                cout << ch;
                col++;
            }
            cout << endl;
            row++;
        }

        cout << "=============" << endl
             << endl;
    }

    void continuousAlphabetPyramid(int n)
    {
        cout << "Continuous Alphabet Pyramid \n=============" << endl;

        int row = 1;
        int count = 0;
        while (row <= n)
        {
            int col = 1;
            while (col <= row)
            {
                char ch = 'A' + count;
                cout << ch;
                col++;
                count++;
            }
            cout << endl;
            row++;
        }

        cout << "=============" << endl
             << endl;
    }

    void dabbang(int n)
    {
        cout << "Dabbang [Love Babbar] \n=============" << endl;

        int row = 1;
        while (row <= n)
        {
            int col = 1;
            while (col <= n - row + 1)
            {
                cout << col;
                col++;
            }

            col = 1;
            while (col < row)
            {
                cout << "*";
                col++;
            }

            col = 1;
            while (col < row)
            {
                cout << "*";
                col++;
            }

            while (col <= n)
            {
                cout << n - col + 1;
                col++;
            }

            cout << endl;
            row++;
        }

        cout << "=============" << endl
             << endl;
    }
};

int main()
{
    GursewakPatterns patterns;
    patterns.simplePyramid(5);
    patterns.flippedSimplePyramid(5);
    patterns.invertedPyramid(5);
    patterns.invertedFlippedPyramid(5);
    patterns.triangle(5);
    patterns.halfDiamondPattern(5);
    patterns.flippedHalfDiamondPattern(5);
    patterns.diamondPattern(5);
    patterns.diamondPatternClean(5);
    patterns.hourglass(5);
    patterns.numberPyramid(5);
    patterns.continuousNumberPyramid(5);
    patterns.rotatedNumberPyramid(5);
    patterns.palindromeTriangle(5);
    patterns.continuousAlphabetPyramid(5);
    patterns.dabbang(5);
    return 0;
}
