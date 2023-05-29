class ParkingSystem {
private:
int pos[3];
public:
    ParkingSystem(int big, int medium, int small) {
        pos[0]=big;
        pos[1]=medium;
        pos[2]=small;
    }
    
    bool addCar(int carType) {
        if(pos[carType-1]>0){
            pos[carType-1]--;
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
