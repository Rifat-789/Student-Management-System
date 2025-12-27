#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
    char name[50];
    int id;
    float cgpa;
}Student;

void loadData(Student students[], int *count);
void printTitle(int padding, char title[]);
void printMenu(int choice);
void addStudent(Student students[], int *count);
void viewAllStudent(Student students[], int count);
void saveData(Student students[], int count);


int main(){

    char title[] = "STUDENT MANAGEMENT SYSTEM";
    int padding = (40 - strlen(title)) / 2;

    

    int choice = 0;
    Student students[100];
    int count = 0;
    loadData(students, &count);

    do{
        #ifdef _WIN32                       // Clears the interface each time menu loop repeats
            system("cls");
        #else
            system("clear");
        #endif


        printTitle(padding, title);

        printMenu(choice);
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            #ifdef _WIN32                      
                system("cls");
            #else
                system("clear");
            #endif

            addStudent(students, &count);
            break;

        case 2:
            #ifdef _WIN32                       
                system("cls");
            #else
                system("clear");
            #endif

            viewAllStudent(students, count);
            break;

        case 3:
            #ifdef _WIN32                       
                system("cls");
            #else
                system("clear");
            #endif

            
            break;
        
        case 4:
            #ifdef _WIN32                       
                system("cls");
            #else
                system("clear");
            #endif

            
            break;

        case 5:
            #ifdef _WIN32                       
                system("cls");
            #else
                system("clear");
            #endif

            
            break;

        case 6:
            #ifdef _WIN32                       
                system("cls");
            #else
                system("clear");
            #endif

            saveData(students, count);
            printf("Saved successfully");
            break;
        
        default:
            break;
        }

        printf("\nPress Enter to continue");                        // This section let's you see the prompt messages befor refresh
        getchar();                          // Cleans leftover data
        getchar();                          // Waits for input

    } while (choice != 6);
    



    return 0;
}


void loadData(Student students[], int *count){                      // We use pointer when the function needs to change value
    FILE *pFile = fopen("students.dat", "rb");

    if (pFile == NULL){
        *count = 0;
        return;
    }

    fread(count, sizeof(int), 1, pFile);
    fread(students, sizeof(Student), *count, pFile);

    fclose(pFile);
    
}

void printTitle(int padding, char title[]){
    printf("========================================\n");                   // The title

    for (int i = 0; i < padding; i++) {
        printf(" ");
    }
    printf("%s\n", title);

    printf("========================================\n");                   // End of the title

}

void printMenu(int choice){
    printf("1. Add Student\n");
    printf("2. View All Students\n");
    printf("3. Search Student by ID\n");
    printf("4. Update Student\n");
    printf("5. Delete Student\n");
    printf("6. Save & Exit\n");
    printf("\n");
    printf("Enter your choice: ");
}

void addStudent(Student students[], int *count){
    printf("Enter ID: ");
    
    if (scanf("%d", &students[*count].id) != 1){
        printf("Invalid input! ID must be a number");
        while (getchar() != '\n');
        return;
    }

    getchar();                  // Clear new line

    printf("Enter Name: ");
    fgets(students[*count].name, sizeof(students[*count].name), stdin);                 // takes char values with space
    students[*count].name[strcspn(students[*count].name, "\n")] = '\0';                 // stops at new line and replaces it with null terminator

    printf("Enter CGPA: ");
    if(scanf("%f", &students[*count].cgpa) != 1){
        printf("Invalid number! CGPA must be a number");
        while(getchar() != '\n');
        return;
    }

    (*count)++;

    printf("\nStudent added successfully!\n");
}

void viewAllStudent(Student students[], int count){
    if (count == 0){
        printf("No Students Found!");
        return;
    }
    
    printf("\nTotal Students: %d\n", count);
    printf("=========================\n");

    for (int i = 0; i < count; i++){
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("CGPA: %.2f\n", students[i].cgpa);
    }
}

int searchById(){

}

void updateStudent(){

}

void deletStudent(){

}

void saveData(Student students[], int count){
    FILE *pFile = fopen("students.dat", "wb");

    if (pFile == NULL){
        printf("Error saving data!");
        return;
    }

    fwrite(&count, sizeof(int), 1, pFile);
    fwrite(students, sizeof(Student), count, pFile);

    fclose(pFile);
}