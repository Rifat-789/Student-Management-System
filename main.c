#include<stdio.h>
#include<string.h>

typedef struct{
    char name[50];
    int id;
    float cgpa;
}Student;


int main(){

    int width = 40;
    char title[] = "STUDENT MAMAGEMENT SYSTEM";
    int padding = (width - strlen(title)) / 2;

    printf("========================================\n");                   // The title

    for (int i = 0; i < padding; i++) {
        printf(" ");
    }
    printf("%s\n", title);

    printf("========================================\n");                   // End of the title


    int choice = 0;
    do{
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            
            break;
        
        default:
            break;
        }
    } while (choice != 6);
    



    return 0;
}