#include <stdio.h>
#include <stdlib.h>

    typedef struct {
    char item_code;
    int quantity;
    float price_per_item;
    float commission;
    } Item;
    float calculateCommission(char item, int quantity, float price_per_item) {
    float sales = quantity * price_per_item;
    float commission = 0;
    if (item == 'A' || item == 'D' || item == 'E' || item == 'F') {
    if (sales > 250) commission = sales * 0.1;
    else if (sales > 100) commission = sales * 0.05;
    } else if (item == 'B') {
    if (sales > 350) commission = sales * 0.2;
    else if (sales > 50) commission = sales * 0.15;
    } else if (item == 'C') {
    if (sales > 350) commission = sales * 0.1;
    else if (sales > 200) commission = sales * 0.25;
    }
    return commission;
    }
    void inputItems(Item *items, int n) {
    for (int i = 0; i < n; i++) {
    printf("\nEnter details for item %d:\n", i + 1);
    printf("\nEnter the item code (A-F or any other character for other items): ");
    scanf(" %c", &items[i].item_code);
    printf("\nEnter the quantity sold: ");
    scanf("%d", &items[i].quantity);
    printf("\nEnter the price per item (UGX): ");
    scanf("%f", &items[i].price_per_item);
    items[i].commission = calculateCommission(items[i].item_code, items[i].quantity, items[i].price_per_item);
    }
    }
    void displayItems(const Item *items, int n) {
    printf("\n+-----------+----------+----------------+---------------+-----------------+\n");
    printf("| Item Code | Quantity | Price per Item | Total Sales   | Commission      |\n");
    printf("+-----------+----------+----------------+---------------+-----------------+\n");
    for (int i = 0; i < n; i++) {
    printf("| %-9c | %-8d |UGX %-11.2f |UGX %-11.2f|UGX %-11.2f  |\n",
    items[i].item_code, items[i].quantity, items[i].price_per_item,
    items[i].quantity * items[i].price_per_item, items[i].commission);
    }
    printf("+-----------+----------+----------------+---------------+-----------------+\n");
    }
    int main() {
    int n;
    do {
    printf("\nEnter the number of items: ");
    scanf("%d", &n);
    if (n <= 0) {
    printf("\nPlease provide a valid number that exceeds 0.\n");
    }
    } while (n <= 0);
    Item *items = (Item *)malloc(n * sizeof(Item));
    if (items == NULL) {
    printf("\nMemory allocation failed. Exiting program.\n");
    return 1;
    }
    inputItems(items, n);
    displayItems(items, n);
    free(items);
    return 0;
}
%
