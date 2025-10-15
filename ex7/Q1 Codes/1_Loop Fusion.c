for (i = 0; i < N; i++)
{
    D[i] = A[i+1] * 2;
    
    for (j = 0; j < N; j++)
    {
        if (i > 0)
            A[j] = B[i] + C[i-1];
        else
            A[j] = B[i];
    }
}
