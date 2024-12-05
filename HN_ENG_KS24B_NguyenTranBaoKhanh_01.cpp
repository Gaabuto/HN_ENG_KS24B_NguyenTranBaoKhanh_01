#include <stdio.h>

int main(){
	int a,i,j,choose,ar[a];
	do{
		
		
	printf("\n\tMENU\n1.Nhap so phan tu va gia tri cho mang\n2.In ra gia tri cac phan tu trong mang theo dang\n3.Dem so luong hoan hao co trong mang\n5.Them phan tu vao vi tri dau tien trong mang\n6.Xoa phan tu o 1 vi tri\n7.Sap xep mang theo vi tri giam dan\n11.Ket thuc");
	printf("\nMoi chon chuc nang: ");
	scanf("%d",&choose);
	
	
	
	switch(choose){
		
		
		case 1:
		printf("Moi nhap so phan tu co trong mang: ");
	    scanf("%d",&a);
		for( i = 0; i < a; i ++){
		printf("Moi ban nhap gia tri cho phan tu thu %d: ",i + 1);
		scanf("%d",&ar[i]);
	}
	break;
	
	
		case 2:
			printf("Cac gia tri phan tu la:");
			for ( i = 0;i < a; i ++){
				printf("arr[%d]=%d  ",i,ar[i]);
}break;
		case 3:
			int count =0,perfectNum,sum = 0;
			for(i = 1; i < a/2; i ++){
				if ( a % i == 0){
					sum += i;
				}
			}
			return 
			(sum== a&&a!= 0);
}
			for ( i = 0; i < a; i ++){
				if (perfectNum(ar[i])){
					count ++;
				}
			}
			printf("so luong so hoan hao trong so la %d", count);
			break;


									
  case 6:
			int delLength;
	printf("moi ban nhap vi tri can xoa trong bang: ");
   scanf("%d", &delLength);
   if (delLength < 0 || delLength >= a + 1){
   	printf("vi tri k hop le!!");
   }else{
   	for( i = delLength - 1; i < a - 1; i ++){
   		ar[i] = ar[i + 1];
	   } a --;
   }break;	   
				   
				   
				   
		case 7:
	for(i=0;i<a;i++){
		int max=i,x;
		for(j=i;j<a;j++){
			if(ar[j]>ar[max]){
				max = j;
			}
		}
		if(max!=i){
			x = ar[max];
			ar[max]=ar[i];
			ar[i]=x ;
		}
	}
	for(i=0;i<a;i++){
		printf("%d \t",ar[i]);

}
			
			
			
			  
	
	default:
	 printf("k hop le, moi nhap lai");		  
}
}while(choose != 11);
printf("ban da bam ket thuc, chuc quy khach vui ve");
	
	
	
	
	
	
	
	

	return 0;
}
