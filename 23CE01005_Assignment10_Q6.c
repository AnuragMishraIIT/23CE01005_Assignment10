/*  
    LAB ASSIGNMENT: 10
    Question number: 6

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 04/04/2024
*/

#include <stdio.h>

enum Flag
{
    CONTROL=1,DATA=2
};

struct ControlMsg
{
    int opcode;
    int statuscode;
};

union Packet
{
    struct ControlMsg controlmsg;
    char datapayload[200];
};

struct DataPacket
{
    enum Flag flag; //Type: Control or Data 
    union Packet packet;
};

int main()
{
    int n,choice;
    printf("Enter the number of Data Packets required:\n");
    scanf("%d",&n);
    struct DataPacket DP[n];
    for(int i=0;i<n;i++)
    {
        printf("-------------------------------------------------------------\nInput for Data Packet: %d\n\n",i+1);

        printf("Enter your choice:\n-->Enter 1 for CONTROL message\n-->Enter 2 for DATA PAYLOAD\n");
        scanf("%d",&choice);
        getchar();

        switch (choice)
        {
            case CONTROL:
            DP[i].flag=CONTROL;
            printf("Enter opcode:\n");
            scanf("%d",&DP[i].packet.controlmsg.opcode);
            printf("Enter statuscode:\n");
            scanf("%d",&DP[i].packet.controlmsg.statuscode);
            break;

            case DATA:
            DP[i].flag=DATA;
            printf("Enter the Data Payload:\n");
            fgets(DP[i].packet.datapayload,200,stdin);
            break;

            default:
            printf("Invalid input. Program termiinating\n");
            return 1;

        }
    }

    printf("\n\n----------SHOWING THE CONTENTS OF THE DATA PACKETS:----------\n\n");
    for(int i=0;i<n;i++)
    {
        printf("-------------------------------------------------------------\nContents of Data Packet: %d\n\n",i+1);

        switch(DP[i].flag)
        {
            case CONTROL:
            printf("Opcode: %d\n",DP[i].packet.controlmsg.opcode);
            printf("Status code: %d\n",DP[i].packet.controlmsg.statuscode);
            break;

            case DATA:
            printf("Data Payload: %s\n",DP[i].packet.datapayload);
            break;
        }
    }
    return 0;
}