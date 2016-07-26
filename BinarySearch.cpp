BinarySearch
#include <iostream>
using namespace std;

// Tri diagonal matrix
// 3 2 0 0 0
// 1 1 2 0 0
// 0 1 1 2 0
// 0 0 1 1 2
// 0 0 0 1 7 
  

// int arr[2][2] = {  
// };

// Identity matrix
  
 
// Figure out the size of array given
// USe library function to find size of an array
// Size is N
// A=NXN aray
// B=NX1: 1 matrix unit matrix
// if A.B should give me B again
// THen A is identity matrix.


// camel-case notation: first letter small, rest word start capital
bool findIdentityMatrix(void)
{
  
  int arr[3][3] = {  
    {1, 0, 0},
    {0, 2, 0},
    {0, 0, 1},
  };

int n=3;
  
  /// LOGIC HERE ///
//n=size of array  
  for (int i=0; i<n; i++)
  {
    
    for (int j=0; j<n; j++)
    {
     if (i!=j)
     {
         if (arr[i][j]!=0)
         return false;      
        
     }//i!=j
    if (i==j)
    {
     if (arr[i][j]!=1)
       return false;
    }
    
   }
 }
       
  /////
  
  return true;
}

bool isTridiagonal (void)
{
  
    
  int arr[5][5] = {  
    {3, 2, 0, 0, 0},
    {1, 1, 2, 0, 0},
    {0, 1, 1, 2, 0},
    {0, 0, 1, 1, 2},
    {0, 0, 0, 1, 7}
  };
  

  int n=5;
  
  for (int i=0; i<n;i++)
  {
     for (int j=0;j<n;j++)
     {
       if (i==j)
       {
        if (arr[i][j]==0)
          return false;
         
                 
       }
       
       
       
       
     }
       
    
    
    
    
    
  }
  
  
  
  
 return true; 
}




#include <iostream>
using namespace std;

// Tri diagonal matrix
// 3 2 0 0 0
// 1 1 2 0 0
// 0 1 1 2 0
// 0 0 1 1 2
// 0 0 0 1 7 
  

// int arr[2][2] = {  
// };

// Identity matrix
  
 
// Figure out the size of array given
// USe library function to find size of an array
// Size is N
// A=NXN aray
// B=NX1: 1 matrix unit matrix
// if A.B should give me B again
// THen A is identity matrix.


// camel-case notation: first letter small, rest word start capital
// bool findTridiagonalMatrix(void)
// {
  
//   int arr[6][6] = {  
//     {1, 2, 0, 0, 0, 0},
//     {3, 2, 4, 0, 0, 0},
//     {0, 8, 3, 9, 0, 0},
//     {0, 0, 1, 4, 6, 0},
//     {0, 0, 0, 6, 5, 1},  
//     {0, 0, 1, 0, 0, 6},
//   };

// int n=6;
//   int counter=0;
//   /// LOGIC HERE ///
// //n=size of array  
//   for (int i=0; i<n; i++)
//   {
    
//     for (int j=0; j<n; j++)
//     {
     
//       if (i!=0&&i!=n-1)
//       {
        
//         if (i==j)
//         {
//         if {a[i][j+1]!=0 && a[i][j]!=0 && a[i][j-1]!=0}
//           a[i][j]
//         }
      
//         else
//     //i,j!=0 return false
//       }
      
//       if (i==0)
//       {
//        //check only for j+1 
//       }
      
      
//       if (i==n-1)
//       { //check for j-1
      
//       }
      
//    }
//  }
       
//   /////
  
//   return true;
// }

// bool isTridiagonal (void)
// {
  
    
//   int arr[5][5] = {  
//     {3, 2, 0, 0, 0},
//     {1, 1, 2, 0, 0},
//     {0, 1, 1, 2, 0},
//     {0, 0, 1, 1, 2},
//     {0, 0, 0, 1, 7}
//   };
  
//   int n=5;
  
// //   for (int i=0; i<n;i++)
// //   {
// //      for (int j=0;j<n;j++)
// //      {
// //        if (i==j)
// //        {
// //         if (arr[i][j]==0)
// //           return false;   
// //        }
// //      }
// //   }
  
//  return true; 
// }


class MatrixChecker
{

  private:

 
  public:

    bool isTriDiagonal(void);
    bool isIdentity(void);
};

bool MatrixChecker::isTriDiagonal(void){
  return true;
}




// SearchInArray


class SearchInArray
{
//function called search
  //pass an array of numbers no limit on element size,  and a number,
  //implement a binary search in an array: check if element is found or not: return positions in array
  
  // array not given in order hard code the size

  private:
  //funcions for different implementation strategy for sorting: different sorting algorithm
  
  // people dont need to know our searching algorithm: making a blackbox with only input and output feature.
  
  
  
  
  
  
  
  public: 
  int getPositionInArray (void);
  


};
  
int SearchInArray::getPositionInArray(void)
  
  
{
  int array[]={1,2,45,23,23,256,24,64,223,64,123,464,323,335,-2,-43,2,-2323,42342,-4};
  int n=20;
 int number=464;
  
  
  for (int k=0;k<n;k++)
  {
   cout<<array[k]; 
    
  }
//funtion for size of array//
  
  //function to sort the array
  
  
  //function to find the number using// print the index// follow up on how to return array
  //follow up on how to pass matrix// follow up on function for size of array
  //sort function can be modified later to changen implementation strategy
int c=0;
  
  
  
for (int i=0;i<n;i++)
{
  
  for (int j=0;j<n-1-i;j++)
  {
    if (array [j]>array [j+1])
    {
     //ask for swap function 
      c=array[j];
      array [j]=array [j+1];
      array [j+1]=c;
      
          
    }
    
    
  }
  
  
}
  
  
  //sort array
  
  
  
  
  return 0;
}
  

int main() 
{ 
 MatrixChecker mxChkr;
  
 //cout << mxChkr.getPositionInArray() << endl;
  
   int array[]={1,2,45,23,23,256,24,64,223,64,123,464,323,335,-2,-43,2,-2323,42342,-4};
  int n=20;
 int number=464;
  
  
  for (int k=0;k<n;k++)
  {
   cout<<array[k];
    cout<<"\n";
    
  }
//funtion for size of array//
  
  //function to sort the array
  
  
  //function to find the number using// print the index// follow up on how to return array
  //follow up on how to pass matrix// follow up on function for size of array
  //sort function can be modified later to changen implementation strategy
int c=0;
  
  
  
for (int i=0;i<n;i++)
{
  
  for (int j=0;j<n-1-i;j++)
  {
    if (array [j]>array [j+1])
    {
     //ask for swap function 
      c=array[j];
      array [j]=array [j+1];
      array [j+1]=c;
      
          
    }
    
    
  }
  
  
}
  cout<<"\n";
  cout<<"\n";
  
  for (int k=0;k<n;k++)
  {
   cout<<array[k];
    cout<<"\n";
    
  }
  
int mid=0;
//Doing a binary search for the number
  
  // check n >2;
if (n%2==0)
{
  mid =n/2;
  
}
else
  mid=(n+1)/2;
 
  //check if array [mid]==number
  
//if yes increase counter in mid +1 direction and mid -1 direction to find a number
  //array[mid+/- j]!=number;
  //if array[mid!=number]
  
  
  
  for (int i=0;i<mid;i++)
  {
   //search for number in this section and increase counter
    
    
  }
  
  //if counter==0
  
  for (int i=mid;i<n;i++)
   {
    
  ////search in this area. for the number
    //yo baby
    
  }
  
  
  
  
  return 0;
   
}
  
