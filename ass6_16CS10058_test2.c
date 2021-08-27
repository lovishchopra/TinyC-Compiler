//This test file extensively checks the expressions both boolean and algebraic
//and also the funciton calling and returning process in detail

int prints(char *c);
int printi(int i);
int readi(int *eP);
int main()
  {
    int i=0;
    int j;
    j=100;
    do
      {
        i=i+2;
        j=j-1;
      }while(i<7);

    for(i=0;i<3;i++)
      {
        j=j+5;
        j=j*4+8;
      }

    i=9;
    while(i>=5)
    {
      i--;
      j++;
    }
    int k=i+j;
    
    prints("Value of k is: ");
    printi(k);

  return 0;
}
