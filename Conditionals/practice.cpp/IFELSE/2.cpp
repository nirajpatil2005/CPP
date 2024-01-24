#include <stdio.h>

int main() {
    unsigned int phy, chem, maths, itp, eng;

    printf("Enter your Physics marks: ");
    scanf("%u", &phy);
    while(phy > 100) {
        printf("Invalid input for Physics marks. Enter again: ");
        scanf("%u", &phy);
    }

    printf("Enter your Chemistry marks: ");
    scanf("%u", &chem);
    while (chem > 100) {
        printf("Invalid input for Chemistry marks. Enter again: ");
        scanf("%u", &chem);
    }

    printf("Enter your Maths marks: ");
    scanf("%u", &maths);
    while(maths > 100) {
        printf("Invalid input for Maths marks. Enter again: ");
        scanf("%u", &maths);
    }

    printf("Enter your ITP marks: ");
    scanf("%u", &itp);
    while(itp > 100) {
        printf("Invalid input for ITP marks. Enter again: ");
        scanf("%u", &itp);
    }

    printf("Enter your English marks: ");
    scanf("%u", &eng);
    while(eng > 100) {
        printf("Invalid input for English marks. Enter again: ");
        scanf("%u", &eng);
    }

    float total = phy + chem + itp + eng + maths;
    float percent = (total / 500.0) * 100;
    printf("Your percentage is %f \n", percent);

    if (percent < 45) {
        printf("Fail\n");
    } else if (percent >= 45 && percent < 60) {
        printf("Second class\n");
    } else if (percent >= 60 && percent < 75) {
        printf("First class\n");
    } else if (percent >= 75 && percent <= 100) {
        printf("Gold medalist\n");
    }

    return 0;
}
