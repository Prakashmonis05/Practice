#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Frame
{
    int sequence_no;
    int packet_id;
    char source_ip[20];
    char destination_ip[20];
    int port_no;
    char message[100];
};

int main()
{
    struct Frame frames[100], key;
    int n, i, j, num, duplicate;

    srand(time(NULL));

    printf("Enter number of frames: ");
    scanf("%d", &n);

    /* Input frame details */
    for (i = 0; i < n; i++)
    {
        /* Generate unique 3-digit sequence number */
        do
        {
            duplicate = 0;
            num = rand() % 900 + 100;

            for (j = 0; j < i; j++)
            {
                if (frames[j].sequence_no == num)
                {
                    duplicate = 1;
                    break;
                }
            }

        } while (duplicate);

        frames[i].sequence_no = num;

        printf("\nFrame %d\n", i + 1);

        printf("Packet ID: ");
        scanf("%d", &frames[i].packet_id);

        printf("Source IP Address: ");
        scanf("%19s", frames[i].source_ip);

        printf("Destination IP Address: ");
        scanf("%19s", frames[i].destination_ip);

        printf("Port Number: ");
        scanf("%d", &frames[i].port_no);

        printf("Message: ");
        scanf(" %99[^\n]", frames[i].message);
    }

    /* Insertion Sort */
    for (i = 1; i < n; i++)
    {
        key = frames[i];
        j = i - 1;

        while (j >= 0 &&
               frames[j].sequence_no > key.sequence_no)
        {
            frames[j + 1] = frames[j];
            j--;
        }

        frames[j + 1] = key;
    }

    /* Display sorted frames */
    printf("\n\nSORTED FRAMES\n");

    printf("========================================================================================\n");
    printf("%-10s %-10s %-18s %-18s %-10s %-20s\n",
           "Sequence", "Packet ID", "Source IP",
           "Destination IP", "Port", "Message");
    printf("========================================================================================\n");

    for (i = 0; i < n; i++)
    {
        printf("%-10d %-10d %-18s %-18s %-10d %-20s\n",
               frames[i].sequence_no,
               frames[i].packet_id,
               frames[i].source_ip,
               frames[i].destination_ip,
               frames[i].port_no,
               frames[i].message);
    }

    printf("========================================================================================\n");

    return 0;
}