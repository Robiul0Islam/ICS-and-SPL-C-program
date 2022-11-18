
MD Mahmudul Hassan
MD Mahmudul Hassan Mahi
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// structure for books
struct books
{
    char name[20];
    char author[10];
    int id;
}book;

// structure for students
struct students
{
    char name[10];
    int id;
}student;
FILE *file;
FILE *sfile;

// void printMessageCenter(const char* message)
// {
//     int len =0;
//     int pos = 0;
//     //calculate how many space need to print
//     len = (78 - strlen(message))/2;
//     printf("\t\t\t");
//     for(pos =0 ; pos < len ; pos++)
//     {
//         //print space
//         printf(" ");
//     }
//     //print message
//     printf("%s",message);
// }
void headMessage(const char *message)
{
    system("cls");
    printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t############      Library management System Project in C       ############");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    //printMessageCenter(message);
    printf("\n\t\t\t----------------------------------------------------------------------------");
}
void welcomeMessage()
{
    headMessage("www.aticleworld.com");
    printf("\n\n\n\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                 LIBRARY                   =");
    printf("\n\t\t\t        =               MANAGEMENT                  =");
    printf("\n\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
}
void viewbook()
{
    printf("Available Books\n");


    file = fopen("library.txt", "r");
    printf("Book ID\tBook Name\tAuthor Name\n");
    while(fread(&book,sizeof(book),1,file)){
        printf("%d\t%s\t\t%s\n",book.id,book.name,book.author);
     }
 //   while(!feof(file))
 //   {
 //       fscanf(file,"%d\t%s\t%s\n",&book.id,book.name,book.author);
 //       printf("%d\t%s\t%s\n",book.id,book.name,book.author);
  //  }

    fclose(file);
    getchar();
}

void addbook()
{
    file = fopen("library.txt","a");
    printf("Book ID: ");
    scanf("%d",&book.id);
    printf("\nBook name: ");
    fflush(stdin);
    gets(book.name);
    printf("\nAuthor name: ");
    fflush(stdin);
    gets(book.author);
    fwrite(&book,sizeof(book),1,file);
    fclose(file);

 //   fprintf(file,"%d\t%s\t%s\n",book.id,book.name,book.author);
   // fclose(file);

}
FILE *ifile;
void issuebook(){
    int f=0,id;

    printf("Enter Book id to issue: ");
    scanf("%d", &id);

    //Check if we have book of given id
    file = fopen("library.txt", "r");

    while(fread(&book, sizeof(book), 1, file) == 1){
        if(id == book.id){
            f=1;
            break;
        }
    }

    if(f==0){
        printf("No book found with this id\n");
        printf("Please try again...\n\n");
        return;
    }

    ifile = fopen("issue.txt", "ab");

    printf("Enter Student Name: ");
    fflush(stdin);
    gets(student.name);

    printf("Enter Book Name: ");
    fflush(stdin);
    gets(book.name);


    printf("Book Issued Successfully\n\n");

    fwrite(&student, sizeof(student), 1, ifile);
     fwrite(&book, sizeof(book), 1, ifile);
    fclose(ifile);
}

void issuedbook(){

    printf("\nBook Issue List");

    printf("\nStudent\tBook\t");

    ifile = fopen("issue.txt", "rb");
     while(fread(&book, sizeof(book), 1, ifile) == 1 && fread(&student, sizeof(student), 1, ifile) == 1 ){
        printf("\n%s\t%s", student.name, book.name);
    }
    fclose(ifile);
}
void deletebook(){
    int id, f=0;
    printf("Enter Book id to remove: ");
    scanf("%d", &id);

    FILE *ft;

    file = fopen("library.txt", "rb");
    ft = fopen("temp.txt", "wb");

    while(fread(&book, sizeof(book), 1, file) == 1){
        if(id == book.id){
            f=1;
        }else{
            fwrite(&book, sizeof(book), 1, ft);
        }
    }

    if(f==1){
        printf("\n\nDeleted Successfully.");
    }else{
        printf("\n\nRecord Not Found !");
    }

    fclose(file);
    fclose(ft);

    remove("library.txt");
    rename("temp.txt", "library.txt");

}
void searchbook()
{
   file = fopen("library.txt","r");
    int id;
    printf("\nEnter the book ID: ");
    scanf("%d",&id);

      while(fread(&book,sizeof(book),1,file))
      {
          if(id==student.id)
          {
              fscanf(file,"%d\t%s\t%s\n",&book.id,book.name,book.author);
              printf("%d\t%s\t%s\n",book.id,book.name,book.author);
              fclose(file);
          }

      }

}
void addstudent()
{
    sfile = fopen("student.txt","a");
    printf("Student ID: ");
    scanf("%d",&student.id);
    fflush(stdin);
    printf("Student Name: ");
    scanf("%s",student.name);

    fwrite(&student,sizeof(student),1,sfile);
// fprintf(file,"%s\t%s\n",student.id,student.name,book.author);
    fclose(sfile);
}
void searchstudent()
{
    sfile = fopen("student.txt","r");
    int id;
    printf("\nEnter the Student ID: ");
    scanf("%d",&id);

      while(fread(&student,sizeof(student),1,sfile))
      {
          if(id==student.id)
          {
              printf("ID\tName\n");
              fscanf(sfile,"%d\t%s\n",&student.id,student.name);
              printf("%d\t%s\n",student.id,student.name);
              fclose(sfile);
          }

      }


}
void deletestudent()
{
     int id, f=0;
    printf("Enter Student id to remove: ");
    scanf("%d", &id);

    FILE *ft2;

    sfile = fopen("student.txt", "rb");
    ft2 = fopen("temp2.txt", "wb");

    while(fread(&student, sizeof(student), 1, sfile) == 1){
        if(id == student.id){
            f=1;
        }else{
            fwrite(&student, sizeof(student), 1, ft2);
        }
    }

    if(f==1){
        printf("\n\nDeleted Successfully.");
    }else{
        printf("\n\nRecord Not Found !");
    }

    fclose(sfile);
    fclose(ft2);

    remove("student.txt");
    rename("temp2.txt", "student.txt");
}
void viewstudent()
{
    printf("Registered Student\n");


    sfile = fopen("Student.txt", "r");
    printf("ID\tName\n");
    while(fread(&student,sizeof(student),1,sfile)){
        printf("%d\t%s\n",student.id,student.name);
     }

    fclose(sfile);
}
void menu()
{
    int choice = 0;
    do
    {
        headMessage("MAIN MENU");
        printf("\n\n\n\t\t\t1.Add Books");
        printf("\n\t\t\t2.Search Books");
        printf("\n\t\t\t3.View Books");
        printf("\n\t\t\t4.Delete Book");
        printf("\n\t\t\t5.Issue Book");
        printf("\n\t\t\t6.Issued Book");
        printf("\n\t\t\t7.View Students");
        printf("\n\t\t\t8.Add Students");
        printf("\n\t\t\t9.Search Student");
        printf("\n\t\t\t10.Delete Students");
        printf("\n\t\t\t0.Exit");
        printf("\n\n\n\t\t\tEnter choice => ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            addbook();
            break;
        case 2:
            searchbook();
            break;
        case 3:
            viewbook();
            break;
        case 4:
            deletebook();
            break;
        case 5:
            issuebook;
            break;
        case 6:
            issuedbook();
            break;
        case 7:
            viewstudent();
            break;
        case 8:
            addstudent();
            break;
        case 9:
            searchstudent();
            break;
        case 10:
            deletestudent();
            break;
        case 0:
            printf("\n\n\n\t\t\t\tThank you!!!\n\n\n\n\n");
            exit(1);
            break;
        default:
            printf("\n\n\n\t\t\tINVALID INPUT!!! Try again...");
        }                                            //Switch Ended
    }
    while(choice!=0);                                        //Loop Ended
}
void main()
{
    welcomeMessage();
    menu();
}
