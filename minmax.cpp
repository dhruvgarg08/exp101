    #include <iostream>
    #include <algorithm>
    using namespace std;
    
    struct demo
{
	//array declared inside structure
	int arr[100];
};

    struct demo  takeArrayInput(){
        struct demo demo_mem;
        int n;
        cout<<"enter the num of input \n";
        cin>>n;
        /*enter number*/
        cout<<"enter "<< n<<" inputs \n";
        for(int i=0;i<n;i++){
            cin>>demo_mem.arr[i];
        }
    for(int i=0;i<n;i++){
        cout<<demo_mem.arr[i]<<endl;}

        return demo_mem;
    } 

    void printminmax(struct demo  dm){
    using namespace std;
    int *min = std::min_element(std::begin(dm.arr), std::end(dm.arr));
    int *max = std::max_element(std::begin(dm.arr), std::end(dm.arr));10

    std::cout << "The min element is " << *min << std::endl;
    std::cout << "The max element is " << *max << std::endl;

}
    int main()
    { 

        struct demo dm = takeArrayInput();
        printminmax(dm);
        return 0;
    }


   

