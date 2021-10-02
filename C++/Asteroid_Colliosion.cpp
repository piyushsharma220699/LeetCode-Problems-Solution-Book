//Problem statment
/* We are given an array asteroids of integers representing asteroids in a row.
For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.
Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are the same size, both will explode. Two asteroids moving in the same direction will never meet.
*/

vector<int> asteroidCollision(vector<int>& asteroids) {
        
        stack<int>s;
        vector<int>res;
        for(int i=0;i<asteroids.size();i++)
        {
            if(s.empty()|| asteroids[i]>0 || s.top()<0)
            {
                s.push(asteroids[i]);
            }
           else if(s.top()<=-1*asteroids[i])
           {
               
              if(s.top()<-1*asteroids[i])
              {
                  i--;
              }
               s.pop();
               
              
           }
            
        }
        
        while(!s.empty())
        {
            int top=s.top();
            res.push_back(top);
            s.pop();
            
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
