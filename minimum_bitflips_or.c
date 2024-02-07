int minFlips(int a, int b, int c){
    int ab = a|b;
    if(ab == c){
        return 0;
    }
    int count=0; 
    uint64_t mask = 0x80000000;
    for(int i = 0; i<32; i++){
        if(ab & ~c & mask>>i){
            if(a & b & mask>>i){
                count+=2;
            }
            else count+=1;
        }
        else if(~ab & c & mask>>i){
            count+=1;
        }
    }
return count; 
}
