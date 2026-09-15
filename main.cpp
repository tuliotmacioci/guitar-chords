#include <bits/stdc++.h>
using namespace std;

#pragma region ESCALAS

void escalaMaior(string notas[12], int nota) {
    // tom - tom - semitom - tom - tom - tom - semitom
    cout << "Maior => "
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
    cout << "Menor => "
         << notas[nota] << ", "
         << notas[(nota+2)%12] << ", "
         << notas[(nota+3)%12] << ", "
         << notas[(nota+5)%12] << ", "
         << notas[(nota+7)%12] << ", "
         << notas[(nota+8)%12] << ", "
         << notas[(nota+10)%12] << ", "
         << notas[(nota+12)%12] << endl;
}

#pragma endregion

#pragma region ACORDES

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

#pragma endregion

int main() {
    string notas[12] = {
        "A", "Bb", "B", "C",
        "C#", "D", "Eb", "E",
        "F", "F#", "G", "Ab"
    };

    int opt1=0, opt2=0;
    do {
        do {
            cout << " --------------------------\n";
            for (int i=0; i<4; i++) {
                cout << left;
                cout << "| " <<setw(2)<< i+1 << ". " <<setw(3)<< notas[i];
                cout << "| " <<setw(2)<< i+5 << ". " <<setw(3)<< notas[i+4];
                cout << "| " <<setw(2)<< i+9 << ". " <<setw(3)<< notas[i+8];
                cout << "|\n";
            }
            cout << " --------------------------\n"         
                 << "> Escolha uma nota (1-12): ";
            cin >> opt1;
        } while (opt1<=0 || opt1>12);
        int nota = opt1-1;

        do {
            cout << " -------------\n"
                 << "| 0 . Voltar  |\n"
                 << "| 1 . Escalas |\n"
                 << "| 2 . Acordes |\n"
                 << " -------------\n"
                 << "> Escolha uma opcao (0-2): ";
            cin >> opt2;

            if (opt2==1) {
                escalaMaior(notas, nota);
                escalaMenor(notas, nota);
            } 
            else if (opt2==2) {
                acordeMaior(notas, nota);
                acordeMenor(notas, nota);
            }
        } while (opt2!=0);
    } while (true);
    
    return 0;
}
