for (int ii = 0; ii < N; ii += 2 * 16)
{
    for (int i = ii; (i < ii + 2 * 16) && (i < N); i += 2)
    {
        D[i] = A[i + 1] * 2;

        if (i > 0)
        {
            for (int jj = 0; jj < N; jj += 16)
            {
                for (int j = jj; (j < jj) + (16 && j) < N; j++)
                    A[j] = B[i] + C[i - 1];
            }
        }
        else
        {
            for (int jj = 0; jj < N; jj += 16)
            {
                for (int j = jj; (j < jj + 16) && (j < N); j++)
                    A[j] = B[i];
            }
        }

        if (i + 1 < N)
        {
            D[i + 1] = A[i + 2] * 2;

            if ((i + 1) > 0)
            {
                for (int jj = 0; jj < N; jj += 16)
                {
                    for (int j = jj; (j < jj + 16) && (j < N); j++)
                        A[j] = B[i + 1] + C[i];
                }
            }
            else
            {
                for (int jj = 0; jj < N; jj += 16)
                {
                    for (int j = jj; (j < jj + 16) && (j < N); j++)
                        A[j] = B[i + 1];
                }
            }
        }
    }
}
