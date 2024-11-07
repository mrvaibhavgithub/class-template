#include<iostream>
using namespace std;
template<class T>

class sorting{
    private:
    int min;
    T temp;
    
    public:
    void sort(T a[],int n)
    {
    for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
            if(min!=i)
            {
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
                
            }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    }
    
};
int main()
{
    int n;
    cout<<"\nenter the size:";
    cin>>n;
    
    char a[n];
    cout<<"\nenter the array element (character array)";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sorting<char>s;
    s.sort(a,n);
}