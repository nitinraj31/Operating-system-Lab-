#include<stdio.h>
#include<conio.h>
# define max 25
void main()
{
    int frag[max],b[max],f[max],i,j,nb,nf,temp,highest;
    int t=0;
    static int bf[max],ff[max];
    clrscr();
    printf("\n\tMemory Management Scheme - Worst Fit");
    printf("\n Enter the number of Blocks :");
    scanf("%d",&nb);
    printf("Enter the number of files :");
    scanf("%d",&nf);
    printf("\n Enter the size of the blocks -\n");
    for(i=1;i<=nb;i++)
    {
        printf("Block %d:",i);
        scanf("%d",&b[i]);
    }
    printf("Enter the size of the files :- \n");
    for(i=1;i<=nf;i++)
    {
        printf("File %d:",i);
        scanf("%d",&f[i]);

    }
    for (i=1;i<=nf; i++)
    {
        for ( j= 1; j<=nb; j++)
        {
            if (bf[j]!=1)
            {
                temp=b[j]-f[i];
                if (temp>=0)
                {
                    if((highest<temp))
                    {
                        highest=temp;
                        ff[i]=j;
                    }
                }
            }
            
        }
        frag[i]=highest;
        bf[ff[i]]=1;
        highest=0;
    }
    printf("\n\n File_no \t Block_no \t Fragment");
    printf("\n----------------------------------------");
    for(i=1;i<=nf;i++)
    {
        printf("\n %d \t\t %d \t\t %d",i,ff[i],frag[i]);
    }
    printf("\n----------------------------------------");
    getch();
}
