#include <stdio.h>

void main ()
{
	int x, y, cari, data [15], jumlah = 0;
	printf ("=======================================\n");
	printf ("Selamat Datan di Sequential Searching!\n"); 
	printf ("=======================================\n\n");
	printf ("Mau berapa data yang ingin di input : ");
	scanf  ("%d",&y);
	printf ("\n");
	printf ("Masukan %d Integer(s)! : \n",y);
	
	for (x=0 ; x <y ; x++)
		scanf ("%d",&data[x]);
		
	printf ("Angka yang ingin dicari : ");
	scanf ("%d",&cari);
	
	for (x=0 ; x <y ; x++)
	{
		if (data[x]==cari) 
		{
			printf ("Angka %d ditemukan dan disimpan pada index [%d]\n", cari,x+1);
			jumlah++; 
		}
	}
		if (jumlah == 0)
			printf ("Angka %d TIDAK DITEMUKAN!", cari);
		else 
			printf ("Angka %d DITEMUKAN dan sebanyak %d kali dalam array", cari, jumlah);
}	
	
