//test file to check functions and iterations and also some of the
//functions created in assignment 2

int prints(char *c);
int printi(int i);
int readi(int *eP);

int main()
  {
    int a[10];
    int i;

    for(i=0;i<10;i++)
    {
      a[i]=i+1;
    }

    int sum=0;
    i=0;
    while(i<10)
      {
        sum=sum+a[i];
        i++;
      }
    return 0;
  }