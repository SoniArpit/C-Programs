int *ptr, size;
    ptr = (int *)malloc(size * sizeof(int));
    printf("Enter size of the array: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("Value at %d is %d\n", i, ptr[i]);
    }

    return 0;