// class Solution {
// public:
//     bool isValidSudoku(vector<vector<char>>& board) {
//         map<int,int>m1;
//         map<int,int>m2;
//         for(int i=0;i<9;i++){
//             for(int j=0;j<9;j++){
//                 m1[board[i][j]]++;
//             }
//         }
//         for(int i=0;i<9;i+=3){
//             for(int j=0;j<9;j+=3){
//                 for(int k=0;k<3;k++){
//                     for(int l=0;l<3;l++){
//                         m2[board[i+k][j+l]];
//                     }
//                 }
//             }
//         }

        

//         for(auto i:m1){
//             if(m1[i.first]>1){
//                 return false;
//             }
//         }
//         for(auto i:m1){
//             if(m2[i.first]>1){
//                 return false;
//             }
//         }

//         return true;

//     }
// };
// class Solution {
// public:
//     bool isValidSudoku(vector<vector<char>>& board) {
//         map<int, int> m1;
//         map<int, int> m2;
        
//         for (int i = 0; i < 9; i++) {
//             for (int j = 0; j < 9; j++) {
//                 if (board[i][j] != '.') {
//                     m1[board[i][j]]++;
//                 }
//             }
//             for (auto count : m1) {
//                 if (count.second > 1) {
//                     return false;
//                 }
//             }
//             m1.clear();
//         }
        
//         for (int i = 0; i < 9; i += 3) {
//             for (int j = 0; j < 9; j += 3) {
//                 for (int k = 0; k < 3; k++) {
//                     for (int l = 0; l < 3; l++) {
//                         if (board[i + k][j + l] != '.') {
//                             m2[board[i + k][j + l]]++;
//                         }
//                     }
//                 }
//                 for (auto count : m2) {
//                     if (count.second > 1) {
//                         return false;
//                     }
//                 }
//                 m2.clear();
//             }
//         }

//         return true;
//     }
// };
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    	

//      1-Rows--------------------

    	for(int t=0; t<9; t++){
    		vector<char> vv = board[t];
    	    std::sort(vv.begin(), vv.end());
    	    for(int a=0; a<8; a++){
    	        if(vv[a] == vv[a+1] && vv[a] != '.'){
    	        	return false;
    	        }
    	    }
    	}
//      2-3x3 Squares-------------

    	for(int i=0; i<9; i+=3) { 
	        for(int j=0; j<9; j+=3) {
	            vector<char> control;
	            for(int k=0; k<3; k++) {
	                for(int l=0; l<3; l++) {
	                    control.push_back(board[i+k][j+l]);
	                }
	            }
	            sort(control.begin(), control.end()); 
	            for(int k=1; k<control.size(); k++) {
	                if(control[k] == control[k-1] && control[k] != '.') {
	                    return false; 
	                }
	            }
	        }
    	}
    	

//      3-Columns------------------

    	for(int j=0; j<9; j++) { 
	        vector<char> control2;
	        for(int i=0; i<9; i++) {
	            control2.push_back(board[i][j]);
	        }
	        sort(control2.begin(), control2.end()); 
	        for(int k=1; k<control2.size(); k++) {
	            if(control2[k] == control2[k-1] && control2[k] != '.') {
	                return false; 
	            }
	        }
    	}
    	
    	return true;
    }
};