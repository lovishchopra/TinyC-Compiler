int prints(char *c);
int printi(int i);

void swapint(int* a, int* b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
  return;
}

int* assignment(int a)
{
  int* p = &a;
  return p;
}

int main(){
  int a,**b;
  a=3;
  *b = assignment(a);
  a++;
  a--;
  a=a+5*(a-1);
  a = **b+a;
  a = **b-a;
  swapint(&a,*b);

  prints("Done");
  printi(a);
  return 1;
}