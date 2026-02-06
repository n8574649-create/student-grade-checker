void update_Marks()
{
    int roll, total_sub;
    printf("Enter Roll Number to Update Marks:\n");
    scanf("%d", &roll);
    printf("Enter the total number of subjects per person:\n");
    scanf("%d", &total_sub);
    for (int i = 0; i < count; i++)
    {
        if (s[i].roll == roll)
        {
            printf("Enter the New Marks:\n");

            for (int j = 0; j < total_sub; j++)
            {
                printf("Subject %d: ", j + 1);
                scanf("%f", &s[i].marks[j]);
            }
            s[i].average = marks_detail(total_sub, s[i].marks);
            s[i].grade   = calculate_grade(s[i].average);
            printf("Marks are Updated Successfully\n");
            return;
        }
    }
    printf("Student Not Found\n");
}


