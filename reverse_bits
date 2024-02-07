uint32_t reverseBits(uint32_t n) {
    uint64_t mask_left = 0x80000000;
    int mask_right = 1; 
    for(int i = 0;i<16; i++){
        int currleft = mask_left>>i & n;
        int currright = mask_right<<i &n;
        if(currleft){
            n|=mask_right<<i;
        }
        if(!currleft){
            n&= ~(mask_right<<i); 
        }
        if(currright){
            n|=mask_left>>i; 
        }
        if(!currright){
            n&=~(mask_left>>i);
        }
    }
    return n;
    
}
