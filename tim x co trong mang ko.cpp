// tim x co trong mang ko
#include<stdio.h>
int main(){
	int n,i;
	int a[1000];
	printf("Nhap so phan tu mang: ");
	scanf("%d",&n);
	printf("Nhap gia tri cua mang\n");
	for(i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	int x,kiemtra;
	printf("Nhap x: ",x);
	scanf("%d",&x);
	
	for(i=0;i<n;i++){
		if(x==a[i]){
		    printf("%d co nam trong mang",x);
	    	return 0;
		}
	
	}
			printf("%d khong nam trong mang",x);

	}


