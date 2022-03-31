#include<stdio.h>
#include<string.h>
#include<add.item.h>
FILE *fp1
int additem()
{
	int s=1,i=0,id=0,p[30];
	while(s==1)
	{
		fp1=fopen("product.txt","r");
		while((fread(&ad,sizeof(ad),1,fp1))!='\0')
		{
			id=ad.itemid;
		}
		fclose(fp1);
		printf("\nEnter Product Name=");
		scanf("%s",ad.itemname);
		printf("\nEnter Product Price=");
		scanf("%f",&ad.itemprice);
		id++;
		p[i]=id;
		i++;
		ad.itemid=id;
		fp1=fopen("product.txt","a");
		fwrite(&ad,sizeof(ad),1,fp1);
		fclose(fp1);
		printf("\n==Your Product With id=%d is Successfully Added---",ad.itemid);
		printf("\n---Press '1' to add new Product or '0' to exit==");
		scanf("%d",&s);
		if(s==0)
		{
			break;
		}
	}
	fp1=fopen("product.txt","r");
	i=0;
	while((fread(&ad,sizeof(ad),1,fp1))!='\0')
	{
		if(p[i]==ad.itemid)
		{
			printf("\nProduct id=%d",ad.itemid);
			printf("\nProduct Name=%s",ad.itemname);
			printf("\nProduct Price=%f",ad.itemprice);
			printf("\n-------------------------------------------");
			i++;
		}
	}
	fclose(fp1);
	printf("\nPress '1' to go to MAIN MANU or '0' to exit");
	int q;
	scanf("%d",&q);
	return q;
}