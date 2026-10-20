int* constructRectangle(int area, int* returnSize) {
    int * result = malloc(2 * sizeof(int));
    *returnSize = 2; //C 要記得設定回傳長度return size
    for(int i = sqrt(area);i > 0;i--){
        if(area % i == 0){
            result[0] = area / i;
            result[1] = i;

            return result;
        }
    }
    return result;
}