

int prints(char *c);
int printi(int i);
int readi(int *eP);


int add (int a, int b) {
  int ans;
  ans=a+b;
  prints("Leaving the function");
  return ans;
}

int main () {
  int x, y, z;
  int eP;
  prints("Enter two numbers :\n");
  x = readi(&eP);
  y = readi(&eP);
  z = add(x,y);
  prints("Sum is equal to ");
  printi(z);
  prints("\n");
  return c;
}