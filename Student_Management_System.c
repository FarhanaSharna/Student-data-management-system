#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct node
{
    int id,batch;
    long long int p_number,std_fathers_p_number,std_mothers_p_number;
    char std_name[50],department[20],running_sem[5];
    char std_fathers_name[50], std_mothers_name[50];
    char present_address[200], permanent_address[200];
    char std_blood_group[7];
    char gender;
    struct node *next;
    struct node *previous;


}*start = NULL, *end = NULL;
FILE *file;





//creates student record

void create_students_record()
{
    struct node *new_node, *current;
    int i, number_of_node;

    printf("\n\n\n\n\n\n\t\t\tEnter Number of Student's for Record: ");
    scanf("%d", &number_of_node);


    for(i = 1; i <= number_of_node; i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));

        if(new_node == NULL)
        {
            printf("\nMemory Does Not Created.\n");
            exit(0);
        }
        else
        {
            file = fopen("Student's Record.txt","a+");
            if(file == NULL)
            {
                printf("File does not create.\n");
            }
            else
            {
                printf("\n\n\t\t\tStudent's Details\n");
                fprintf(file,"\n\n\t\t\tStudent's Details\n");
                printf("\t\t_________________________________\n");
                fprintf(file,"\t\t_________________________________\n");

                printf("\n\n\tEnter Student Name: ");
                fflush(stdin);
                gets(new_node->std_name);
                fprintf(file,"\n\tStudent Name: %s", new_node->std_name);

                printf("\n\tID: ");
                scanf("%d", &new_node->id);
                fprintf(file,"\n\tID: %d",new_node->id);

                printf("\n\tDepartment: ");
                fflush(stdin);
                gets(new_node->department);
                fprintf(file,"\n\tDepartment: %s", new_node->department);

                printf("\n\tRunning semester: ");
                fflush(stdin);
                gets(new_node->running_sem);
                fprintf(file,"\n\tRunning semester: %s", new_node->running_sem);




                printf("\n\tStudent Blood Group: ");
                fflush(stdin);
                gets(new_node->std_blood_group);
                fprintf(file,"\n\tStudent Blood Group: %s", new_node->std_blood_group);


                printf("\n\n\n\t\t\tStudent's Contract Information\n");
                fprintf(file,"\n\n\n\t\t\tStudent's Contract Information\n");
                printf("\t\t_____________________________________________");
                fprintf(file,"\t\t_____________________________________________");

                printf("\n\n\tStudent's Phone Number: ");
                scanf("%lld", &new_node->p_number);
                fprintf(file,"\n\n\tStudent's Phone Number: %lld",new_node->p_number);
                printf("\n\tFather's Name: ");
                fflush(stdin);
                gets(new_node->std_fathers_name);
                fprintf(file,"\n\tFather's Name: %s",new_node->std_fathers_name);

                printf("\n\tMother's Name: ");
                fflush(stdin);
                gets(new_node->std_mothers_name);
                fprintf(file,"\n\tMother's Name: %s",new_node->std_mothers_name);



                printf("\n\tFather's Phone Number: ");
                scanf("%lld", &new_node->std_fathers_p_number);
                fprintf(file,"\n\tFather's Phone Number: %lld",new_node->std_fathers_p_number);

                printf("\n\tMother's Phone Number: ");
                scanf("%lld", &new_node->std_mothers_p_number);
                fprintf(file,"\n\tMother's Phone Number: %lld",new_node->std_mothers_p_number);


                printf("\n\n\tPresent Address: ");
                fflush(stdin);
                gets(new_node->present_address);
                fprintf(file,"\n\tPresent Address: %s",new_node->present_address);

                printf("\n\tPermanent Address: ");
                fflush(stdin);
                gets(new_node->permanent_address);
                fprintf(file,"\n\tPermanent Address: %s",new_node->permanent_address);

                fclose(file);
                fopen("Student's Record.txt","a+");
            }
            new_node->next = NULL;
            new_node->previous = NULL;

            if(start == NULL && end == NULL)
            {
                start = new_node;
                end = new_node;
                current = new_node;
            }
            else
            {
                current->next = new_node;
                new_node->previous = current;
                current = new_node;
                end = new_node;
            }
        }
    }
}


void add_student_record()
{
    struct node *new_node, *current;
    new_node = (struct node *)malloc(sizeof(struct node));

    if(new_node == NULL)
    {
        printf("\nMemory Does Not Created.\n");
        exit(0);
    }
    else
    {
        file = fopen("Student's Record.txt","a+");
        if(file == NULL)
        {
            printf("File does not create.\n");
        }
        else
        {
            printf("\n\n\t\t\tStudent's Details\n");
            fprintf(file,"\n\n\t\t\tStudent's Details\n");
            printf("\t\t_________________________________\n");
            fprintf(file,"\t\t_________________________________\n");

            printf("\n\n\tEnter Student Name: ");
            fflush(stdin);
            gets(new_node->std_name);
            fprintf(file,"\n\tStudent Name: %s", new_node->std_name);

            printf("\n\tID: ");
            scanf("%d", &new_node->id);
            fprintf(file,"\n\tID: %d",new_node->id);

            printf("\n\tDepartment: ");
            fflush(stdin);
            gets(new_node->department);
            fprintf(file,"\n\tDepartment: %s", new_node->department);

            printf("\n\tRunning semester: ");
            fflush(stdin);
            gets(new_node->running_sem);
            fprintf(file,"\n\tRunning semester: %s", new_node->running_sem);




            printf("\n\tStudent Blood Group: ");
            fflush(stdin);
            gets(new_node->std_blood_group);
            fprintf(file,"\n\tStudent Blood Group: %s", new_node->std_blood_group);


            printf("\n\n\n\t\t\tStudent's Contract Information\n");
            fprintf(file,"\n\n\n\t\t\tStudent's Contract Information\n");
            printf("\t\t_____________________________________________");
            fprintf(file,"\t\t_____________________________________________");

            printf("\n\n\tStudent's Phone Number: ");
            scanf("%lld", &new_node->p_number);
            fprintf(file,"\n\n\tStudent's Phone Number: %lld",new_node->p_number);
            printf("\n\tFather's Name: ");
            fflush(stdin);
            gets(new_node->std_fathers_name);
            fprintf(file,"\n\tFather's Name: %s",new_node->std_fathers_name);

            printf("\n\tMother's Name: ");
            fflush(stdin);
            gets(new_node->std_mothers_name);
            fprintf(file,"\n\tMother's Name: %s",new_node->std_mothers_name);
            printf("\n\tFather's Phone Number: ");
            scanf("%lld", &new_node->std_fathers_p_number);
            fprintf(file,"\n\tFather's Phone Number: %lld",new_node->std_fathers_p_number);

            printf("\n\tMother's Phone Number: ");
            scanf("%lld", &new_node->std_mothers_p_number);
            fprintf(file,"\n\tMother's Phone Number: %lld",new_node->std_mothers_p_number);


            printf("\n\n\tPresent Address: ");
            fflush(stdin);
            gets(new_node->present_address);
            fprintf(file,"\n\tPresent Address: %s",new_node->present_address);

            printf("\n\tPermanent Address: ");
            fflush(stdin);
            gets(new_node->permanent_address);
            fprintf(file,"\n\tPermanent Address: %s",new_node->permanent_address);

            fclose(file);
            fopen("Student's Record.txt","a+");
        }
    }

    new_node->next = NULL;
    new_node->previous = NULL;

    current = start;
    new_node->next = current;
    current->previous = new_node;
    start = new_node;
}

//display

void display_students_record()
{
    struct node *current;

    current = end;

    if(current == NULL)
    {
        printf("\n\n\n\n\n\n\n\t\t\tThere Are No Record In The List.\n");
    }
    else
    {
        {
            while(current != NULL)
            {
                printf("\n\t\t\tStudent's Details\n");
                printf("\t\t_________________________________");

                printf("\n\tStudent Name: %s", current->std_name);

                printf("\n\tID: %d", current->id);

                printf("\n\tSemester: %s", current->running_sem);

                printf("\n\tDepartment: %s", current->department);

                printf("\n\tStudent Blood Group: %s", current->std_blood_group);



                printf("\n\n\n\t\t\tStudent's Contract Information\n");
                printf("\t\t_____________________________________________");

                printf("\n\tStudent's Phone Number: %lld", current->p_number);

                printf("\n\tFather's Name: %s", current->std_fathers_name);

                printf("\n\tMothers Name: %s", current->std_mothers_name);

                printf("\n\tFather's Phone Number: %lld", current->std_fathers_p_number);

                printf("\n\tMother's Phone Number: %lld", current->std_mothers_p_number);

                printf("\n\tPresent Address: %s", current->present_address);

                printf("\n\tPermanent Address: %s", current->permanent_address);
                current = current->previous;
                printf("\n");
            }
        }
    }
}

//search student


int pos(student_id)
{
    int position = 0;
    struct node *current;

    current = start;

    while(current != NULL)
    {
        position++;
        if(student_id == current->id)
        {
            return position;
        }
        current = current->next;
    }
    return -1;
}

int search_students(student_id)
{
    int position = 0;
    struct node *current;

    current = start;

    while(current != NULL)
    {
        position++;
        if(student_id == current->id)
        {
            printf("\n\t\t\tStudent's Details\n");
            printf("\t\t_________________________________");

            printf("\n\tStudent Name: %s", current->std_name);

            printf("\n\tID: %d", current->id);

            printf("\n\tSemester: %s", current->running_sem);

            printf("\n\tDepartment: %s", current->department);

            printf("\n\tStudent Blood Group: %s", current->std_blood_group);



            printf("\n\n\n\t\t\tStudent's Contract Information\n");
            printf("\t\t_____________________________________________");

            printf("\n\tStudent's Phone Number: %lld", current->p_number);

            printf("\n\tFather's Name: %s", current->std_fathers_name);

            printf("\n\tMothers Name: %s", current->std_mothers_name);

            printf("\n\tFather's Phone Number: %lld", current->std_fathers_p_number);

            printf("\n\tMother's Phone Number: %lld", current->std_mothers_p_number);

            printf("\n\tPresent Address: %s", current->present_address);

            printf("\n\tPermanent Address: %s", current->permanent_address);

            printf("\n\n");
            getch();


            return position;
        }
        current = current->next;
    }
    return -1;
}

//delete data


void delete_students()
{
    struct node *current, *temp1, *temp2;
    int i, delete_id, position;

    printf("Enter ID for delete: ");
    scanf("%d", &delete_id);
    position = pos(delete_id);

    current = start;
    for(i = 1; i <= (position - 1); i++)
    {
        current = current->next;
    }
    if(current == start && current->previous == NULL)
    {
        current = current->next;
        start = current;
        current->previous = NULL;
        printf("\nFirst ID Delete Successfully.\n");
    }
    else if(current->next == NULL && current == end)
    {
        current = current->previous;
        end = current;
        current->next = NULL;
        printf("\nLast ID Delete Successfully.\n");
    }
    else
    {
        temp2 = current->next;
        temp1 = current->previous;
        temp1->next = temp2;
        temp2->previous = temp1;
        printf("\nDelete Successfully.\n");
    }
}

void login()
{
    char email[30],pass[30],permission;

    printf("\n\t\t\t\t       --------------------------------------------------     ");
    printf("\n\t\t\t\t       ==               Admin Login Panel              ==      ");
    printf("\n\t\t\t\t       --------------------------------------------------");
    printf("\t\t\t\t\t\n\n");

    printf("\t\t\t\t\t\tEnter Email\t:   ");
    scanf("%s",email);
    printf("\n\n\t\t\t\t\t\tEnter Password\t:   ");
    scanf("%s",pass);

    if(strcmp(email,"sharnaislamfarhana@gmail.com")==0 && strcmp(pass,"Sharna123")==0)
    {
        system("CLS");

    }
    else
    {
        printf("\n\t\t\t\t\t---------------------------------------------\n\n");
        printf("\t\t\t\t\t\t!!! Invalid Email / Password !!!\n\n");
        printf("\t\t\t\t\t\t\tTry Again ? y / n ");
        permission = getch();

        if(permission == 'Y' || permission == 'y')
        {
            system("CLS");
            login();
        }
        else
            exit(1);
    }
}


void title()

{
    system("color B");
    login();
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t|____________________|\n\t\t\t\t\t|                    |\n\t\t\t\t\t|\tWelcome      |\n\t\t\t\t\t|____________________|\n\t\t\t\t\t|\t\t     |\n\n\n");
    printf("Press any key to continue...");
    getch();

}

int main()
{

    system("color B");
    system("");
    title();

    int choice, position, student_id, insert_choice, display_choice;

    while(1)
    {
        printf("\n\t\t\t\t\tStudent's Record\n");
        printf("\t\t\t_______________________________________________");
        printf("\n\n");

        printf("------------------------------------------------------------------------------------------");
        printf("\n\n");
        printf("\t\t\t\t1. Create Record.\n");
        printf("\t\t\t\t2. Add Record.\n");
        printf("\t\t\t\t3. Display Record.\n");
        printf("\t\t\t\t4. Search Record.\n");
        printf("\t\t\t\t5. Delete Record.\n");
        printf("\t\t\t\t6. Modify Record.\n");
        printf("\t\t\t\t7. Exit.\n\n");
        printf("------------------------------------------------------------------------------------------");

        printf("\n\t\t\tPlease Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");
        switch(choice)
        {

        case 1:
            create_students_record();

            printf("\n\n\n\n\n\n\n\t\t\tRecord Created Successfully.");
            getch();
            break;


        case 2:

            add_student_record();

            printf("\n\n\n\n\n\n\n\t\t\tRecord Added successfully.");
            getch();

            break;

        case 3:

            display_students_record();
            break;


        case 4:
            printf("\n\n\n\n\n\n\t\t\tEnter ID: ");
            scanf("%d",&student_id);


            position = search_students(student_id);
            if(position == -1)
            {
                printf("\n\n\n\n\n\n\t\t\tThis ID is not in the Record.\n");
                getch();

            }
            else
            {
                printf("\n\n\n\n\n\n\t\t\tThe Position of this Record is at Number %d.\n", position);
                getch();

            }
            break;

        case 5:
            delete_students();
            getch();

            break;

        case 6:
            exit(1);
            getch();
            break;

        default:
            printf("\n\n\n\n\n\n\n\t\t\t\tInvalid input!!!");
            printf("\n\t\t\tPlease Enter Correct Key to Access.");
            printf("\n\t\t\t\tOr Enter 7 to Exit.\n");
            getch();


        }

    }
    return 0;
}


