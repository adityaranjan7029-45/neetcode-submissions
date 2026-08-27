class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st; // We will use a vector exactly like a stack
        
        for (int a : asteroids) {
            bool survived = true;
            
            // Collision happens ONLY IF stack top is moving Right (>0) 
            // AND current asteroid 'a' is moving Left (<0)
            while (!st.empty() && st.back() > 0 && a < 0) {
                
                // If the top asteroid is smaller, it explodes. 
                // The current asteroid 'a' continues to the next iteration to smash more.
                if (st.back() < abs(a)) {
                    st.pop_back();
                    continue; 
                }
                // If they are the same size, both explode.
                else if (st.back() == abs(a)) {
                    st.pop_back();
                }
                
                // If the top asteroid was larger or equal, our current asteroid 'a' dies.
                survived = false;
                break; // Stop checking collisions for this asteroid
            }
            
            // If asteroid 'a' destroyed everything in its path (or never collided), add it
            if (survived) {
                st.push_back(a);
            }
        }
        
        return st;
    }
};