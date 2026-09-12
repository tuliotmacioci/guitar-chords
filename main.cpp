#include <bits/stdc++.h>
using namespace std;

void acordeMaior(string notas[12], int nota) {
    int tonica = nota;
    int terca_aumentada = (nota+4)%12;
    int quinta_justa = (nota+7)%12;

    cout << notas[nota] << " => "
         << notas[tonica] << ", "
         << notas[terca_aumentada] << ", "
         << notas[quinta_justa] << endl;
}

void acordeMenor(string notas[12], int nota) {
    int tonica = nota;
    int terca_menor = (nota+3)%12;
    int quinta_justa = (nota+7)%12;

    cout << notas[nota] << "m => "
         << notas[tonica] << ", "
         << notas[terca_menor] << ", "
         << notas[quinta_justa] << endl;
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
