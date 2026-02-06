#include <stdio.h>
#include <stdlib.h>
#include "INSERT.h"
#include "DISPLAY.h"
#include "SEARCH.h"
#include "UPDATE.h"
#include "DELETE.h"

int main()
{
    int choice;
    printf("******************'Student Grade Checker Management System'******************\n");
    printf("                   1. Adding The Student Details                   \n");
    printf("                   2. Display All Students Details                   \n");
    printf("                   3. Search The Student Details                   \n");
    printf("                   4. Update The Marks                   \n");
    printf("                   5. Delete The Student Detail Record                   \n");
    printf("                   6. Exit form the Program                   \n");
    while (1)
    {
        printf("Enter your choice:\n");
        scanf("%d", &choice);
       switch (choice)
       {
            case 1: printf("1.Adding The Student Details\n");
                    add_Student();
                    break;
            case 2: printf("2.Display All Students Details\n");
                    display_Students();
                    break;
            case 3: printf("3. Search The Student Details\n");
                    search_Student();
                    break;
            case 4: printf("4.Update The Marks\n");
                    update_Marks();
                    break;
            case 5: printf("5.Delete The Student Detail Record\n");
                    delete_Student();
                    break;
            case 6: printf("-------Exit-------");
                    exit(0);
            default:
                 printf("Invalid choice\n");
        }
    }
    return 0;
}
