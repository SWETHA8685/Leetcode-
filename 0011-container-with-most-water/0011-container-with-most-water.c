int maxArea(int* height, int heightSize) {
    int max=0;
    int r=heightSize-1;
    int l=0;
    int w,area=0;
   while(l<r)
     {
        int h=0;
        if(height[l]<height[r]){
            h=height[l];
        }
        else
        {
            h=height[r];
        }
        w=r-l;
        area=h*w;
        if(area>max)
        {
            max=area;
        }
        if(height[l]<height[r])
        {
            l++;
        }
        else
        {
            r=r-1;
        }
        
     }
     return max;
}