#include <stdio.h>

int main()
{
   int n,i,panjang[100],lebar[100],tinggi[100],volume[100];
   printf ("--------------------------------------------\n");
   printf ("         Kotak Melalui Terowongan\n");
   printf ("--------------------------------------------\n");
   printf ("Masukkan jumlah kotak : ");
   scanf ("%d",&n);

   if (n<=0)
   printf ("\nError!!! Masukan bilang asli untuk jumlah kotak");
    else if (n>100)
    printf ("\nError!!! Maksimal jumlah kotak adalah 100");
    else
    {
        printf ("\nMasukan panjang, lebar, dan tinggi kotak (Pisahkan dengan spasi)\n");
        for (i=1;i<=n;i++)
        {
            printf ("kotak ke-%d : ",i);
            scanf ("%d %d %D",&panjang[i-1],&lebar[i-1],&tinggi[i-1]);
            if (panjang[i-1]<1)
                printf ("Error!!! Panjang kotak ke-%d tidak memenuhi syarat\n",i);
                else if (panjang[i-1]>100)
                printf ("Error!!! Panjang kotak ke-%d tidak memenuhi syarat\n",i);
                    else if (lebar[i-1]<1)
                    printf ("Error!!! Lebar kotak ke-%d tidak memenuhi syarat\n",i);
                        else if (lebar[i-1]>100)
                        printf ("Error!!! Lebar kotak ke-%d tidak memenuhi syarat",i);
                            else if (tinggi[i-1]<1)
                            printf ("Error!!! Tinggi kotak ke-%d tidak memenuhi syarat",i);
                                else if (tinggi[i-1]>100)
                                printf ("Error!!! Lebar kotak ke-%d tidak memenuhi syarat",i);
                                else 
                                volume[i-1]=panjang[i-1]*lebar[i-1]*tinggi[i-1];
        }
        for (i=1;i<=n;i++)
        {
            if (volume[i-1]==0)
            printf ("\nKotak ke-%d tidak memenuhi syarat",i);
                else if (tinggi[i-1]<41)
                printf ("\nVolume kotak ke-%d adalah : %d",i,volume[i-1]);
                    else
                    printf ("\nKotak ke-%d tidak dapat melalui terowongan",i);
        }
    }    
        
    return 0;
}