int i;
for (i = 0; i + 1 < N; i += 2)
{
    D[i] = A[i+1] * 2;
    
    for (j = 0; j < N; j++)
    {
        if (i > 0)
            A[j] = B[i] + C[i-1];
        else
            A[j] = B[i];
    }

    D[i+1] = A[i+2] * 2;

    for (j = 0; j < N; j++) 
    {
        if ((i+1) > 0)
            A[j] = B[i+1] + C[i];
        else
            A[j] = B[i+1];
    }
}

while (i < N)
{
    D[i] = A[i+1] * 2;

    for (j = 0; j < N; j++)
    {
        if (i > 0)
            A[j] = B[i] + C[i-1];
        else
            A[j] = B[i];
    }
    i++;
}
