#include <stdio.h>


int main(){
    int arr[]= {1,2,3,4,5,6};
    printf("%p\n", arr);//首元素的地址
    printf("%p\n", &arr[0]);//首元素的地址
    printf("%p\n", &arr);//整个数组的地址   &arr
    printf("%d\n", *arr);
    printf("%d\n", sizeof(arr));//整个数组的地址   sizeof(arr)

    return 0;
}

//冒泡排序


// int main(){
//     int arr[3][4]= {{1,2,3},{4,5,6},{7,8,9}};

//    int i= 0;
//    int j= 0;
//    for(i= 0; i<3; i++){
//         for(j= 0;j<4 ;j++){
//             //printf("%d ", arr[i][j]);
//             printf("[%d][%d]=%p\n", i, j, &arr[i][j]);
//    } 
//    printf("\n");
//    }
//     return 0;
// }


// int main(){
//     char arr[]= "abcd";
//     int a= sizeof(arr);
//     printf("%d", a);
//     return 0;
// }