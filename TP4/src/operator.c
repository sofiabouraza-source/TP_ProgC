#include "operator.h"

int calcul(int num1, int num2, char op) 
{
    int result = 0;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else
                result = 0; /* éviter division par zero */
            break;
        case '%':
            if (num2 != 0)
                result = num1 % num2;
            else
                result = 0; /* éviter modulo par zero */
            break;
        case '&':
            result = num1 & num2; /* ET bit à bit */
            break;
        case '|':
            result = num1 | num2; /* OU bit à bit */
            break;
        case '~':
            result = ~num1; /* negation binaire (ignore num2) */
            break;
        default:
            result = 0; /* operateur inconnu */
    }

    return result;
}

