#include <bits/stdc++.h>
using namespace std;

void acordeMaior(string notas[12], int nota) {
    cout << notas[nota] << " => ";
    // tonica, terca aumentada, quinta justa
    cout << notas[nota] << ", " << notas[nota+4] << ", " << notas[nota+7] << endl;
}

void acordeMenor(string notas[12], int nota) {
    cout << notas[nota] << "m => ";
    // tonica, terca menor, quinta justa
    cout << notas[nota] << ", " << notas[nota+3] << ", " << notas[nota+7] << endl;
}

int main() {
    string notas[12] = {
        "A", "A#", "B", "C",
        "C#", "D", "D#", "E",
        "F", "F#", "G", "G#"
    };

    int nota=0;
    do {
        cin >> nota;
    } while (nota<0 || nota>11);

    acordeMaior(notas, nota);
    acordeMenor(notas, nota);

    return 0;
}
