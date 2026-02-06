void search_Student()
{
    int roll;
    printf("Enter Roll Number of the student to be Searched:\n");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++)
    {
        if (s[i].roll == roll)
        {
            printf("Student Is Found:\n");
            printf("Roll number\t\tName\t\tBranch\t\tGender\t\tAverage\t\tGrade\t \n");
            printf("%d\t%s\t\t%s\t\t%c\t\t%f\t%c\n", s[i].roll,s[i].name,s[i].branch,s[i].gender,s[i].average,s[i].grade);
            return;
        }
    }
    printf("\nStudent Not Found!\n");
    return;
}
