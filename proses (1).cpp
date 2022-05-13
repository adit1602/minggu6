#include "../base.h"

void BaseProject::proses(){
rata2Alpro = (20/100*alproTugas) + (35/100*alproUTS) + (45/100*alproUAS);
rata2Pweb = (20/100*pwebTugas) + (35/100*pwebUTS) + (45/100*pwebUAS);
rata2Matdis = (20/100*matdisTugas) + (35/100*matdisUTS) + (45/100*matdisUAS);
}

int main(){
  BaseProject base;
  base.proses();
}