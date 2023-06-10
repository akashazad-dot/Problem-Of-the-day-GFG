void Rearrange(int arr[], int n)
        {
            // Your code goes here
            vector<int>neg;
            vector<int>pos;
            for(int i = 0;i<n;i++)
            {
                if(arr[i]<0)
                neg.push_back(arr[i]);
                else
                pos.push_back(arr[i]);
            }
            
            int count=0;
            for(int i=0;i<neg.size();i++)
            arr[count++] = neg[i];
            for(int i=0;i<pos.size();i++)
            arr[count++] = pos[i];
        }

