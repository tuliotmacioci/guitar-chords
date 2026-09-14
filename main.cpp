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
        "A", "Bb", "B", "C",
        "C#", "D", "Eb", "E",
        "F", "F#", "G", "Ab"
    };

    int nota=0;
    do {
        // cout << "0. Sair" << endl;
        for (int i=0; i<12; i++) {
            cout << i+1 << ". " << notas[i] << endl;
        }
        cout << "Escolha uma nota (1-12): ";
        cin >> nota;
        nota--;

        int opt=0;
        do {
            cout << "[" << notas[nota] << "]\n"
                // << "0. Voltar" << endl
                << "1. Escalas" << endl
                << "2. Acordes" << endl
                << "Escolha uma opcao (0-2): ";
            cin >> opt;

            switch (opt) {
                case 1:
                    escalaMaior(notas, nota);
                    escalaMenor(notas, nota);
                    break;
                case 2:
                    acordeMaior(notas, nota);
                    acordeMenor(notas, nota);
                default: break;
            }
        } while (opt<=0 || opt>2);
    } while (nota<0 || nota>11);

    return 0;
}
