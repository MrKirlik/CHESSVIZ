#include <iostream>

using namespace std;

void makeboard(char a[][9])
{
    int i, j;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            a[i][j] = ' ';
        }
    }
    a[0][0] = '8';
    a[1][0] = '7';
    a[2][0] = '6';
    a[3][0] = '5';
    a[4][0] = '4';
    a[5][0] = '3';
    a[6][0] = '2';
    a[7][0] = '1';

    a[0][1] = 'r';
    a[0][2] = 'n';
    a[0][3] = 'b';
    a[0][4] = 'q';
    a[0][5] = 'k';
    a[0][6] = 'b';
    a[0][7] = 'n';
    a[0][8] = 'r';

    a[1][1] = 'p';
    a[1][2] = 'p';
    a[1][3] = 'p';
    a[1][4] = 'p';
    a[1][5] = 'p';
    a[1][6] = 'p';
    a[1][7] = 'p';
    a[1][8] = 'p';

    a[6][1] = 'P';
    a[6][2] = 'P';
    a[6][3] = 'P';
    a[6][4] = 'P';
    a[6][5] = 'P';
    a[6][6] = 'P';
    a[6][7] = 'P';
    a[6][8] = 'P';

    a[7][1] = 'R';
    a[7][2] = 'N';
    a[7][3] = 'B';
    a[7][4] = 'Q';
    a[7][5] = 'K';
    a[7][6] = 'B';
    a[7][7] = 'N';
    a[7][8] = 'R';

    a[8][1] = 'a';
    a[8][2] = 'b';
    a[8][3] = 'c';
    a[8][4] = 'd';
    a[8][5] = 'e';
    a[8][6] = 'f';
    a[8][7] = 'g';
    a[8][8] = 'h';
}

void printboard(char a[][9])
{
    int i, j;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    char a[9][9];
    makeboard(a);
    printboard(a);
    system("PAUSE");
    return 0;
}
