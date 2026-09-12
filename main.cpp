#include <bits/stdc++.h>
using namespace std;

void escalaMaior(string notas[12], int nota) {
    // tom - tom - semitom - tom - tom - tom - semitom
    cout << "Escala maior => "
         << notas[nota] << ", "
         << notas[(nota+2)%12] << ", "
         << notas[(nota+4)%12] << ", "
         << notas[(nota+5)%12] << ", "
         << notas[(nota+7)%12] << ", "
         << notas[(nota+9)%12] << ", "
         << notas[(nota+11)%12] << ", "
         << notas[(nota+12)%12] << endl;
}

void escalaMenor(string notas[12], int nota) {
    // tom - semitom - tom - tom - semitom - tom - tom
    cout << "Escala menor => "
         << notas[nota] << ", "
         << notas[(nota+2)%12] << ", "
         << notas[(nota+3)%12] << ", "
         << notas[(nota+5)%12] << ", "
         << notas[(nota+7)%12] << ", "
         << notas[(nota+8)%12] << ", "
         << notas[(nota+10)%12] << ", "
         << notas[(nota+12)%12] << endl;
}

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

    escalaMaior(notas, nota);
    escalaMenor(notas, nota);

    acordeMaior(notas, nota);
    acordeMenor(notas, nota);

    return 0;
}
