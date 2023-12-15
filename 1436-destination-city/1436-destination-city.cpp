class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
         unordered_map<string, int> cityDegreeMap;
        for(auto &path : paths){
            //for outward edge from a city give increament of one to the degree of city
            cityDegreeMap[path[0]]++;
            //for inward edge towards a city give decreament of minus one to the degree of city
            cityDegreeMap[path[1]]--;
        }
        //traverse you degree map to find out the city with -1 as the degree
        for(auto &cityDegPair : cityDegreeMap){
            if(cityDegPair.second == -1)return cityDegPair.first;
        }
        return "";
    }
};