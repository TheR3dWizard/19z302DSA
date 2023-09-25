int power10(int exp){
    int res = 1;
    for(int i = 0;i<exp;i++){
        res = res*10;
    }
    return res;
}

int main(){
    printf("%d",15/10);
}