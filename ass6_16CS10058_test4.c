//test file to check basic statements, expression, readi and printi library 
//functions created in assignment 2
//also checks the recursive fibonacci function to check the function call and return methodology


int prints(char *c);
int printi(int i);
int readi(int *eP);

int main()
  {
    int *ptr;
    int i=10;
    ptr=&i;
    *ptr=*ptr/2;

    int j=100;
    ptr=&j;
    *ptr=*ptr-1;

    if(i==*ptr) i++;

    if(j==*ptr) j--;
    else i=j+5;
    
    int ans1=i;
    int ans2=j%5;
    prints("The values are: \n");
    printi(i);
    prints("\n");
    printi(j);
  }