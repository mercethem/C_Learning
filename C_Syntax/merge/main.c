
#define     SIZE    20

int main()
{
    int a[SIZE];
    int b[SIZE];
    int c[SIZE];

    int idx_a = 0;
    int idx_b = 0;
    for(int i = 0; i < SIZE; ++i)
    {
        if(idx_a == SIZE)
            c[i] = b[idx_b++];
        else if(idx_b == SIZE)
            c[i] = a[idx_a++];
        else if(a[idx_a] < b[idx_b])
            c[i] = a[idx_a++];
        else
            c[i] = b[idx_b++];
    }

    return 0;
}
