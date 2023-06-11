#include <vector>
namespace mtx{
    //class Matrix{
    //    protected: 
    //        int n; //amount of rows
    //        int m; //amount of cols
    //        std::vector<std::vector<int>> matrix;
    //        void updVal(int i, int j, int val);
    //        void initMatrix();
    //};


    class SquareMatrix{
        
        public:
            int n;
            int m;
            std::vector<std::vector<int>> matrix;
            void updVal(int i, int j, int val);
            int valueAt(int i, int j);
        protected:
            void initMatrix();
            
            

    };
}
