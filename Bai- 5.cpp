#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu mang : ");
	scanf("%d",&n);
	int ary[n],i,j;
	printf("Nhap cac phan tu cua mang : ");
	for(i=0;i<n;i++){
		scanf("%d",&ary[i]);
	for(j=0;j<i;j++){		
		while(ary[i]==ary[j]){
		printf("Nhap lai phan tu trung nhau :");
		scanf("%d",&ary[i]);
		}
	}	
	}
}
