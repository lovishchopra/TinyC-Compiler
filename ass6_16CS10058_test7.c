
//Max of three numbers

int prints(char *c);
int printi(int i);
int readi(int *eP);

int p;

int main () {
  int x, y, z;
  int eP;
  prints("Enter three numbers :\n");
  x = readi(&eP);
  y = readi(&eP);
  z = readi(&eP);
  prints("Maximum is: ");
  if(x>=y)
    {
      if(x>=z)
      {
        printi(x);
      }
    }

  else
    {
      if(y>=z)
      {
        printi(y);
      }
      else 
      {
        printi(z);
      }
    }
  prints("\n");
  return c;
}