
void merge(struct Student students[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0;
    struct Student B[(high - low) + 1];
    while (i <= mid && j <= high)
    {
        if (students[i].rollNo > students[j].rollNo)
        {
            B[k] = students[j];
            j++;
        }
        else
        {
            B[k] = students[i];
            i++;
        }
        k++;
    }
    if (i > mid)
        for (int L = j; L <= high; L++)
            B[k++] = students[L];
    else
        for (int L = i; L <= mid; L++)
            B[k++] = students[L];

    int ok = 0;
    for (int i = low; i <= high; i++)
    {
        students[i] = B[ok];
        ok++;
    }
}
