#include <iostream>
int* ValueStore()
{
    return (new int [2]);
}
int main()
{
    int Test_cases;
    std::cout<<"Test Cases\n";
    std::cin>>Test_cases;
    if(Test_cases>=1&&Test_cases<=100000)
    {
        int arr[Test_cases];
        int count=0;
           for(int i=1;i<=Test_cases;i++)
        {
                int *pointer=ValueStore();
                std:: cin>>*pointer>>*(pointer+1);
                // std:: cout<<*pointer<<*(pointer+1)<<"\n";
            if((*pointer)>=1&&(*pointer)<=1000000&&*(pointer+1)<=100000&&*(pointer+1)>=1)
            {
                while(1)
                {
                    if((*pointer)<=0)
                        {//std::cout<<1<<"\n";
                            arr[count++]=1;
                            break;
                        }
                    if(*(pointer+1)==0)
                    {
                     //  std::cout<<0<<"\n";
                        arr[count++]=0;
                        break;
                    }
                    *pointer=*pointer-*(pointer+1);
                    *(pointer+1)=*(pointer+1)/2;
                }
            }
        }
                for(int j=0;j<Test_cases;j++)
                    std::cout<<arr[j]<<" ";
    return 0;
    }

}
