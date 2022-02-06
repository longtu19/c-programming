int func(int oldVal, int newVal) {

    int mask = ((1 << 5) – 1) << 1);

    int newFld = (newVal << 1) & mask;

    int newFull = oldVal & (~mask);

    int result = newFld | newFull;

    return result;

}

int main(){
    printf(func(00000000, 11111111));
}