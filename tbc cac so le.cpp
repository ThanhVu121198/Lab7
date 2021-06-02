// tinh trung binh cong cac so le trong mang n
#include<stdio.h>
int main(){
	int n,i;
	int a[1000];
	double tbc;
	printf("Nhap so luong phan tu mang: ");
	scanf("%d",&n);
	printf("Nhap gia tri cua mang:\n");
	for(i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	int tong=0;
	int dem=0;
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			tong=tong+a[i];
			dem++;
		}
		tbc=double(tong/dem);
	}
	printf("Trung binh cong cac so le trong mang la:%lf",tbc);
	return 0;
}
