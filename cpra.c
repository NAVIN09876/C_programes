#include <stdio.h>

void bitwise_operators(char symbol, int n, int m)
{
    switch(symbol)
    {
        case '&':
            printf("Bitwise AND: %d & %d = %d\n", n, m, n & m);
            break;

        case '|':
            printf("Bitwise OR: %d | %d = %d\n", n, m, n | m);
            break;

        case '^':
            printf("Bitwise XOR: %d ^ %d = %d\n", n, m, n ^ m);
            break;

        case '<':   // represents <<
            printf("Bitwise Left Shift: %d << %d = %d\n", n, m, n << m);
            break;

        case '>':   // represents >>
            printf("Bitwise Right Shift: %d >> %d = %d\n", n, m, n >> m);
            break;

        default:
            printf("Invalid operator\n");
    }
}

int main()
{
    int n, m;
    char sym;

    printf("Enter first number: ");
    scanf("%d", &n);

    printf("Enter second number: ");
    scanf("%d", &m);

    printf("Enter bitwise operator (& | ^ < >): ");
    scanf(" %c", &sym);

    bitwise_operators(sym, n, m);

