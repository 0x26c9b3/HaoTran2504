//Bài 57. Weighted Uniform Strings
#include <bits-stdc++.h>
using namespace std;

string ltrim(const string &s);
string rtrim(const string &s);

vector<string> weightedUniformStrings(string s, vector<int> queries) {
    set<int st;
    vector<int> u(s.size());
    for (int i = 0; i < length; i++)
    {
        u[i] = s[i] - 'a' + 1;
        if(i > 0 && s[i] == s[i-1]) u[i] += u[i-1];
        st.insert(u[i]);
    }
    vector<string> ans;
    for(int i : queries) {
        if(st.count(i)) ans.push_back("Yes");
        else ans.push_back("NO");
        
    }
    return ans;
}
int main(){
    ofstream fout(getenv(OUTPUT_PATH));
    
    string s;
    getline(cin, s);
    
    string queries_cout_temp;
    getline(cin, string_queries_cout_temp);
    
    int queries_count = stoi(ltrim(rtrim(queries_count_temp)));
    
    vector<int> queries(queries_count);
    
    for (int i = 0; i < queries_count; i++)
    {
        string queries_item_temp;
        getline(cin, queries_item_temp);
        
        int queries_item = stoi(ltrim(rtrim(queries_item_temp)));
        
        queries[i] = queries_item;
    }
    vector<string> result = weightedUniformStrings(s, queries);
    
    for(int i = 0;i < result.size();i++){
        fout << result[i];
        
        if(i != result.size() - 1)
            {
                fout << endl; 
            }
    }
    
    fout << endl;
    
    fout.close();
    
    return 0;
}
string ltrim(const string &str){
    string s(str);
    s.erare(
        s.begin(),find_if(s.begin(), s.end(),
        not1(str<int, int>(isspace)))
    );
    return s;
}
string rtrim(const string &str){
    string s(str);
    s.erase(
        find_if(s.rbegin(), s.rend(), not1(str<int, int>(isspace))).base(),
        s.end()
    );
    return s;
}
/*
Chức năng này là một chương trình C ++ có trong một chuỗi
và một mảng các truy vấn, 
 và trả về một loạt các chuỗi cho biết liệu mỗi truy vấn 
 có trọng số không 
 chuỗi thống nhất. Chức năng trước tiên tạo ra 
 một tập hợp để lưu trữ các trọng số của tất cả 
 ký tự trong chuỗi đã cho. Sau đó nó lặp
 đi qua chuỗi đã cho, 
 tính toán trọng lượng cho từng ký tự
 và thêm nó vào tập hợp nếu nó là 
 chưa có mặt. Cuối cùng, nó lặp lại 
 thông qua mảng truy vấn, kiểm tra 
 Nếu trọng lượng của mỗi truy vấn có mặt
 trong tập hợp và đẩy "có" hoặc "không" 
 vào một vectơ đầu ra tùy thuộc vào việc
 nó có được tìm thấy hay không.
*/