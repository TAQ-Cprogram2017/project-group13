#include <iostream>
#include "Defination.h"
#define Max 50


int main(void) 
{
	
	int i=0;
	int j=0; 
	int array1[4]={1,1,1,1};
	int array2[4]={2,2,2,2};
	int array3[4]={3,3,3,3};
	int array4[4]={4,4,4,4};
	int array5[4]={5,5,5,5};
	int array6[4]={6,6,6,6};
	printf("    ");
	int a;
	printf("How many operations would you do?(No larger than %d)\n", Max);
	int num, operation[Max + 1];
	scanf("%d", &num);
	printf("Please input your %d Steps:\n", num);
	for(int i = 0; i < num; i++){
		printf("Step%d:", i + 1);
		scanf("%d", &operation[i]);
		while(operation[i] >= 7 || operation[i] <= 0){
			printf("Please input again, from 1 ~ 6\n");
			printf("Step%d:", i + 1);
			scanf("%d", &operation[i]);
		}
	}
	operation[num] = 7;
	for(int k = 0; k <= num; k++)
	{
	printf("\n");
	a = operation[k];
	switch (a){
        case 1:
		{
			rotate1(array1,array2,array3,array4,array5,array6);
		}  break;
        case 2:
		{
			rotate2(array1,array2,array3,array4,array5,array6); 
		}
			break;
        case 3:
		{
			rotate3(array1,array2,array3,array4,array5,array6);
		};  break;
        case 4:
		{
			rotate4(array1,array2,array3,array4,array5,array6);	
		};  break;
        case 5:
		{
			rotate5(array1,array2,array3,array4,array5,array6);
		};  break;
        case 6:
        {
			rotate6(array1,array2,array3,array4,array5,array6);
		};  break;
		case 7:
		{
		int arrayy1[24]={array1[0],array1[1],array1[2],array1[3],array2[0],array2[1],array3[0],array3[1],array4[0],array4[1],array5[0],array5[1],array2[2],array2[3],array3[2],array3[3],array4[2],array4[3],
        array5[2],array5[3],array6[0],array6[1],array6[2],array6[3]};
		for(i=0;arrayy1[i]!=1;i++);
			switch (i){ 
						case 0:;  break;
						case 1:
						    {
						        rotate1(array1,array2,array3,array4,array5,array6);
						        rotate1(array1,array2,array3,array4,array5,array6);
					            rotate1(array1,array2,array3,array4,array5,array6);
						    }  
						    ;break;
						case 2:
							{
								rotate1(array1,array2,array3,array4,array5,array6);
						        rotate1(array1,array2,array3,array4,array5,array6);
							}
							;break;
						case 3:
							{
								rotate1(array1,array2,array3,array4,array5,array6);
							}	
							;break;
						case 4:
							{
								rotate5(array1,array2,array3,array4,array5,array6);
						        rotate5(array1,array2,array3,array4,array5,array6);
					            rotate5(array1,array2,array3,array4,array5,array6);
								rotate1(array1,array2,array3,array4,array5,array6);
						        rotate1(array1,array2,array3,array4,array5,array6);
					            rotate1(array1,array2,array3,array4,array5,array6);
							};break;
						case 5:
							{
								rotate3(array1,array2,array3,array4,array5,array6);
						        rotate1(array1,array2,array3,array4,array5,array6);
					            rotate1(array1,array2,array3,array4,array5,array6);	
							};break;
						case 6:
					    	{
					    		rotate2(array1,array2,array3,array4,array5,array6);
					    		rotate2(array1,array2,array3,array4,array5,array6);
					    		rotate2(array1,array2,array3,array4,array5,array6);
							};break;
						case 7:	
							{
								rotate4(array1,array2,array3,array4,array5,array6);
						        rotate1(array1,array2,array3,array4,array5,array6);
					            rotate1(array1,array2,array3,array4,array5,array6);
					            rotate1(array1,array2,array3,array4,array5,array6);
							};break;
						case 8:
							{
								rotate3(array1,array2,array3,array4,array5,array6);
								rotate3(array1,array2,array3,array4,array5,array6);
								rotate3(array1,array2,array3,array4,array5,array6);
								rotate1(array1,array2,array3,array4,array5,array6);
							};break;
						case 9:
							{
								rotate5(array1,array2,array3,array4,array5,array6);
							};break;
						case 10:
							{
								rotate4(array1,array2,array3,array4,array5,array6);
								rotate4(array1,array2,array3,array4,array5,array6);
								rotate4(array1,array2,array3,array4,array5,array6);
								rotate1(array1,array2,array3,array4,array5,array6);
								rotate1(array1,array2,array3,array4,array5,array6);
							};break;
						case 11:
							{
								rotate2(array1,array2,array3,array4,array5,array6);
								rotate1(array1,array2,array3,array4,array5,array6);
							};break;
						case 12:
							{
								rotate3(array1,array2,array3,array4,array5,array6);
								rotate1(array1,array2,array3,array4,array5,array6);
							};break;
						case 13:
							{
								rotate5(array1,array2,array3,array4,array5,array6);
								rotate5(array1,array2,array3,array4,array5,array6);
								rotate5(array1,array2,array3,array4,array5,array6);
							};break;
						case 15:
							{
								rotate2(array1,array2,array3,array4,array5,array6);
								rotate2(array1,array2,array3,array4,array5,array6);
								rotate2(array1,array2,array3,array4,array5,array6);
								rotate1(array1,array2,array3,array4,array5,array6);	
							};break;
						case 14:
							{
								rotate4(array1,array2,array3,array4,array5,array6);
								rotate1(array1,array2,array3,array4,array5,array6);
								rotate1(array1,array2,array3,array4,array5,array6);
							};break;
						case 16:
							{
								rotate5(array1,array2,array3,array4,array5,array6);
								rotate1(array1,array2,array3,array4,array5,array6);
								rotate1(array1,array2,array3,array4,array5,array6);
								rotate1(array1,array2,array3,array4,array5,array6);
							}break;
						case 17:
							{
								rotate3(array1,array2,array3,array4,array5,array6);
								rotate3(array1,array2,array3,array4,array5,array6);
								rotate3(array1,array2,array3,array4,array5,array6);
								rotate1(array1,array2,array3,array4,array5,array6);
								rotate1(array1,array2,array3,array4,array5,array6);
							};break;
						case 18:
							{
								rotate2(array1,array2,array3,array4,array5,array6);
							};break;
						case 19:
							{
								rotate5(array1,array2,array3,array4,array5,array6);
						        rotate5(array1,array2,array3,array4,array5,array6);
					            rotate5(array1,array2,array3,array4,array5,array6);
					            rotate2(array1,array2,array3,array4,array5,array6);
							};break;
						case 20:
							{
								rotate2(array1,array2,array3,array4,array5,array6);
					            rotate2(array1,array2,array3,array4,array5,array6);
							};break;
					}; 
		int arrayy2[24]={array1[0],array1[1],array1[2],array1[3],array2[0],array2[1],array3[0],array3[1],array4[0],array4[1],array5[0],array5[1],array2[2],array2[3],array3[2],array3[3],array4[2],array4[3],
        array5[2],array5[3],array6[0],array6[1],array6[2],array6[3]};				
		for(i=1;arrayy2[i]!=1;i++);
		 switch (i){ 
		 			case  1:; break;
		 			case  2:{
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
							};	break;
					case   3:{
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate1(array1,array2,array3,array4,array5,array6);
							};	break;
					case   5:{
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
							};	break; 
					case   6:{
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
							};	break; 
					case   7:{
		 						rotate4(array1,array2,array3,array4,array5,array6);
							};	break; 
					case   8:{
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate6(array1,array2,array3,array4,array5,array6);
		 						rotate6(array1,array2,array3,array4,array5,array6);
		 						rotate6(array1,array2,array3,array4,array5,array6);
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
							};	break; 
					case   9:{
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate1(array1,array2,array3,array4,array5,array6);
							};	break; 
					case   10:{
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate6(array1,array2,array3,array4,array5,array6);
		 						rotate6(array1,array2,array3,array4,array5,array6);
		 						rotate6(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
							};	break; 	
					case   12:{
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate1(array1,array2,array3,array4,array5,array6);
							}	;break; 	
					case   13:{
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate6(array1,array2,array3,array4,array5,array6);
		 						rotate6(array1,array2,array3,array4,array5,array6);
		 						rotate6(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
							};	break; 	
					case   14:{
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
							};	break;
					case   15:{
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
							};	break;
					case   16:{
		 						rotate2(array1,array2,array3,array4,array5,array6);
		 						rotate5(array1,array2,array3,array4,array5,array6);
		 						rotate2(array1,array2,array3,array4,array5,array6);
		 						rotate2(array1,array2,array3,array4,array5,array6);
		 						rotate2(array1,array2,array3,array4,array5,array6);
							};	break;
					case   17:{
		 						rotate6(array1,array2,array3,array4,array5,array6);
		 						rotate6(array1,array2,array3,array4,array5,array6);
		 						rotate6(array1,array2,array3,array4,array5,array6);
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate3(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
							};	break;
					case   18:{
		 						rotate6(array1,array2,array3,array4,array5,array6);
		 						rotate6(array1,array2,array3,array4,array5,array6);
		 						rotate6(array1,array2,array3,array4,array5,array6);
		 						rotate2(array1,array2,array3,array4,array5,array6);
		 						rotate5(array1,array2,array3,array4,array5,array6);
		 						rotate2(array1,array2,array3,array4,array5,array6);
		 						rotate2(array1,array2,array3,array4,array5,array6);
		 						rotate2(array1,array2,array3,array4,array5,array6);
							};	break;		
					case   19:{
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
							};	break;		
					case   20:{
		 						rotate6(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
							};	break;	
					case   21:{
		 						rotate4(array1,array2,array3,array4,array5,array6);
		 						rotate4(array1,array2,array3,array4,array5,array6);
							};	break;	
					 }
		int arrayy3[24]={array1[0],array1[1],array1[2],array1[3],array2[0],array2[1],array3[0],array3[1],array4[0],array4[1],array5[0],array5[1],array2[2],array2[3],array3[2],array3[3],array4[2],array4[3],
        array5[2],array5[3],array6[0],array6[1],array6[2],array6[3]};			 
		for(i=2;arrayy3[i]!=1;i++);
		switch (i){ 
					case 2:;break;
					case 3:{
						    rotate1(array1,array2,array3,array4,array5,array6);
							};	break;
					case 5:{
							 rotate3(array1,array2,array3,array4,array5,array6);
				   			};	break;
				   	case 6:{
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
				   			};	break;	
				   	 case 7:{
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
				   			};	break;
				   	 case 8:{
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate1(array1,array2,array3,array4,array5,array6);
				   			};	break;
				     case 13:{
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
				   			};	break;
				   	 case 12:{
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate1(array1,array2,array3,array4,array5,array6);
				   			};	break;
				   	 case 15:{
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
				   			};	break;
				   	 case 14:{
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate4(array1,array2,array3,array4,array5,array6);
							 rotate4(array1,array2,array3,array4,array5,array6);
							 rotate4(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate4(array1,array2,array3,array4,array5,array6);
				   			};	break;
				   	  case 17:{
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
				   			};	break;
				   	   case 16:{
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate4(array1,array2,array3,array4,array5,array6);
						     rotate4(array1,array2,array3,array4,array5,array6);
							 rotate4(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate4(array1,array2,array3,array4,array5,array6);
				   			};	break;
				 	  case 19:{
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
				   			};	break;
		 				case 18:{
							 rotate4(array1,array2,array3,array4,array5,array6);
							 rotate4(array1,array2,array3,array4,array5,array6);
							 rotate4(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate4(array1,array2,array3,array4,array5,array6);
				   			};	break;
				   		case 20:{
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
				   			};	break;
				   		case 21:{
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate1(array1,array2,array3,array4,array5,array6);
				   		};	break;
				   		case 22:{
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate1(array1,array2,array3,array4,array5,array6);
				   		};	break;
		          }; 
		int arrayy4[24]={array1[0],array1[1],array1[2],array1[3],array2[0],array2[1],array3[0],array3[1],array4[0],array4[1],array5[0],array5[1],array2[2],array2[3],array3[2],array3[3],array4[2],array4[3],
        array5[2],array5[3],array6[0],array6[1],array6[2],array6[3]};			 
		for(i=3;arrayy4[i]!=1;i++);
		switch (i){  case 3:;break;
					 case 5:{
					 		 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);	
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
					 		};break;
					 case 6:{
					 		 rotate2(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);	
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate2(array1,array2,array3,array4,array5,array6);
							 rotate2(array1,array2,array3,array4,array5,array6);
							 rotate2(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate2(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate2(array1,array2,array3,array4,array5,array6);
							 rotate2(array1,array2,array3,array4,array5,array6);
							 rotate2(array1,array2,array3,array4,array5,array6);
					 		};break;
					 case 12:{
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
				        	 };break;
				     case 13:{
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
				        	 };break;
				     case 14:{
				     		 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);	
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
				        	 };break;   
					 case 15:{
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
				        	 };break;
					case 16:{
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);	 
					 	     };break;
					case 17:{
							 rotate2(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);	 
					 	     };break;
					case 18:{
							 rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);	 
					 	     };break;
					case 19:{
					  		 rotate6(array1,array2,array3,array4,array5,array6);
					         rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate3(array1,array2,array3,array4,array5,array6);
					 	     rotate3(array1,array2,array3,array4,array5,array6);
					 	     rotate3(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate3(array1,array2,array3,array4,array5,array6);	 
					 	     };break;
					case 20:{
					         rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate3(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);	 
					 	     };break;
					case 21:{
					         rotate2(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);	 
					 	     };break;
					case 22:{
					         rotate6(array1,array2,array3,array4,array5,array6);
					         rotate6(array1,array2,array3,array4,array5,array6);
					         rotate6(array1,array2,array3,array4,array5,array6);
					         rotate2(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
							 rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);	 
					 	     };break;
					case 23:{
						     rotate6(array1,array2,array3,array4,array5,array6);
					         rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
							 rotate3(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate3(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate6(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);
					 	     rotate2(array1,array2,array3,array4,array5,array6);	 
					 	     };	break;
					}; 
		int arrayy5[4]={array2[0],array3[0],array4[0],array5[0]};
		for(i=0;arrayy5[i]!=2;i++);
     	switch (i){case 0:;break;
				   case 1:{
				   	 extract1(array1,array2,array3,array4,array5,array6);
				   	 rotate6(array1,array2,array3,array4,array5,array6);
				   	 rotate6(array1,array2,array3,array4,array5,array6);
				   	 rotate6(array1,array2,array3,array4,array5,array6);
				   	 extract0(array1,array2,array3,array4,array5,array6);
				   	 rotate6(array1,array2,array3,array4,array5,array6);
				   	 extract1(array1,array2,array3,array4,array5,array6);
				   		  };break;
				   case 2:{
				   	 extract2(array1,array2,array3,array4,array5,array6);
				   	 rotate6(array1,array2,array3,array4,array5,array6);
				   	 rotate6(array1,array2,array3,array4,array5,array6);
				   	 extract0(array1,array2,array3,array4,array5,array6);
					 rotate6(array1,array2,array3,array4,array5,array6);
					 rotate6(array1,array2,array3,array4,array5,array6);
					 extract2(array1,array2,array3,array4,array5,array6);	 
				   		  };break;	
				   case 3:{
				   	 extract3(array1,array2,array3,array4,array5,array6);
				   	 rotate6(array1,array2,array3,array4,array5,array6);
				   	 extract0(array1,array2,array3,array4,array5,array6);
				   	 rotate6(array1,array2,array3,array4,array5,array6);
					 rotate6(array1,array2,array3,array4,array5,array6);
					 rotate6(array1,array2,array3,array4,array5,array6);
					 extract3(array1,array2,array3,array4,array5,array6);
				   		  };break;	  
				  }	
		int arrayy6[4]={array2[0],array3[0],array4[0],array5[0]};
		for(i=1;arrayy6[i]!=3;i++);
     	switch (i){case 1:;break;
				   case 2:{
				   	 extract2(array1,array2,array3,array4,array5,array6);
				   	 rotate6(array1,array2,array3,array4,array5,array6);
				   	 rotate6(array1,array2,array3,array4,array5,array6);
				   	 rotate6(array1,array2,array3,array4,array5,array6);
				   	 extract1(array1,array2,array3,array4,array5,array6);
				   	 rotate6(array1,array2,array3,array4,array5,array6);
				   	 extract2(array1,array2,array3,array4,array5,array6);
				   		  };break;
				   case 3:{
				   	 extract3(array1,array2,array3,array4,array5,array6);
				   	 rotate6(array1,array2,array3,array4,array5,array6);
				   	 rotate6(array1,array2,array3,array4,array5,array6);
				   	 extract1(array1,array2,array3,array4,array5,array6);
					 rotate6(array1,array2,array3,array4,array5,array6);
					 rotate6(array1,array2,array3,array4,array5,array6);
					 extract3(array1,array2,array3,array4,array5,array6);	 
				   		  };break;  
				  }	
		int arrayy7[4]={array2[0],array3[0],array4[0],array5[0]};
		for(i=2;arrayy7[i]!=4;i++);
     	switch (i){case 2:;break;
				   case 3:{
				   	 extract3(array1,array2,array3,array4,array5,array6);
				   	 rotate6(array1,array2,array3,array4,array5,array6);
				   	 rotate6(array1,array2,array3,array4,array5,array6);
				   	 rotate6(array1,array2,array3,array4,array5,array6);
				   	 extract2(array1,array2,array3,array4,array5,array6);
				   	 rotate6(array1,array2,array3,array4,array5,array6);
				   	 extract3(array1,array2,array3,array4,array5,array6);
				   		  };break;
				  }	
		for(i=0;i!=15;rotatecornu1(array1,array2,array3,array4,array5,array6))		  
		{	
		for(;array2[2]+array3[3]+array6[0]!=11;rotate6(array1,array2,array3,array4,array5,array6));	 
		for(;array2[2]!=2;)
		{
			rotatecornu1(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
		}
		for(;array3[2]*array4[3]+array6[1]!=18;)
		{
		for(;array3[2]*array4[3]*array6[1]!=72;rotatecornu2(array1,array2,array3,array4,array5,array6));
		if(array3[2]*array4[3]+array6[1]!=18)
		{
		rotate5(array1,array2,array3,array4,array5,array6);
		rotatecornu3(array1,array2,array3,array4,array5,array6);
		rotate5(array1,array2,array3,array4,array5,array6);
		rotate5(array1,array2,array3,array4,array5,array6);
		rotate5(array1,array2,array3,array4,array5,array6);	
		}
		else break;		  	       
		}
		i=array4[2]+array5[3]+array6[2];
	    }
	    rotatecornu1(array1,array2,array3,array4,array5,array6);
	    rotatecornu1(array1,array2,array3,array4,array5,array6);
	    
	    for(;array5[3]!=5;)
	    {
	    	rotate4(array1,array2,array3,array4,array5,array6);	
	    	rotate5(array1,array2,array3,array4,array5,array6);
	    	rotate6(array1,array2,array3,array4,array5,array6);
	    	rotate6(array1,array2,array3,array4,array5,array6);
	    	rotate6(array1,array2,array3,array4,array5,array6);
	    	rotate3(array1,array2,array3,array4,array5,array6);
	    	rotate3(array1,array2,array3,array4,array5,array6);
	    	rotate3(array1,array2,array3,array4,array5,array6);
	    	rotate6(array1,array2,array3,array4,array5,array6);
	    	rotate5(array1,array2,array3,array4,array5,array6);
	    	rotate5(array1,array2,array3,array4,array5,array6);
	    	rotate5(array1,array2,array3,array4,array5,array6);
	    	rotate6(array1,array2,array3,array4,array5,array6);
	    	rotate6(array1,array2,array3,array4,array5,array6);
	    	rotate6(array1,array2,array3,array4,array5,array6);
	    	rotate3(array1,array2,array3,array4,array5,array6);
	    	rotate6(array1,array2,array3,array4,array5,array6);
	    	rotate4(array1,array2,array3,array4,array5,array6);
	    	rotate4(array1,array2,array3,array4,array5,array6);
	    	rotate4(array1,array2,array3,array4,array5,array6);
	    	
	    	rotate6(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate5(array1,array2,array3,array4,array5,array6);
			rotate1(array1,array2,array3,array4,array5,array6);
			rotate5(array1,array2,array3,array4,array5,array6);
			rotate5(array1,array2,array3,array4,array5,array6);
			rotate5(array1,array2,array3,array4,array5,array6);
			rotate6(array1,array2,array3,array4,array5,array6);
			rotate5(array1,array2,array3,array4,array5,array6);
			rotate1(array1,array2,array3,array4,array5,array6);
			rotate1(array1,array2,array3,array4,array5,array6);
			rotate1(array1,array2,array3,array4,array5,array6);
			rotate5(array1,array2,array3,array4,array5,array6);
			rotate5(array1,array2,array3,array4,array5,array6);
			rotate5(array1,array2,array3,array4,array5,array6);
	    	
	    }
	
		};
		
		break;
        case 0:; 
		break;
        default:printf("error\n");
    }
    int array[24]={array1[0],array1[1],array1[3],array1[2],array2[0],array2[1],array3[0],array3[1],array4[0],array4[1],array5[0],array5[1],array2[3],array2[2],array3[3],array3[2],array4[3],array4[2],
    array5[3],array5[2],array6[0],array6[1],array6[3],array6[2]};
    printf("\n");
    printf("    ");
	for(i=0;i<=1;i++)
	{
		printf("%d ",array[i]);
	}	  
	printf("\n    ");
	for(i=2;i<=3;i++)
	{
		printf("%d ",array[i]);
	}	 
	printf("\n");
	for(i=4;i<=11;i++)
	{
		printf("%d ",array[i]);
	}	 
	printf("\n");
	for(i=12;i<=19;i++)
	{
		printf("%d ",array[i]);
	}	 
	printf("\n    ");
	for(i=20;i<=21;i++)
	{
		printf("%d ",array[i]);
	}	 
	printf("\n    ");
	for(i=22;i<=23;i++)
	{
		printf("%d ",array[i]);
	}
	}
	printf("\n    ");
	system("pause"); 
	return 0; 
	
}
