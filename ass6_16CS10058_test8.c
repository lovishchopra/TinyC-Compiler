int prints(char *c);
int printi(int i);
int readi(int *eP);


int main () {
  int x, y, z;
  int eP;
  prints("Enter a number between 1 and 5 :\n");
  x = readi(&eP);

  if(x>5) 
  {
  	prints("Wrong Number");
  }
  else if(x<1)
  {
  	prints("Wrong number");
  }
  else
  {
  	z=1;
  	for(y=0;y<x;y++)
  	{
  		z=z*y;
  	}

  	prints("Factorial of x is: ");
  	printi(z);
  }
  return 0;
}