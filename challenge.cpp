#include <stdio.h>
#include <omp.h>
#include <string>
#include <iostream>
using namespace std;
const char n[]=R"(#include <stdio.h>
#include <omp.h>
#include <string>
#include <iostream>
using namespace std;
const char n[]=R"(%s%c";
int main(){
    omp_set_num_threads(omp_get_max_threads());
    #pragma omp parallel for default(none) shared(n)
    for(int i=0; i<750000; i++){
        string f="file"+to_string(i)+".txt";
        FILE *fp=fopen(f.c_str(),"w");
        fprintf(fp,n,n,41);
        fclose(fp);
    }
}
)";
int main(){
    omp_set_num_threads(omp_get_max_threads());
    #pragma omp parallel for default(none) shared(n)
    for(int i=0; i<750000; i++){
        string f="file"+to_string(i)+".txt";
        FILE *fp=fopen(f.c_str(),"w");
        fprintf(fp,n,n,41);
        fclose(fp);
    }
}
