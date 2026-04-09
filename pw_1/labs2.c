#include <stdio.h>

int main(void) {
    char firstLetter = 'V'; // Перша літера мого імені Валерія

    printf("Символ:%c\n", firstLetter); //виводить символ як літеру.
    printf("ASCII-код:%d\n", firstLetter); //виводить той самий символ, але як його числовий код у таблиці ASCII.
    printf("Наступний символ:%c\n", firstLetter + 1); //оскільки char це число, ми просто додаємо одиницю, щоб отримати наступний символ у черзі.

    return 0;
}