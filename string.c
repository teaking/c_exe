//How pointer and string works in c

int main(){
  char *a1 = "Hello, World"; //pointer to constant string
  //it can point to something else but contents cannot be changed
  char a2[] = "Hell0, World"; //constant pointer to string
  //content can be changed but cannot be point to different string
  char a3[6] = "World";

  printf("%d, %d\n",sizeof(a1), sizeof(a2));
  //  a1[1] = 'u'; //undefined behaviour
    a1 = a2;
  printf("%s\n",a1);
  //  a2 = a3; //error as we try changing constant pointer string to different
  //string
}
