for (i = 0; i < N; i += 2)
{
    D[i] = A[i+1] * 2;
    
    for (j = 0; j < N; j++)
    {
        if (i > 0)
            A[j] = B[i] + C[i-1];
        else
            A[j] = B[i];
    }

    if (i + 1 < N)
    {
        D[i+1] = A[i+2] * 2;

        for (j = 0; j < N; j++)
        {
            if (i + 1 > 0)
                A[j] = B[i+1] + C[i];
            else
                A[j] = B[i+1];
        }
    }
}