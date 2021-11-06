#include <stdio.h>
nvoid swapbub(int *a, int*b){
	int temp;
	temp = *a;
	*a= * b;
	*b = temp;
}
void swap(int x, int y){
	int temp = x;
	x= y;
	y= temp;
}
struct array{
	int b;
	int day;
	int s;
	int i;
	
}m[1000];
void menu1(){
	   int ch;
	   while(1){
	   	printf("\t\t menu \n");
	   	printf("======================\n");
	   	printf("1. nhap vao day\n");
	   	printf("2. sap xep\n");
	   	printf("3. tim kiem\n");
	   	printf("4. exit\n");
	   	printf("chon: ");
	   	scanf("%d",&ch);
	   	switch(ch){
	   		case 1: nhap();
	   		   break;	
			case 2: menu2();
				break;
			case 3: search();
				break;
			case 4: exit(0);
			   break;
		   }
	   	
	   	
	   }
}
int main(){
	menu1();
	return 0;
	
}
void nhap(){
    int i,n;
    printf("nhap vao so luong phan tu: ");
    scanf("%d",&n);
    for (i=0;i < n;i++ ){
    	printf("nhap vao mang ");
    	printf("a[%d] = ",i);
    	scanf("%d", &m[i].day); 	
	}
}
void menu2(){
	int ch1;
	while(1){
		printf("\t\tmenu \n");
		printf("1. bubble sort\n");
		printf("2. selection sort\n");
		printf("3. insertion sort\n");
		printf("4. exit\n");
		printf("chon: ");
		scanf("%d",&ch1);
		switch(ch1){
			case 1: bubble();
	   		   break;	
			case 2: selection();
				break;
			case 3: insertion();
				break;
			case 4: exit(0);
			   break;	
		}
		 
}
void  bubble(array, n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;i< n -i -1;j++){
			if(m[j].day < m[j+1].b){
				swapbub(&m[j].day,& m[j-1].day);
		}			
		}
	}
	for(i = 0; i < n;i++){
  	printf("%d", m[i].day);
  	printf("\n");
}
	
}
/*void insertion(){
	int i,j,n;
	for(i=1;i < n;i++){
		temp = m[i].day;
		j = i -1;
	}while (temp< m[j].i && j> 0){
		m[j + 1 ].day= m[j].day;
		j = j -1;
	}
	m[j+1].day= temp;		
 
   for(i = 0; i <n;i++){
  	printf("%d", m[i].day);
  	printf("\n");
  }
} */
void selection(){
	
	for(i= 0; i< n - 1;i++){
		min = 1;
		swap(m[min].day,m[i].day);
	  	
	}
	for(i=0;i<id;i++){
		printf("%d",m[i].day);
		printf("\n");
	}
} */
void search(n){
	int i,x;
	printf("nhap so can tim: ");
	scanf("%d",&x);
	for (i= 0 ; i<n;i++){
		if(m[i].day == x){return i;
		}
		return -1;
	}
    int result;
    if(result != -1){
    	printf("%d xuat hien chi so %d",x,result);
    	
	}else {
		printf("%d khong co trong mang",x);
	}
}








