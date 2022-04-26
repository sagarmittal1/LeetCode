class UndergroundSystem {
public:
    unordered_map <int, pair<string, int>> arrivals; 
    // {id,{stationName, time}}
    unordered_map <string, pair<int, int>> averages;
    // {stationName, {time, count}}
    
    UndergroundSystem() {}
    
    void checkIn(int id, string stationName, int t) {
        arrivals[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto checkin = arrivals[id];
        arrivals.erase(id);
        
        string path = checkin.first + "_" + stationName;
        averages[path].first += t - checkin.second;
        averages[path].second += 1;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string path = startStation + "_" + endStation;
        double ans = (averages[path].first * 1.0)/averages[path].second;
        return ans;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */