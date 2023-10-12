
typedef int (*op_ptr)(int,int);



int add(int x,int y){ return x + y ;}
int mult(int x, int y){ return x * y ;}

int select_fun(op_ptr op, int x, int y){
return op(x,y);
}

int main(int argc, char **argv){


int result_1 = select_fun(add, 5,4);
int result_2 = select_fun(mult, 4,4);

printf("result_1 = %d\n", result_1);
printf("result_2 = %d\n", result_2);
}
