#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <Windows.h>
#include <CommCtrl.h>
#include <iomanip>

using namespace std;

HWND hwnd;
HWND hwndLogowanie;
HWND hwndRejestracji;
MSG Komunikat;

HWND UtworzOknoRejestracji(HINSTANCE, const char*, const char*);

string currentUser;
bool zalogowano = false;

int szerokoscOkna = 500;
int wysokoscOkna = 500;

// Oblicz pozycję przycisków na środku okna
int pozycjaX = (szerokoscOkna - 100) / 2; // 100 to szerokość przycisku
int przyciskOdstepY = 40; // Odstęp między przyciskami
int startowaPozycjaY = (wysokoscOkna - 30 - 3 * przyciskOdstepY) / 2; // 30 to wysokość przycisku

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    WNDCLASSEX wc;
}