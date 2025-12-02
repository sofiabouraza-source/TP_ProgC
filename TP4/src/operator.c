#include "operator.h"

int calcul(int num1, int num2, char op) {
    switch (op) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return (num2 != 0) ? num1 / num2 : 0; /* éviter division par 0 */
        case '%': return (num2 != 0) ? num1 % num2 : 0; /* idem */
        case '&': return num1 & num2; /* ET bit à bit */
        case '|': return num1 | num2; /* OU bit à bit */
        case '~': return ~num1;       /* négation binaire */
        default:  return 0;           /* opérateur inconnu */
    }
}
