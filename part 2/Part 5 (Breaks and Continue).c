<<<<<<< Updated upstream
#include<stdio.h>
#include<stdbool.h>
int main(){
int i;
//Break
for (i = 0; i < 10; i++) {
  if (i == 6) {
    break;
  }
  printf("%d\n", i);
}

//Continue
int i2;

for (i2 = 0; i2 < 10; i2++) {
  if (i2 == 5) {
    continue;
  }
  printf("%d\n", i2);
}
//Break and Continue In While Loop
int i3=8;
while (i3<15){
    if(i3==12){
            i3++;
        continue;
    }
        printf("%d\n",i3);
        i3++;
}


int i13=8;
while (i13<15){
    if(i13==12){
        break;
    }
        printf("%d\n",i13);
        i13++;
}




return 0;
}
=======
#include<stdio.h>
#include<stdbool.h>
int main(){
int i;
//Break
for (i = 0; i < 10; i++) {
  if (i == 6) {
    break;
  }
  printf("%d\n", i);
}

//Continue
int i2;

for (i2 = 0; i2 < 10; i2++) {
  if (i2 == 5) {
    continue;
  }
  printf("%d\n", i2);
}
//Break and Continue In While Loop
int i3=8;
while (i3<15){
    if(i3==12){
            i3++;
        continue;
    }
        printf("%d\n",i3);
        i3++;
}


int i13=8;
while (i13<15){
    if(i13==12){
        break;
    }
        printf("%d\n",i13);
        i13++;
}




return 0;
}
>>>>>>> Stashed changes
