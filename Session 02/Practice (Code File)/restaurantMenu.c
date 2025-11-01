#include <stdio.h>

int main() {
    int choice;
    float total = 0;

    // Welcome Message
    printf("=====================================\n");
    printf("     Welcome to The Food Lounge!\n");
    printf("=====================================\n\n");

    // Display Menu
    printf("Here’s our Menu:\n");
    printf("1. Burger          - $5.50\n");
    printf("2. Pizza           - $8.00\n");
    printf("3. Pasta           - $6.25\n");
    printf("4. Sandwich        - $4.75\n");
    printf("5. Fries           - $3.00\n\n");

    // Take Order
    printf("Please select a dish (1-5): ");
    scanf("%d", &choice);

    // Process Choice
    switch(choice) {
        case 1:
            printf("\nYou selected Burger.\n");
            total = 5.50;
            break;
        case 2:
            printf("\nYou selected Pizza.\n");
            total = 8.00;
            break;
        case 3:
            printf("\nYou selected Pasta.\n");
            total = 6.25;
            break;
        case 4:
            printf("\nYou selected Sandwich.\n");
            total = 4.75;
            break;
        case 5:
            printf("\nYou selected Fries.\n");
            total = 3.00;
            break;
        default:
            printf("\nInvalid choice! Please restart and choose from 1 to 5.\n");
            return 0;
    }

    // Confirm Order
    printf("\nClick '1' to confirm your order: ");
    int confirm;
    scanf("%d", &confirm);

    if (confirm == 1) {
        printf("\n=====================================\n");
        printf("          Order Summary\n");
        printf("=====================================\n");
        printf("Dish Price: $%.2f\n", total);
        printf("Tax (5%%):   $%.2f\n", total * 0.05);
        printf("-------------------------------------\n");
        printf("Total Bill: $%.2f\n", total + (total * 0.05));
        printf("=====================================\n");
        printf(" Thank you for dining with us!\n");
        printf(" Have a great day!\n");
        printf("=====================================\n");
    } else {
        printf("\nOrder canceled. Have a nice day!\n");
    }

    return 0;
}
