#include <stdio.h>
//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

int main() {
    char date[20];
    int d, m, y;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);

    if (m == 1)
        printf("%02d-Jan-%d\n", d, y);
    else if (m == 2)
        printf("%02d-Feb-%d\n", d, y);
    else if (m == 3)
        printf("%02d-Mar-%d\n", d, y);
    else if (m == 4)
        printf("%02d-Apr-%d\n", d, y);
    else if (m == 5)
        printf("%02d-May-%d\n", d, y);
    else if (m == 6)
        printf("%02d-Jun-%d\n", d, y);
    else if (m == 7)
        printf("%02d-Jul-%d\n", d, y);
    else if (m == 8)
        printf("%02d-Aug-%d\n", d, y);
    else if (m == 9)
        printf("%02d-Sep-%d\n", d, y);
    else if (m == 10)
        printf("%02d-Oct-%d\n", d, y);
    else if (m == 11)
        printf("%02d-Nov-%d\n", d, y);
    else if (m == 12)
        printf("%02d-Dec-%d\n", d, y);
    else
        printf("Invalid month!\n");

    return 0;
}