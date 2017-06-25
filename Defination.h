/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp; 
}
void rotateface(int arr[4])
{
	swap(&arr[0],&arr[1]);
	swap(&arr[2],&arr[3]);
	swap(&arr[0],&arr[2]); 
}

void rotate1(int array1[4],int array2[4],int array3[4],int array4[4],int array5[4],int array6[4])
{		
			rotateface(array1);
			swap(&array5[0],&array2[0]);
			swap(&array5[1],&array2[1]);
			swap(&array3[0],&array4[0]);
			swap(&array3[1],&array4[1]);
			swap(&array4[0],&array2[0]);
			swap(&array4[1],&array2[1]);
			printf("%d ",1); 
}
void rotate2(int array1[4],int array2[4],int array3[4],int array4[4],int array5[4],int array6[4])
{		
			rotateface(array2);
			swap(&array1[0],&array3[0]);
			swap(&array1[3],&array3[3]);
			swap(&array6[0],&array5[2]);
			swap(&array6[3],&array5[1]);
			swap(&array1[0],&array6[0]);
			swap(&array1[3],&array6[3]);
			printf("%d ",2);
}
void rotate3(int array1[4],int array2[4],int array3[4],int array4[4],int array5[4],int array6[4])
{
			rotateface(array3);
			swap(&array2[1],&array1[2]);
			swap(&array2[2],&array1[3]);
			swap(&array4[0],&array6[1]);
			swap(&array4[3],&array6[0]);
			swap(&array2[1],&array4[3]);
			swap(&array2[2],&array4[0]);
			printf("%d ",3);
}
void rotate4(int array1[4],int array2[4],int array3[4],int array4[4],int array5[4],int array6[4])
{			
			rotateface(array4);
			swap(&array3[1],&array1[1]);
			swap(&array3[2],&array1[2]);
			swap(&array5[3],&array6[1]);
			swap(&array5[0],&array6[2]);
			swap(&array3[1],&array5[3]);
			swap(&array3[2],&array5[0]); 
			printf("%d ",4);
}
void rotate5(int array1[4],int array2[4],int array3[4],int array4[4],int array5[4],int array6[4])
{
			rotateface(array5);
			swap(&array4[1],&array1[0]);
			swap(&array4[2],&array1[1]);
			swap(&array2[0],&array6[3]);
			swap(&array2[3],&array6[2]);
			swap(&array4[1],&array2[3]);
			swap(&array4[2],&array2[0]);  
			printf("%d ",5);
}
void rotate6(int array1[4],int array2[4],int array3[4],int array4[4],int array5[4],int array6[4])
{
			rotateface(array6);
			swap(&array3[3],&array4[3]);
			swap(&array3[2],&array4[2]);
			swap(&array5[2],&array2[2]);
			swap(&array5[3],&array2[3]);
			swap(&array3[2],&array5[2]);
			swap(&array3[3],&array5[3]);   
			printf("%d ",6);
}
void extract1(int array1[4],int array2[4],int array3[4],int array4[4],int array5[4],int array6[4]) 
{
	        rotate3(array1,array2,array3,array4,array5,array6);
	        rotate3(array1,array2,array3,array4,array5,array6);
	        rotate3(array1,array2,array3,array4,array5,array6);
	        rotate6(array1,array2,array3,array4,array5,array6);
	        rotate6(array1,array2,array3,array4,array5,array6);
	        rotate3(array1,array2,array3,array4,array5,array6);
}
void extract2(int array1[4],int array2[4],int array3[4],int array4[4],int array5[4],int array6[4]) 
{
	        rotate4(array1,array2,array3,array4,array5,array6);
	        rotate4(array1,array2,array3,array4,array5,array6);
	        rotate4(array1,array2,array3,array4,array5,array6);
	        rotate6(array1,array2,array3,array4,array5,array6);
	        rotate6(array1,array2,array3,array4,array5,array6);
	        rotate4(array1,array2,array3,array4,array5,array6);
}

void extract3(int array1[4],int array2[4],int array3[4],int array4[4],int array5[4],int array6[4]) 
{
	        rotate5(array1,array2,array3,array4,array5,array6);
	        rotate5(array1,array2,array3,array4,array5,array6);
	        rotate5(array1,array2,array3,array4,array5,array6);
	        rotate6(array1,array2,array3,array4,array5,array6);
	        rotate6(array1,array2,array3,array4,array5,array6);
	        rotate5(array1,array2,array3,array4,array5,array6);
}
void extract0(int array1[4],int array2[4],int array3[4],int array4[4],int array5[4],int array6[4]) 
{
	        rotate2(array1,array2,array3,array4,array5,array6);
	        rotate2(array1,array2,array3,array4,array5,array6);
	        rotate2(array1,array2,array3,array4,array5,array6);
	        rotate6(array1,array2,array3,array4,array5,array6);
	        rotate6(array1,array2,array3,array4,array5,array6);
	        rotate2(array1,array2,array3,array4,array5,array6);
}

void rotatecornu1(int array1[4],int array2[4],int array3[4],int array4[4],int array5[4],int array6[4])
{
			rotate3(array1,array2,array3,array4,array5,array6);
			rotate3(array1,array2,array3,array4,array5,array6);
			rotate3(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate5(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate3(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate5(array1,array2,array3,array4,array5,array6);
			rotate5(array1,array2,array3,array4,array5,array6);
			rotate5(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
}
void rotatecornu2(int array1[4],int array2[4],int array3[4],int array4[4],int array5[4],int array6[4])
{
			rotate4(array1,array2,array3,array4,array5,array6);
			rotate4(array1,array2,array3,array4,array5,array6);
			rotate4(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate2(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate4(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate2(array1,array2,array3,array4,array5,array6);
			rotate2(array1,array2,array3,array4,array5,array6);
			rotate2(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
}
void rotatecornu3(int array1[4],int array2[4],int array3[4],int array4[4],int array5[4],int array6[4])
{
			rotate5(array1,array2,array3,array4,array5,array6);
			rotate5(array1,array2,array3,array4,array5,array6);
			rotate5(array1,array2,array3,array4,array5,array6);
			rotate4(array1,array2,array3,array4,array5,array6);
			rotate3(array1,array2,array3,array4,array5,array6);
			rotate4(array1,array2,array3,array4,array5,array6);
			rotate4(array1,array2,array3,array4,array5,array6);
			rotate4(array1,array2,array3,array4,array5,array6);
			rotate5(array1,array2,array3,array4,array5,array6);
			rotate4(array1,array2,array3,array4,array5,array6);
			rotate3(array1,array2,array3,array4,array5,array6);
			rotate3(array1,array2,array3,array4,array5,array6);
			rotate3(array1,array2,array3,array4,array5,array6);
			rotate4(array1,array2,array3,array4,array5,array6);
			rotate4(array1,array2,array3,array4,array5,array6);
			rotate4(array1,array2,array3,array4,array5,array6);
}

