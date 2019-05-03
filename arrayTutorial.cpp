#include <iostream>


using namespace std;

int main()
{
   int A[7] = {4, 8, 6, 9, 5, 2, 7};

   for(int x: A){
       cout << x << " ";
   }

   // Adding all the elements of an array


   int n = 7, sum=0;

   for(int i=0; i<n; i++){

       sum = sum + A[i];

   }

   cout << "\nThe sum is: "<< sum <<endl; 


   cout <<"\n******************************\n";

   int max = A[0];

   for(int i = 1; i < n; i++){
       
       if(A[i] > max){
           max = A[i];
       }
   }
   cout << "The max value: "<< max;


   // Linear Search in Array
   

   cout <<"\n******************************\n";

   int key;

   cout << "Enter key to search: ";
   cin >> key;


   for(int i = 0; i < n; i++){

       if( key == A[i]){
           cout <<" Found key at pos: "<< i;
           return 0;
       }

   }
   cout << "Key not found\n";

   cout << "\n********************************\n";
   cout << "         Binary Search            \n";
   cout << "********************************\n";

   int iArrayB[10] = { 6, 8, 13, 17, 20, 22, 25, 28, 30, 35 };

   int low = 0;
   int high = 9;

   int mid;

   while(low <= high){

       mid = (low + high)/2;

       if(key == iArrayB[mid]){
           cout <<"key found at: "<<mid <<endl;
           return 0;
       }

       else if( key < iArrayB[mid]){
           high = mid - 1;
       }
       else{
           low = mid + 1;
       }
   }
   cout << " key not found " << endl;

  

   cout << "\n********************************\n";
   cout << "         Printing Pattersn        \n";
   cout << "********************************\n";

   for( int i = 0; i < 4; i++ ){
       
       for( int j = 0; j < 4; j++){
           
           if( i > j)
               cout <<" ";
           else
               cout <<"*";
       }
       cout << endl;
   }


   for( int i = 0; i < 4; i++ ){
       
       for( int j = 0; j < 4; j++){
           
           if( i >= j)
               cout <<"* ";
       }
       cout << endl;
   }

   cout <<"\n\n";

   for( int i = 0; i < 4; i++ ){
       
       for( int j = 0; j < 4; j++){
           
           if( i <= j)
               cout <<"* ";
       }
       cout << endl;
   }


    // In this case we can use n = 4 as the dimensions
    // of the matriz or array. and the "for loop" check
    // statement could be as 
    //          if( i + j > n -1 )
    

   cout <<"\n\n";

   for( int i = 0; i < 4; i++ ){
       
       for( int j = 0; j < 4; j++){
           
           if( i + j >= 3)
               cout <<"*";
           else
               cout <<" ";
       }
       cout << endl;
   }

   cout <<"\n*********************************\n";
   cout <<" 2D arrays  \n";
   cout <<"**********************************\n";

   int iArray2D[2][3] = { {2, 5, 9}, {6, 9, 15} };

   for( int i = 0; i < 2; i++){

       for( int j = 0; j < 3; j++){

           cout << iArray2D[i][j] <<" ";
       }
       cout <<endl;
   }

}

