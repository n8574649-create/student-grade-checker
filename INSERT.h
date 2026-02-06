#define MAX 50
int count = 0;
struct Student
{
    int roll;
    char name[50];
    char branch[10];
    char gender;
    float marks[10];
    float average;
    char grade;
};
struct Student s[MAX];
float marks_detail(int total_sub, float marks[]);
char calculate_grade(float avg);

void add_Student()
{
    if (count == MAX)
    {
        printf("Storage is Full, Cannot add more students\n");
        return;
    }

    int total_sub;
    printf("Enter Roll Number:\n");
    scanf("%d", &s[count].roll);

    printf("Enter Name: ");
    scanf("%s", s[count].name);

    printf("Enter Name of the Branch(in short form): ");
    scanf("%s", s[count].branch);

    printf("Enter gender(F/M): ");
    scanf(" %c", &s[count].gender);

    printf("Enter the total number of subjects per person:");
    scanf("%d", &total_sub);

    s[count].average = marks_detail(total_sub, s[count].marks);
    s[count].grade = calculate_grade(s[count].average);
    count++;
    printf("Student information added successfully.\n");
}

float marks_detail(int total_sub, float marks[])
{
    float sum = 0;
    printf("Enter marks for each subject:\n");
    for (int i = 0; i < total_sub; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }
    return sum / total_sub;
}

char calculate_grade(float avg)
{
    if (avg >= 90 && avg <= 100)
    {
        printf("Congratulations! Excellent\n");
        return 'A';
    }
    else if (avg >= 80 && avg < 90)
    {
        printf("Congratulations! Distinction\n");
        return 'B';
    }
    else if (avg >= 70 && avg < 80)
    {
        printf("Congratulations! First class\n");
        return 'C';
    }
    else if (avg >= 60 && avg < 70)
    {
        printf("Congratulations! Second class\n");
        return 'D';
    }
    else
    {
        printf("Sorry, failed! Try next time\n");
        return 'F';
    }
}
