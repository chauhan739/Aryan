import java.util.ArrayList;

public class BikesInGame {
    private ArrayList<Vehicle> m_bikes = new ArrayList<Vehicle>();
    
    public BikesInGame() {
	m_bikes.add(new Vehicle(VehicleClass.D, VehicleType.Bike, VehicleBrand.Suzuki, "GSX - RX50"));
	m_bikes.add(new Vehicle(VehicleClass.D, VehicleType.Bike, VehicleBrand.Kawasaki, "Z800"));
	m_bikes.add(new Vehicle(VehicleClass.D, VehicleType.Bike, VehicleBrand.KTM, "1290 Super Duke R"));
	m_bikes.add(new Vehicle(VehicleClass.C, VehicleType.Bike, VehicleBrand.Ducati, "SuperSport S"));
	m_bikes.add(new Vehicle(VehicleClass.C, VehicleType.Bike, VehicleBrand.Yamaha, "FZ - 10"));
	m_bikes.add(new Vehicle(VehicleClass.C, VehicleType.Bike, VehicleBrand.MV_Agusta, "F4 1000 R"));
	m_bikes.add(new Vehicle(VehicleClass.B, VehicleType.Bike, VehicleBrand.Ducati, "XDiavel S"));
	m_bikes.add(new Vehicle(VehicleClass.B, VehicleType.Bike, VehicleBrand.Suzuki, "Hayabusa"));
	m_bikes.add(new Vehicle(VehicleClass.A, VehicleType.Bike, VehicleBrand.Aprilia, "Tuono V4 1100 RR my2017"));
	m_bikes.add(new Vehicle(VehicleClass.S, VehicleType.Bike, VehicleBrand.Kawasaki, "Ninja H2R"));
	m_bikes.add(new Vehicle(VehicleClass.S, VehicleType.Bike, VehicleBrand.Dodge, "Tomahawk"));
    }
}
