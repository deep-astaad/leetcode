class ParkingSystem {
public:
    int big_space=0,mid_space=0,small_space=0;
    ParkingSystem(int big, int medium, int small) {
        big_space = big;
        mid_space = medium;
        small_space = small;
        cout<<small_space<<" "<<mid_space<<" "<<big_space<<endl;
    }
    
    bool addCar(int carType) {
        if(carType == 3 && small_space > 0){
            small_space--;
            return true;
        }
    
        
        else if(carType == 2 && mid_space > 0){
            mid_space--;
            return true;
        }
        
        else if(carType == 1 && big_space > 0){
            big_space--;
            return true;
        }
        
        
        else{
            return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */