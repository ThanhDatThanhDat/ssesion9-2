#include<stdio.h> 

int main(){
	//
	int arr[100]; 
	//
	int num1;
	printf("Nhap vao so phan tu muon nhap :");
	scanf("%d", &num1);
	if (num1 <= 0 || num1 > 100) {
        printf("So phan tu khong hop le.\n"); 
        return 0; 
    } else {
    	printf("Tiep Tuc.\n"); 
	} 
	//
	printf("Nhap cac phan tu vao mang .\n");
	int i;
	for(i=0;i<num1;i++){
	    printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
	}
	//
	int num2, num3; 
	printf("Nhap gia tri muon sua : ");
	scanf("%d", &num2);
	printf("Nhap vi tri can sua : ");
	scanf("%d", &num3); 
	if(num3 < 0 || num3 > num1){
		printf("Vi tri khong hop le.");
		return 0; 
	}
	//
    arr[num3-1] = num2;
    
    printf("Mang sau khi sua phan tu:\n");
    for (i = 0; i < num1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 
    printf(".Ket Thuc.");
	
    
    
    return 0;
}
