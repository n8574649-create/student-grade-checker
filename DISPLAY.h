void display_Students()
{
    if (count == 0)
    {
        printf("No students found\n");
        return;
    }
    printf("Student Records are:\n");
    printf("\nRoll No\t\tName\t\tBranch\t\tGender\tAverage\t\tGrade\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d\t\t%s\t\t%s\t\t%c\t%f\t%c\n", s[i].roll,s[i].name,s[i].branch,s[i].gender,s[i].average,s[i].grade);
    }
    return;
}
