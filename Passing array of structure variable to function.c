#include<stdio.h>

struct student

{

    int rollNo;

    char name[50];

    float fees;

    char course[20];

};

void insert(struct student [],int);

void display(struct student [],int);

int main()

{

    struct student st[20];

    int n;

    printf("Enter students: ");

    scanf("%d",&n);

    insert(st,n);

    display(st,n);

    return 0;

}

void insert(struct student st[],int n)

{

    int i;

    for(i=0;i<n;i++)

    {

        printf("\nEnter RollNo, Name, Fees & Course: Student %d\n",i+1);

        scanf("%d %s %f %s",&st[i].rollNo,&st[i].name,&st[i].fees,&st[i].course);

    }

}

void display(struct student st[],int n)

{

    int i;

    for(i=0;i<n;i++)

    {

        printf("\nStudent %d\n",i+1);

        printf("%d %s %.2f %s",st[i].rollNo,st[i].name,st[i].fees,st[i].course);

    }

}

