void delete_Student()
{
    int roll;
    printf("\nEnter Roll Number to Delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++)
    {
        if (s[i].roll == roll)
            {
            for (int j = i; j < count - 1; j++)
            {
                s[j] = s[j + 1];
            }
            count--;
            printf("Student details are Deleted Successfully\n");
            return;
        }
    }
    printf("Student Not Found\n");
    return;
}

