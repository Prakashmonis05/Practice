#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct Frame
{
    int seq;
    char time[20];
    char message[50];
};

int main()
{
    struct Frame f[10], temp;
    int n, i, j, duplicate;

    printf("Enter number of frames:");
    scanf("%d", &n);

    srand(time(0));

    // Generate sequence number and take input
    for(i=0; i<n; i++)
    {
        do
        {
            duplicate = 0;
            f[i].seq = 10 + rand() % 90;

            for(j=0; j<i; j++)
            {
                if(f[i].seq == f[j].seq)
                {
                    duplicate = 1;
                    break;
                }
            }
        }
        while(duplicate);

        printf("\nFrame %d", i+1);
        printf("\nSequence number: %d", f[i].seq);

        printf("\nEnter time:");
        scanf("%s", f[i].time);

        printf("Enter message:");
        scanf("%s", f[i].message);
    }

    // Display before sorting
    printf("\n\n--- Frames before sorting ---\n\n");
    printf("Seq No\tTime\tMessage\n");

    for(i=0; i<n; i++)
    {
        printf("%d\t%s\t%s\n",
               f[i].seq, f[i].time, f[i].message);
    }

    // Bubble sort based on sequence number
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(f[j].seq > f[j+1].seq)
            {
                temp = f[j];
                f[j] = f[j+1];
                f[j+1] = temp;
            }
        }
    }

    // Display after sorting
    printf("\n\n--- Frames after sorting ---\n\n");
    printf("Seq No\tTime\tMessage\n");

    for(i=0; i<n; i++)
    {
        printf("%d\t%s\t%s\n",
               f[i].seq, f[i].time, f[i].message);
    }

    return 0;
}