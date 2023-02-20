
// visualize an array [_,_,_,_,_,_]
//                     t1        t2
//                      ->      <-
//Function to push an integer into the stack1.
void twoStacks :: push1(int x)
{
 if(top1>= top2 - 1) return; // if t1 crosses t2 so array is full
 arr[++top1] = x;
}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
 if(top1+1>=top2) return;   // if t2 crosses t1 so array is full
 arr[--top2] =x;
}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
 if(top1 == -1) return -1;
 int ans = arr[top1--];
 return ans;
}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
 if(top2 == size) return -1;
 int ans= arr[top2++];
 return ans;
}