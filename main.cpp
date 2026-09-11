#include <bits/stdc++.h>
using namespace std;

int main() { 
    string notas[] = {
        "A", "A#", "B", "C",
        "C#", "D", "D#", "E",
        "F", "F#", "G", "G#"
    };

    /*
    for (int i=0; i<12; i++) {
        cout << notas[i] << endl;
    }
    */

    // "x maior" = x, x+4, x+7 (tonica, terca aumentada, quinta justa)
    cout << "Do maior (C) => " << notas[3] << notas[3+4] << notas[3+7] << endl;

    // "y menor" = y, y+3, y+7 (tonica, terca menor, quinta justa)
    cout << "La menor (Am) => " << notas[0] << notas[0+3] << notas[0+7] << endl; 

    return 0;
}
