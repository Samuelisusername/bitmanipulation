int minBitFlips(int start, int goal) {
    uint32_t mask = 0x80000000;
    int count =0;
    int xor = start ^ goal;
    for(int i = 0; i<32; i++){
        if(((xor)&(mask>>i))){
            count++;
        }
    }

    return count;
}
