// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// int main() {
// // int num=60;
// // if(num>=60){
// //     cout<<"senior";
// // }
// // else
// //   cout<<"older" ;
// }

// int num=10;
// if(num>=10){
//     cout<<"num is greater";
// }
// else{
//   cout<<"num is less" ;
// }

// #include <iostream>
// using namespace std;
// int main() {
// int percantage=50;
// if(percantage>=50){
//     cout<<"pass";
// }
// else
//   cout<<"fail" ;
// }


// #include <iostream>
// using namespace std;
// int main() {
// int time=12 ;
// if(time>=12){
//     cout<<"good evening";
// }
// else
//   cout<<"good morning" ;
// }


// #include <iostream>
// using namespace std;
// int main() {
// int cp;
// int sp;
// if(cp>sp){
//     cout<<"loss";
// }
// else
//   cout<<"profit" ;
// }


// #include <iostream>
// using namespace std;
// int main() {
// int num=1;
// if(num>=1){
//     cout<<"positve";
// }
// if(num=0){
//   cout<<"zero" ;
// }
// else
//   cout<<"negative";
// }


// #include <iostream>
// using namespace std;
// int main() {
// char =#;
// if('char='#'){
//     cout<<"#";
// }
// else{
//   cout<<"not";
// }

// #include <iostream>
// using namespace std;
// int main() {
// char=ch
// if(ch>='A' && ch<='Z'){
//     cout<<"valid";
// }
// else{
//   cout<<"not valid";
// }


 int num=38;
 if(num>=10 && num<=20){
 cout<<"num is between10 & 20 ";    
 }
 else if(num>=20 && num<=30){
      cout<<"num is between20 & 30 "; 
 }
 else if(num>=30 && num<=40){
      cout<<"num is between30 & 40 "; 
 }
 else{
     cout<<"num is invalid";
 }

// num in reverse
#include<iostream>
using namespace std;
int main(){
int num=123;
// cout<<"enter value=";
// cin>>num;
cout<<num%10;
num=num/10;

cout<<num%10;
num=num/10;

cout<<num%10;
}


// get 10 
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() { 
  int a=6;
  int b=8;
  if(a+b==10 ||a-b==10 || a*b==10 ||a/b==10){
      cout<<"10";
  }
  else{
      cout<<"invalid";
  }
}

// days of week
#include <iostream>
using namespace std;
int main() { 
int num;
cout<<"enter num=";
cin>>num;
if(num==1){
    cout<<"sunday";
}
else if(num==2){
    cout<<"monday";
}
else if(num==3){
    cout<<"tuesday";
}
else if(num==4){
    cout<<"wednesday";
}
else if(num==5){
    cout<<"thursday";
}
else if(num==6){
    cout<<"friday";
}
else if(num==7){
    cout<<"saturday";
}
else{
    cout<<"invalid"; 
}

}


// month with most days
#include <iostream>
using namespace std;
int main() { 
int num;
cout<<"enter num=";
cin>>num;
if(num==4 ||num==6 ||num==9 || num==11){
    cout<<"30";
}
 else if(num==2){
        cout<<"28||29";
    }
    else if(num==1 ||num==3 ||num==5 ||num==7 ||num==8 ||num==10 ||num==12){
        cout<<"31";
    }
    else{
        cout<<"invalid";
    }
}

// leap year
#include <iostream>
using namespace std;
int main() { 
int year;
cout<<"enter year=";
cin>>year;
if(year%4==0 && year%100!=0 || year%400==0 ){
    cout<<"leap year";
}

}
#include <iostream>

int main() {
 int mrp;
 int sp;
 cout<<"enter value=";
 cin>>mrp;
 if(mrp==1000){
     int cashback=200;
     sp=mrp-cashback;
     
     
 }
 else if(mrp>1000){
     int cashback=500;
     sp=mrp-500;
 }
 else{
     cout<<"invalid";
 }
}


#include <iostream>
using namespace std;
int main() {
    
    int o=4;
    switch(o)
    {
        case 1:
        int length;
        length=11;
        int breadth;
        breadth=12;
        cout <<"area of rectangle="<<length*breadth;
        break;
       
       case 2:
       int radius;
       radius=12;
       cout <<"area of circle="<<(22*radius*radius)/7;
        break;
           
           
      case 3:
      int side;
      side=6;
      cout<<"area of square="<<side*side;
      break;
      
      case 4:
      int height;
      height=2;
      cout<<"area of triangle="<<(1*height*breadth)/2;
      break;
      
    }
}


#include <iostream>
using namespace std;
int main() {
 char o;
 cout<<"enter option=";
 cin>>o;
 switch(o)
 {
     case 'a':cout<<"a=chocolate b=butterscotch";
     cin>>o;
     switch(o)
     {
         case 'a':cout<<"chocolate tea";
         break;
         case 'b' :cout<<"butterscotch tea";
         break;
     }
 }
  {
      switch(o)
    { case 'b':cout<<"a=especito b=moucha";
     cin>>o;
     switch(o)
     {
         case 'a':cout<<"especito coffee";
         break;
         case 'b' :cout<<"moucha coffee";
         break;
     }
    }
 }


#include <iostream>
using namespace std;
int main(){
 int num;
 
 for(num=1; num<=10; ++num){
     cout<<2*num<<endl;
 }
}


#include <iostream>
using namespace std;
int main(){
 int num=1;
 do{
     cout<<2*num<<endl;
     ++num;
 }
 while(num<=10);
}


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main(){
    int num;
 while(num<=10){
     cout<<2*num<<endl;
     ++num;
     
 }
}


reverse 2's table

#include <iostream>
using namespace std;
int main(){
    
    for( int i=10; i>=1; --i)
    {
        cout<<2*i<<endl;
    }
 
}
table from 2 to 10
#include <iostream>
using namespace std;
int main(){
    
    for( int i=2; i<=10; ++i)
    {
    for(int j=1; j<=10; ++j){
        cout<<i*j;
    }
    cout<<"\t";
    }
 
}
adding sum==
#include <iostream>
using namespace std;
int main() {
  int sum=0;
  for(int i=1; i<=10; ++i){
     
      sum+=i;
       cout<<sum<<endl;
  }  
}
multiply==
#include <iostream>
using namespace std;
int main() {
  int sum=1;
  for(int i=1; i<=5; ++i){
     
      sum*=i;
       cout<<sum<<endl;
  } 
}

#include <iostream>
using namespace std;
int main() {
    int num=2;
    int power=3;
  int sum=1;
  for(int i=1; i<=power; ++i){
      sum=sum*power;
  }
   cout<<sum<<endl;
}

// ascii values
#include <iostream>
using namespace std;
int main() {
   
  for(int i=0; i<=256; ++i){
      cout<<"ascii value of=" <<i<<"="<<char(i);
      cout<<endl;
  }
}

#include <iostream>
using namespace std;
int main() {
  int number=8;
  for(int i=1; i<=8; ++i){
      
      if(number%1==0){
          cout<<i<<endl;
      }
 
  } 
}

// prime number
#include <iostream>
using namespace std;
int main() {
  int number=8;
  int counter=0;
  for(int i=1; i<=number; ++i){
      
      if(number%1==0){
          counter++;
      }
  }
      if(counter==2){
          cout<<"prime";
      }
 else{
     cout<<"not";
  } 
}


reverse with while loop
#include <iostream>
using namespace std;
int main() {
   int num=123;
   int rv=0;
   while(num!=0)
   {
       rv=rv*10 + num%10;
       num=num/10;

   }
          cout<<rv;
}


with for loop
#include <iostream>
using namespace std;
int main() {
   int num=98765431;
   int rv=0;
   for(; num!=0;)
   {
       rv=rv*10 + num%10;
       num=num/10;

   }
          cout<<rv;
}


// repeat 1 with loop

#include <iostream>
using namespace std;
int main() {
int num=5;
int rv=1;
for(int i=1; i<=num; i++)
{
    cout <<rv<<endl;
    rv=rv*10+1;
}
}

// reverse with for loop

#include <iostream>
using namespace std;
int main() {
int ld=0;
int rv=0;
for(int num=12345; num!=0; num=num/10)
{
    ld=num%10;
    rv=rv*10+ld;
}
cout<<rv<<endl;
}



#include <iostream>
using namespace std;
int main() {
int num=3;
int term=0;
int sum=0;
for(int i=1; i<=num; i++)
{
    cout <<term<<endl;
    term=term*10+1;
    sum=sum+term;
}
cout<<sum;
}


// fibonachi series

#include <iostream>
using namespace std;
int main() {
  int num=7;
  int firstterm=0;
  int secondterm=1;
  int term=0;
  cout<<firstterm<<" ";
  cout<<secondterm<<" ";
  for(int i=2; i<num; i++)
  {
      
      term=firstterm+secondterm;
      cout<<term << " ";
      firstterm=secondterm;
      secondterm=term;
  }
}

15 questions 






3 answer right
#include <iostream>
using namespace std;
int main()
{
int i=0,j=1,k=0;
if(++k,i,j++){
    cout<<i<<j<<k;
}
}

// amstrong num

#include <iostream>
using namespace std;
int main() {
int num=153;
int rem,sum=0;
int ans=num;

while(num!=0){
   rem=num%10;
   sum+=rem*rem*rem;
   num=num/10;
}
if(sum=ans){
    cout<<"amrstrong num";
}
else{
    cout<<"not";
}
}

// Armstrong with for loop
// sum of all there digit's cube is equal to it self
#include <iostream>
using namespace std;
int main() {
int ld=0;
int rv=0;
int number=153;
for(int num=153; num!=0; num=num/10)
{
    ld=num%10;
    rv=rv+ld*ld*ld;
}
if(rv==number){
    cout<<"armstrong";
}
else{
    cout<<"not a armstrong";
}
}

Armstrong with while

#include <iostream>
using namespace std;
int main() {
int ld=0;
int rv=0;
int number=193;
int num=193;
while( num!=0 )
{
    ld=num%10;
    rv=rv+ld*ld*ld;
    num=num/10;
}
if(rv==number){
    cout<<"armstrong";
}
else{
    cout<<"not a armstrong";
}
}

fibonachi with for
#include <iostream>
using namespace std;
int main() {
  int ft=0;
  int st=1;
  int next;
  for(int i=0; i<=5; ++i)
  {
      if(i==0){
          cout<<ft<<endl;
          continue;
      }
      if(i==1){
          cout<<st<<endl;
          continue;
      }
      next=ft+st;
      ft=st;
      st=next;
      
      cout<<next<<endl;
   }

with while
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int ft=0;
  int st=1;
  int next;
  int n=10;
  int i=0;
  
  while(i<n)
  {
      if(i==0){
          cout<<ft<<endl;
          i++;
          continue;
      }
      if(i==1){
          cout<<st<<endl;
          i++;
          continue;
      }
       next=ft+st;
       i++;
      ft=st;
      st=next;
      
      cout<<next<<endl;
      
  }
}

// perfect number
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int num=6;
  int factor=0;
  for(int i=1; i<num; ++i)
  {
      if(num%i==0){
          factor=factor+i;
      }
  }
      if(factor==num){
          cout<<"perfect";
      }
      else{
          cout<<"Not a Perfect Num";
      }
  
}
hcf
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int sn=3;
  int ln=6;
  int hcf;
  for(int i=1; i<=sn; ++i){
      if(sn%i==0 && ln%i==1){
          hcf=i;
      }
  }
  cout<<hcf;
  
}
lcm
#include <iostream>
using namespace std;
int main() {
  int sn=3;
  int ln=6;
  int lcm;
  for(int i=ln; ;i=i+ln)
  {
      if(i%ln==0 && i%sn==0){
          lcm=i;
          break;
      }
  
  }
      cout<<lcm;
}

// gp series

#include <iostream>
using namespace std;
int main() {
    int n=6;
    int a=1;
    int r=2;
    for(int i=0; i<n; ++i){
         cout<<a<<" ";
        a*=r;  
    }
  
}

reverse with num
#include <iostream>
using namespace std;
int main() {
  int num=1234;
  int rv=0;
  int digit=0;
 
  for(; num!=0;){
  rv=rv*10 + (num%10);
  num/10;
  }
  
  while(rv!=0){
      digit=rv%10;
    switch(digit){
 case 1: cout<<"one";
 break;
 case 2 :cout<<"two";
 break;
 case 3 : cout<<"three";
 break;
 case 4: cout<<"four";
 break;
 }
 rv=rv/10;
  }
 
}

design printing right angle triangle

#include <iostream>
using namespace std;
int main() {
 for(int r=1; r<=5; ++r)  {
     
     for(int c=1; c<=r; ++c){
         cout<<"$";
     }
      cout<<endl;
 } 
}


 right angle trinagle

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 for(int r=1; r<=5; ++r)  {
     
     for(int c=1; c<=5; ++c){
         
         if(c<=r){
             cout<<"*";
         }
         
         else{
             cout<<" ";
         }
     }
     cout<<endl; 
 } 
}

inverted left triangle


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 for(int r=1; r<=5; ++r)  {
     
     for(int c=1; c<=5; ++c){
         
         if(c>=r){
             cout<<"*";
         }
         
         else{
             cout<<" ";
         }
     }
     cout<<endl; 
 } 
}


 left  triangle

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 for(int r=1; r<=5; ++r)  {
     
     for(int c=1; c<=5; ++c){
         
         if(c>=6-r){
             cout<<"*";
         }
         
         else{
             cout<<" ";
         }
     }
     cout<<endl; 
 } 
}

inverted right trinagle

#include <iostream>
using namespace std;
int main() {
 for(int r=1; r<=5; ++r)  {
     
     for(int c=1; c<=5; ++c){
         
         if(c<=6-r){
             cout<<"*";
         }
         
         else{
             cout<<" ";
         }
     }
     cout<<endl; 
 } 
}

pyramid

#include <iostream>
using namespace std;
int main() {
  for(int r=1; r<=5; ++r)
  {
      for(int c=1; c<=9; ++c)
      {
          if(c>=6-r && c<=4+r){
              cout<<"*";
          }
          else{
              cout<<" ";
          }
      }
      cout<<endl;
  }
}

inverted pyramid

#include <iostream>
using namespace std;
int main() {
  for(int r=1; r<=5; ++r)
  {
      for(int c=1; c<=9; ++c)
      {
          if(c>=r && c<=10-r){
              cout<<"*";
          }
          else{
              cout<<" ";
          }
      }
      cout<<endl;
  }
}

design pyramid  gives
[
      1
     121
    13331
   1444441
  155555551

  ]

#include <iostream>
using namespace std;
int main() {
  for(int r=1; r<=5; ++r)
  {
      for(int c=1; c<=9; ++c)
      {
          if(c>=7-r && c<=3+r){
              cout<<r;
          }
          else if(c>=6-r && c<=4+r){
              cout<<"1";
          }
          else{
              cout<<" ";
          }
      }
      cout<<endl;
  }
}

diamond

#include <iostream>
using namespace std;
int main() {
    int a;
  for(int r=1; r<=9; ++r)
  {
     (r<=5) ? ++a : --a;
      
      for(int c=1; c<=9; ++c)
      {
          
          if( c>=6-a && c<=4+a){
              cout<<"*";
          }
          else{
              cout<<" ";
          }
      }
     
      cout<<endl;
  }
}

print 1
      22
      333

#include <iostream>
using namespace std;
int main() {
    int num =1;
    for(int r=1; r<=5; ++r){
                 
        for(int c=1; c<=5; ++c){
       
            if(c<=r){
                cout<<r;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

print 1
      12
      123
#include <iostream>
using namespace std;
int main() {
    int num =1;
    for(int r=1; r<=5; ++r){
                 
        for(int c=1; c<=5; ++c){
       
            if(c<=r){
                cout<<c;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

comtinus counting
1
23
456
78910
#include <iostream>
using namespace std;
int main() {
    int num =1;
    for(int r=1; r<=5; ++r){
                 
        for(int c=1; c<=5; ++c){
       
            if(c<=r){
                cout<<num;
                num++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
continue a
         b c 
         d e f g

#include <iostream>
using namespace std;
int main() {
     char ch= 'A';
    for(int r=1; r<=5; ++r){
                 
        for(int c=1; c<=5; ++c){
       
            if(c<=r){
                cout<<ch++;
                
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
continues
a
bb
ccc
#include <iostream>
using namespace std;
int main() {
    
    for(int r=1; r<=5; ++r){
        for(int c=1; c<=5; ++c){
            if(c<=r){
                cout<<char(r+64);
            }
            else{
                cout<<"";
            }
        }
        cout<<endl;
    }
}
continues
a
ab
abc
#include <iostream>
using namespace std;
int main() {
    
    for(int r=1; r<=5; ++r){
        for(int c=1; c<=5; ++c){
            if(c<=r){
                cout<<char(c+64);
            }
            else{
                cout<<"";
            }
        }
        cout<<endl;
    }
}

array

#include <iostream>
using namespace std;
int main() {

variable size

int arr[]={1,2,3,4,5,6};
cout<<arr[2];

fixed size

int arr1[5]={1,2,3,4,5,6}
cout<<arr[3]

for(int i=0; i<5; ++i){
  cout<<arr[i];
}
}
if gives more values then given then it gives intializer error

array works on four things ;
insertion ; updation ; display or extract ; deletion

1} insertion
int arr[]={1,2,3,4,5,};
int arr1[4]={1,2,3,4}

int brr[5];
cout<<"enter 5 values of array";
for(int i=0; i<5; ++i)
{
  cin>>brr[i];
}



2} updation
arr[0]=arr[3]+[4];  result = 9
arr[1]=12;  12 is even to arr[1]



display or extract
for(int i=0; i<5; ++i)
{
  cout<<brr[i]<<endl;
}

for(int i=0; i<5; ++i)
{
if(arr[i]!=3){
cout<<arr[i]<<endl;
}

int j=0;
for(int i=0; i<5; ++i)
{
if(arr[i]!=3){
arr[j]=arr[i];
j++;
}
}

for(int i=0; i<5; ++i)
{
  cout<<arr[i]<<endl;;
}

## Comparison

int arr[]={1,2,3,4,5};
for(int i=0; i<5,++i)
{
  for(int j=i+1; j<5; ++j)
{
   if(arr[i]==arr[j]){
        cout<<arr[i]<<endl;
}
}
}

sum
int arr[]={1,2,3,4,5};
int sum=0;
for(int i=0; i<5; ++i)
 {
   sum=sum+arr[i];
 }
cout<<sum;
}


reverse of array

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int arr[]={2,3,4,5,6};
  for(int i=0; i<5/2; ++i)
  {
      int temp;
      temp=arr[i];
      arr[i]=arr[5-i-1];
      arr[5-i-1]=temp;
  }
  for(int i=0; i<5; ++i){
      cout<<arr[i];
  }
}


greater value

#include <iostream>
using namespace std;
int main() {
     int max=0;
     int arr[]={3,24,7,4,5};
     for(int i=0; i<5; ++i){
         if(arr[i]>max) {
             max=arr[i];
         } 
}
cout<<max;
}

smaller value

#include <iostream>
using namespace std;
int main() {
     int arr[]={8,4,1,2,5};
     int min=arr[0];
     for(int i=0; i<5; ++i){
         if(arr[i]<min) {
             min=arr[i];
         } 
}
cout<<min;
}


duplicate

#include <iostream>
using namespace std;
int main() {
  int arr[]={2,7,2,7,6};

  for(int i=0; i<5; ++i){
      
      bool dup=false;
      
      for(int j=i+1; j<5; ++j){
      if(arr[i]==arr[j] && arr[i]!=-1){
          arr[j]=-1;
          dup=true;
      }
  }
  if(dup){
      cout<<arr[i];
  }
  }

}

unique value

#include <iostream>
using namespace std;
int main() {
  int arr[]={2,7,2,7,6,8,3,9,8,3};

  for(int i=0; i<10; ++i){
      
      bool dup=false;
      
      for(int j=i+1; j<10; ++j){
      if(arr[i]==arr[j] && arr[i]!=-1){
          arr[j]=-1;
          dup=true;
      }
  }
  if(!dup && arr[i]!=-1){
      cout<<arr[i];
  }
  }

}

frequency count

#include <iostream>
using namespace std;
int main() {
  int arr[]={2,7,2,6,8,3,9,8,3,3};

  for(int i=0; i<10; ++i){
      int count=1;
      for(int j=i+1; j<10; ++j){
      if(arr[i]==arr[j]){
          ++count;
          arr[j]=-1;
      }
  }
  if(arr[i]!=-1 ){
      cout<<"the frequency of "<<arr[i]<<"is"<<count<<endl;
  }
  }

}

reverse with largest number

#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5};
    int k=4;
    for (int i=0; i<k; ++i)
    for(int j=i+1; j<5; ++j)
    {
        if(arr[i]<arr[j]){
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    cout<<arr[k-1];
}

reverse but for different digit in array 

#include <iostream>
using namespace std;
int main() {
int arr[]={11,21,23,11,43};

for(int i=0; i<5/2; ++i);     /2 for not doing reverse 2 times
for(int j=0; j<5; ++j)
 {
   if(arr[i]>arr[j])
    {
      int temp;
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
 }
  for(int i=0; i<5; ++i)
  {
    cout<<arr[i];
  }
}

missing number

#include <iostream>
using namespace std;                                          
int main()
{
    int arr[]={1,2,3,5,7};
for(int i=0; i<5; ++i)
{
    if(arr[i+1]-arr[i]>1)
    {
        cout<<arr[i]+1;
    }
}
}

multiple missing number

#include <iostream>
using namespace std;
int main()
{
    int arr[]={10,20,21,22,23};
for(int i=0; i<5; ++i)
{
    if(arr[i+1]-arr[i]>1)
    {
        for(int j=arr[i]+1; j<arr[i+1]; ++j)
        
        cout<<j;
    }
}
}

remove zeros and get new array==


#include <iostream>
using namespace std;
int main()
{
 int arr[]={1,0,2,0,3};
int j=0;
  for(int i=0; i<5; ++i)
{
  if(arr[i]!=0){
    arr[j]=arr[i];
   j++;
  }
 }

for(int i=j; i<5; ++i)
{
  arr[i]=0;
}
for(int j=0; j<5; ++j)
{
  cout<<arr[j];
}
}



remove from the list 

#include <iostream>
using namespace std;
int main() {
 int arr[]={1,2,1,3,2};
 int remove=1;
 for(int i=0; i<5; ++i)
 {
     if(arr[i]!=remove){
         cout<<arr[i];
     }
 }
  
}



  ====  0r =========



remove from the list

#include <iostream>
using namespace std;
int main() {
 int arr[]={1,2,1,3,2};
 int remove=1;
int j=0;
 for(int i=0; i<5; ++i)
 {
     if(arr[i]!=remove){
         arr[j]=arr[i];
           ++j;
     }
 }
  for(int i=0; i<j; ++i)
{
  cout<<arr[i];
}
}



remove duplicate from array

#include <iostream>
using namespace std;
int main() {
 int arr[]={1,2,1,3,2};
 for(int i=0; i<5; ++i)
 {
     for(int j=i+1; j<5; ++j)
        if(arr[i]==arr[j]){
        arr[j]=-1;
     } 
     }
     for(int i=0; i<5; ++i){
         if(arr[i]!=-1){
             cout<<arr[i];
         }
     }
     
 }


pallindrome

#include <iostream>
using namespace std;
int main() {
 int arr[]={1,2,3,2,1};
 for(int i=0; i<5/2; ++i){
     
     if(arr[i]!=arr[5-i-1]){
         cout<<"not pallindrome";
         return 0;
     }
 }
 cout<<"pallindrome";
}


overloading in parameter of datatype

#include <iostream>
using namespace std;
void sum(int a)
{
    cout<<a;
}
void sum(char a)
{
    cout<<a;
}
int main() {
  sum(10);
  sum('a');
}


order of datatype

#include <iostream>
using namespace std;
void sum(int a,char b)
{
    cout<<a;
}
void sum(char a,int b)
{
    cout<<a;
}
int main() {
  sum(10,'a');
  sum('a',10);
}

recursion   //  means calling itself inside the same function



#include <iostream>
using namespace std;
int sum(int n)
{
    if(n<=1){
        return n;
    }
    return n +sum(n-1);
}
int main()
{
 cout<<sum(10)  ;       ( answer 55  )
}



 factorial with recurrsion 

#include <iostream>
using namespace std;
int sum(int n)
{
    if(n<=1){
        return n;
    }
    return n *sum(n-1);
}
int main()
{
 cout<<sum(5)  ;   (answer 120 )
}



fibonachi with recursion 

#include <iostream>
using namespace std;
int fibo(int n)
{
    if(n<=1) return n;
    return fibo(n-2)+ fibo(n-1);
}
int main() {
cout<<fibo(10);
}


fibonachi series with loop and recursion

#include <iostream>
using namespace std;
int fibo(int n)
{
    if(n<=1) return n;
    return fibo(n-2)+ fibo(n-1);
}
int main() {
int i=0;
int n=6;
while(i<=n){
    cout<<fibo(i)<<" ";
    i++;
}
}


fibonachi series with loop and without recursion

 #include <iostream>
using namespace std;
int fibo(int n)
{
 int ft=0;
 int st=1;
 int next;
for(int i=0; i<=n; ++i)
{
 if(i==0){
  cout<<ft;
  continue;
  }
if(i==1){
 cout<<st;
 continue;
  }
 next=ft+st;
 ft=st;
 st=next;
 cout<<next;
}
return 0;
}
int main()
{
  cout<<fibo(5);
}

string reverse

#include <iostream>
using namespace std;
int main() {
string str="welcome";
for(int i=0; i<7/2; ++i)
{
    char temp;
    temp=str[i];
    str[i]=str[7-i-1];
    str[7-i-1]=temp;
}
for(int i=0; i<7; ++i){
    cout<<str[i];
}
}                     result  (emoclew)


function reverse

#include <iostream>
using namespace std;
void rev (string str)
{
  
for(int i=0; i<7/2; ++i)
{
    char temp;
    temp=str[i];
    str[i]=str[7-i-1];
    str[7-i-1]=temp;
}
for(int i=0; i<7; ++i){
    cout<<str[i];
}
}
int main() {
  string str="welcome";
  rev(str);
}

reverse pallindrome with character


#include <iostream>
using namespace std;
int main() {
 string str="wellew";
 for(int i=0; i<6/2; ++i){
     
     if(str[i]!=str[6-i-1]){
         cout<<"not pallindrome";
         return 0;
     }
 }
 cout<<"pallindrome";
}


=====  or ======


#include <iostream>
using namespace std;
int main() {
 string str="weloew";
 int start=0;
 int end=str.length()-1;
 while(start<end)
 {
     if(str[start]!=str[end]){
         cout<<"not pallindrome";
         return 0;
     }
     start++;
     end--;
 }
 cout<<"pallindrome";
}

return pallindrome with function


#include <iostream>
using namespace std;
int pallindrome(string str)
{
 int start=0;
 int end=str.length()-1;
 while(start<end)
 {
     if(str[start]!=str[end]){
         cout<<"not pallindrome";
         return 0;
     }
     start++;
     end--;
 }
 cout<<"pallindrome"; 
 return 0;
}
int main() {
 string str="welcew";
 pallindrome(str);
}


anagram by Mahesh sir      if str2 has equal and same alphabet as str1 then it is anagram

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  string str1="now";
  string str2="won";
  bool found=false;
  
  if(str1.length()!=str2.length())
  {
      cout<<"not an anagram";
      return 0;
  }
  
  for(int i=0; i<str1.length(); ++i)
  {
  for(int j=0; j<str2.length(); ++j)
      {
                  found = false;
            if(str1[i]==str2[j])
            {
                str2[j]='#';         if same alpha comes then it makes it # to remember
                found = true;
                break;
            }
      }
      if(!found){
          cout<<"not anagram";
          return 0;
      }
  }
      cout<<"anagram";
}


valid paraintheisis
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  string str1="[({})]";
  int squr=0;
  int curlu=0;
  int paran=0;
  
  for(int i=0; i<str1.length(); ++i)
  {
      if(str1=='['){
          squr++;
      }
      
      else if(str1=='('){
          curly++;
      }
      
       else if(str1=='{'){
          paran++;
      }
       else if(str1==']'){
          squr--;
      }
       else if(str1==')'){
          curly--;
      }
       else if(str1=='}'){
          paran--;
      }

      else if(squr<0 || curly<0 || paran<0){

        cout<<"not valid";
        return 0;
     }
      
  }

  if (squr==0 && culy==0 && paran==0){

    cout<<"valid";
  }
  else {
      cout<<"not valid";
 }
  
}


structure by Mahesh sir        // structure is user defined datatype

#include <iostream>
using namespace std;
struct classe{
    int roll=10;
    string name="jatin";
    int age=34;
    string city="sehore";
};
int main() {
    classe p;        // call here
   cout<<p.roll<<endl;
   cout<<p.name<<endl;
   
   
   classe r;        // another function can call here just like r
   r.roll=232;
   cout<<r.roll<<endl;
   cout<<p.age<<endl;
   cout<<r.city;
}

result{
10
jatin
232
34
sehore

}


structure call by function

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct classe{
    int roll=10;
    string name="jatin";
    int age=34;
    string city="sehore";
    
    void show(){
        cout<<roll<<endl<<name;
    }
}p;               // another way to call...
int main() {

p.show();
  
}           result   10, jatin



pointer by Mahesh sir (*)

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main (){
    int a=10;
    int*p=&a;
    
    cout<<*p;  it gives value
}
result=10;

#include <iostream>
using namespace std;
int main (){
    int a=10;
    int*p=&a;
    
    cout<<p;  it gives address
}
result  [ 0x7ffe32615c74 ]


more with pointer

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct employe{
  
  int salary;
  string name;
    
};
int main() {

employe p;
p.name="jatin";
p.salary=50000;

employe *a;
a=&p;

cout<<a->name<<endl;        [->]  it is this varaible
cout<<a->salary;


}

self refrencing with pointer to access data or different variable


#include <iostream>
using namespace std;

struct employe{
   
   int salary;
   string name;
   employe*link=NULL;
   
     
};
int main() {
    
    employe p1,p2;
    p1.salary=20000;
    p1.name="jatin";
    p1.link=&p2;
    
    p2.name="himanshu";
    p2.salary=70000;
    p2.link=&p1;
    
    cout<<p2.link->name;
    cout<<p2.link->salary;
    
    cout<<"\n======================\n";
    
    cout<<p1.link->name;
    cout<<p1.link->salary;
    
    


}

cnstrutor of class by Mahesh sir

* class is private type of class   we add public to make it public *


Three types of constructor are there
1=default constructor
2=parameterised
3=copy constructor   // it has two types also
  a=shallow constructor       b= deep constructor


#include <iostream>
using namespace std;
class student{
   
  public:                                      // to make public
  student(){                                   // default constructor
      cout<<"constructor activated";
  }
  
  student(int a, int b){                       // parameterised constructor 
     cout<<a+b;
  }
    
};
int main() {
  student a;                        // call default constructor

  student(5,7);                      // call parameterised constructor 

}

 shallowcopy constructor


#include <iostream>
using namespace std;

class shallowcopy{
   
   int a,*p;
   public:
   shallowcopy(int x, int y){
       a=x;
       p=new int;
       *p=y;
   }
   shallowcopy(shallowcopy &obj){
       a=obj.a;
       p=obj.p;
   }
   void update(){
       a=a+1;
       *p=*p+1;
   }
   void show(){
       cout<<"value of a"<<a<<endl;
       cout<<"address of p"<<p<<"value of p"<<*p<<endl;
   }
};
int main() {
   shallowcopy obj1(4,5);
   shallowcopy obj2(obj1);
   
   obj1.update();
   obj2.show();
   obj1.show();
}

deep copy constructor

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class deep{
   
   int a,*p;
   public:
   deep(int x, int y){
       a=x;
       p=new int;
       *p=y;
   }
   deep(deep &obj){
       a=obj.a;
       p=new int;
       *p=*(obj.p);
   }
   void update(){
       a=a+1;
       *p=*p+1;
   }
   void show(){
      
       cout<<p<<endl<<*p;
   }
};
int main() {
   deep obj1(4,5);
   deep obj2(obj1);
   
   obj1.update();
   obj1.show();
   obj2.show();
}




inheritance with self constructor

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class teacher{
    public:
    teacher(){
        cout<<"teacher"<<endl;
    }
};

class artist{
    public:
    artist(){
        cout<<"artist"<<endl;
    }
};

class person:public teacher,public artist{
    public:
   person(){
       cout<<"person";
   }
};
int main() {
person obj;
}




singlelevel inheritance

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class person{
 public:
 string name="jatin";
 int age=23;
};
class student:public person{
  public:
  void show(){
      cout<<name<<age;
  }
};
int main() {
student obj;
obj.show();
}

multi-level inheritance

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class person{
 public:
 string name="jatin";
 int age=23;
};
class student:public person{
  public:
  void show(){
      cout<<name<<age;
  }
};

class teacher:public student{
    public:
    void display(){
        cout<<age<<name;
    }
};
int main() {
teacher obj;
obj.display();
}

multiple inheritance

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class teacher{
    public:
    string name="jatin";
    int age=23;
};

class artist{
    public:
    int roll=23232;
};

class person:public teacher,public artist{
    public:
    void show(){
        cout<<age<<name<<roll;
    }
};
int main() {
person obj;
obj.show();
}

herirical inheritance

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class teacher{
    public:
    teacher(){
        cout<<"teacher"<<endl;
    }
};

class artist:public teacher{
    public:
    artist(){
        cout<<"artist"<<endl;
    }
};

class person:public teacher{
    public:
   person(){
       cout<<"person";
   }
};
int main() {
person obj;
artist obj1;
}

hybrid inheritance

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class teacher{
    public:
    teacher(){
        cout<<"teacher"<<endl;
    }
};

class artist:public teacher{
    public:
    artist(){
        cout<<"artist"<<endl;
    }
};

class person:public teacher{
    public:
   person(){
       cout<<"person"<<endl;
   }
};

class basee: public artist,public person{
    public:
basee(){
 cout<<"base"<<endl;
}
};
int main() {                                  
basee obj;
}



operator +(number )

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class number{
   
   int num;
   public:
   number(int n=0){
       num=n;
   }
   void operator +(number &obj){
       int ans;
       ans=num+obj.num;
       cout<<ans;
   }
  
};
int main() {
number obj1(5);
number obj2(6);
obj1+obj2;

return 0;
}

virtual polymorphism


#include <iostream>
using namespace std;

class A{
  
  public:
  virtual void show(){
      cout<<"class A\n";
  }
};

class B: virtual public A{
  
  public:
  void show(){
      cout<<"class B\n";
  }
};

class C: virtual public A{
   public:
   void show(){
       cout<<"class C";
   }
};

class D: public B, public C{
    public:
    void show(){
        cout<<"class D";
    }
    
};

int main() {
A*obj;
A obj1;
B obj2;
C obj3;
D obj4;
obj=&obj3;
obj->show();

}


static function

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class bank{
   public:
   static int amount;
   void showamount(int x){
       amount=amount-x;
       cout<<"amount = "<<amount<<endl;
   }
};

int bank::amount=10;

int main() {

bank obj1;
obj1.showamount(2);
cout<<endl;
bank obj2;
obj2.showamount(6);
}

static member function

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class bank{
   public:
   static int amount;
   
   static void showamount(int x){
       amount=amount-x;
       cout<<"amount = "<<amount<<endl;
   }
};

int bank::amount=10;

int main() {

bank obj1;
obj1.showamount(2);
cout<<endl;
bank obj2;
obj2.showamount(4);

bank::showamount(3);
}


























DSA starts from here ========================================================================================
// BY VIKAS SIR

//   1  =   bubble sort method


#include <iostream>
using namespace std;
void bubble(int arr[],int s)
{
  int temp;
  for(int i=0; i<s;++i)
  {
      for(int j=0; j<s-i-1; ++j)
      {
         if(arr[j]>arr[j+1]){
             temp=arr[j+1];
             arr[j+1]=arr[j];
             arr[j]=temp;
         } 
          
      }
      
  }
  for(int i=0;i<s;++i){
          cout<<arr[i]<<"\n";
      }
}

int main() {
  int arr[]={11,55,9,88,40};
  int s = sizeof(arr)/sizeof(arr[0]);
  bubble(arr ,s);
}
// ans arrange arr in ascending order

//  2 =  Insertion Sort
