#include <stdio.h>
#include <string.h>
#include "prob1.h"

int main() {

    struct ProductData product1;
    product1.ID = 432;
    strncpy(product1.Name, "peeking", sizeof(product1.Name) - 1);
    product1.Name[sizeof(product1.Name) - 1] = '\0';
    product1.Price = 576;
    product1.Quantity = 7;

    printf("Original Product Data:\n");
    printf("ID: %d\nName: %s\nPrice: %d\nQuantity: %d\n\n",
           product1.ID, product1.Name, product1.Price, product1.Quantity);

    product1.ID = 123;
    strncpy(product1.Name, "Alpha", sizeof(product1.Name) - 1);
    product1.Name[sizeof(product1.Name) - 1] = '\0';
    product1.Price = 789;
    product1.Quantity = 10;

    printf("Modified Product Data:\n");
    printf("ID: %d\nName: %s\nPrice: %d\nQuantity: %d\n\n",
           product1.ID, product1.Name, product1.Price, product1.Quantity);

    struct CustomerData customer1;
    customer1.ID = 492;
    strncpy(customer1.Name, "beijing", sizeof(customer1.Name) - 1);
    customer1.Name[sizeof(customer1.Name) - 1] = '\0';
    strncpy(customer1.Address, "peeking", sizeof(customer1.Address) - 1);
    customer1.Address[sizeof(customer1.Address) - 1] = '\0';
    strncpy(customer1.Email, "tintin@gmail.com", sizeof(customer1.Email) - 1);
    customer1.Email[sizeof(customer1.Email) - 1] = '\0';

    printf("Original Customer Data:\n");
    printf("ID: %d\nName: %s\nAddress: %s\nEmail: %s\n\n",
           customer1.ID, customer1.Name, customer1.Address, customer1.Email);

    customer1.ID = 333;
    strncpy(customer1.Name, "tokyo", sizeof(customer1.Name) - 1);
    customer1.Name[sizeof(customer1.Name) - 1] = '\0';
    strncpy(customer1.Address, "lingbing", sizeof(customer1.Address) - 1);
    customer1.Address[sizeof(customer1.Address) - 1] = '\0';
    strncpy(customer1.Email, "snowey@gmail.com", sizeof(customer1.Email) - 1);
    customer1.Email[sizeof(customer1.Email) - 1] = '\0';

    printf("Modified Customer Data:\n");
    printf("ID: %d\nName: %s\nAddress: %s\nEmail: %s\n\n",
           customer1.ID, customer1.Name, customer1.Address, customer1.Email);

    struct SalesData salesData1;
    salesData1.CustomerID = 111;
    salesData1.ProductID = 647;
    salesData1.SaleAmount = 99;

    printf("Original Sales Data:\n");
    printf("CustomerID: %d\nProductID: %d\nSaleAmount: %d\n\n",
           salesData1.CustomerID, salesData1.ProductID, salesData1.SaleAmount);

    salesData1.CustomerID = 989;
    salesData1.ProductID = 688;
    salesData1.SaleAmount = 899;

    printf("Modified Sales Data:\n");
    printf("CustomerID: %d\nProductID: %d\nSaleAmount: %d\n\n",
           salesData1.CustomerID, salesData1.ProductID, salesData1.SaleAmount);

    return 0;
}
