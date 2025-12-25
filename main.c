#include<stdio.h>
#include<string.h>

typedef struct{
    char name[50];
    int id;
    float cgpa;
}Student;

void printTitle(int padding, char title[]);
void addStudent(Student students[], int *count);


int main(){

    int width = 40;
    char title[] = "STUDENT MAMAGEMENT SYSTEM";
    int padding = (width - strlen(title)) / 2;

    

    int choice = 0;
    Student students[100];
    int count = 0;
    do{
        printTitle(padding, title);

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
            addStudent(students, &count);
            break;
        
        default:
            break;
        }
    } while (choice != 6);
    



    return 0;
}


void printTitle(int padding, char title[]){
    printf("========================================\n");                   // The title

    for (int i = 0; i < padding; i++) {
        printf(" ");
    }
    printf("%s\n", title);

    printf("========================================\n");                   // End of the title

}

void addStudent(Student students[], int *count){
    printf("Enter ID: ");
    scanf("%d", &students[*count].id);
    getchar();

    printf("Enter Name: ");
    fgets(students[*count].name, sizeof(students[*count].name), stdin);                 // takes char values with space
    students[*count].name[strcspn(students[*count].name, "\n")] = '\0';                 // stops at new line and replaces it with null terminator

    printf("Enter CGPA: ");
    scanf("%f", &students[*count].cgpa);

    printf("\n");
}

void viewAllStudent(){

}

int searchById(){

}

void updateStudent(){

}

void deletStudent(){

}