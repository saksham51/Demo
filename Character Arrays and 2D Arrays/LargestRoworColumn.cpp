Largest Row or Column
Given an NxM 2D array, you need to find out which row or column has largest sum (sum of its elements) overall amongst all rows and columns.
Input Format :
 Line 1 : 2 integers N and M respectively, separated by space 
 Line 2: Single line having N*M elements entered in row wise manner, each separated by space.
Output Format :
 If row sum is maximum then - "row" row_num max_sum
 If column sum is maximum then - "column" col_num max_sum
Note : If there are more than one rows/columns with maximum sum consider the row/column that comes first. And if ith row and jth column has same sum (which is largest), consider the ith row as answer.
Sample Input 1 :
2 2 
1 1 1 1
Sample Output 1 :
row 0 2
Sample Input 2 :
3 3
3 6 9 1 4 7 2 8 9
Sample Output 2 :
column 2 25


/********************************************************* SOLUTION *******************************************************************/


#include<climits>
void findLargest(int **arr, int row, int col){

	    int largestSum = INT_MIN;
	    int maxrow = 0;
    	bool rowMax=true;
	// finding each row sum 
	for(int i = 0; i < row; i++){ 
        
        int sum = 0;
		for (int j = 0; j < col; j++) { 
			// Add the element 
			sum = sum + arr[i][j]; 
		}
        //finding th greatest row
		if(sum > largestSum){
            largestSum=sum;
			maxrow = i;
		}
		// Reset the sum
	}
	
	
	int maxcol = 0;
	
	// finding the each column sum 
	for (int i = 0; i < col; ++i) { 
        int sum=0;
		for (int j = 0; j < row; ++j) { 

			// Add the element 
			sum = sum + arr[j][i]; 
		}
        // finding th greatest column
		if(sum > largestSum){
			largestSum = sum;
			maxcol = i;
            rowMax=false;
		}
		// Reset the sum 
	}
    //comparing the max row or col
	if(rowMax){
        cout<<"row"<<" "<<maxrow<<" "<<largestSum<<endl;
    }
    else{
        cout<<"column"<<" "<<maxcol<<" "<<largestSum<<endl;
    }
}
