#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter the weight (kg): ");
    scanf("%f", &weight);

    printf("Enter the height (m): ");
    scanf("%f", &height);

    bmi = weight / (height * height);
    printf("Your BMI: %.2f\n", bmi);

    if (bmi < 15.0f)
        printf("Starvation\n");
    else if (bmi >= 15.1f && bmi <= 17.5f)
        printf("Anorexic\n");
    else if (bmi >= 17.6f && bmi <= 18.5f)
        printf("Underweight\n");
    else if (bmi >= 18.6f && bmi <= 24.9f)
        printf("Ideal\n");
    else if (bmi >= 25.0f && bmi <= 25.9f)
        printf("Overweight\n");
    else
        printf("Obese\n");

    return 0;
}
