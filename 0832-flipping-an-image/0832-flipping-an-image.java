class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        
        for(int[] arr : image){
            
            for(int i = 0; i < (image.length + 1) /2 ; i++){

                int temp = arr[i] ^ 1;
                arr[i]= arr[image.length-i-1] ^ 1;
                arr[image.length-i-1] = temp;
            }
        }
        return image;
    }
}