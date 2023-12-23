#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    char message[] = "Chu chay doc theo man hinh...";
    int messageLength = strlen(message);
    int screenWidth, screenHeight;
    int xPos = 0, yPos = 0;

    // L?y k�ch thu?c m�n h�nh
    screenWidth = GetSystemMetrics(SM_CXSCREEN);
    screenHeight = GetSystemMetrics(SM_CYSCREEN);

    // ?n con tr?
    CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);

    // Ch?y chuong tr�nh cho d?n khi nh?n ph�m
    while (!_kbhit()) {
        // X�a n?i dung tru?c d�
        system("cls");

        // In n?i dung
        gotoxy(xPos, yPos);
        printf("%s", message);

        // Di chuy?n v? tr� xu?ng du?i
        yPos++;

        // Ki?m tra xem d� di d?n cu?i m�n h�nh chua
        if (yPos > screenHeight - 1) {
            // �ua v? d?u m�n h�nh
            yPos = 0;
        }

        // Ng? d? gi?m t?c d? ch?y
        Sleep(100);
    }

    // Hi?n th? th�ng b�o khi k?t th�c
    system("cls");
    printf("Chuong trinh ket thuc khi ban nhan mot phim.");

    return 0;
}

