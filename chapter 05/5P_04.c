// Write a grade processing program.

#include <stdio.h>
#define N 8

void totalMean(int kor[], int math[], int total[], float mean[]){
    for(int i=0;i<N;i++){
        total[i] = kor[i] + math[i];
        mean[i] = total[i]/2.0;
    }
}

void totalSort(int id[], int kor[], int math[], int total[], int rank[], float mean[]){
    int temp;
    float tmp;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(total[i] < total[j]){
                temp = id[i]; id[i] = id[j]; id[j] = temp;
                temp = kor[i]; kor[i] = kor[j]; kor[j] = temp;
                temp = math[i]; math[i] = math[j]; math[j] = temp;
                temp = total[i]; total[i] = total[j]; total[j] = temp;
                temp = rank[i]; rank[i] = rank[j]; rank[j] = temp;
                tmp = mean[i]; mean[i] = mean[j]; mean[j] = tmp;
            }
        }
    }
}

void rankingSystem(int total[], int rank[]){
    int bef = total[0];
    int ranking = 1;
    int add = 0;
    rank[0] = 1;
    for(int i=1;i<N;i++){
        if(bef == total[i]){
            rank[i] = ranking;
            add++;
        }
        else{
            ranking += add + 1;;
            add = 0;
            rank[i] = ranking;
        }
        bef = total[i];
    }
}

int main()
{
    int id[N] = {9701, 9705, 9707, 9708, 9709, 9715, 9727, 9730};
    int kor[N] = {40, 55, 88, 67, 92, 82, 73, 86};
    int math[N] = {69, 73, 76, 55, 90, 82, 85, 65};
    int total[N], rank[N];
    float mean[N];
    totalMean(kor, math, total, mean);
    totalSort(id, kor, math, total, rank, mean);
    rankingSystem(total, rank);

    for(int i=0;i<N;i++){
        printf("%d %4d %d %d %3d %.1f\n", rank[i], id[i], kor[i], math[i], total[i], mean[i]);
    }

}
