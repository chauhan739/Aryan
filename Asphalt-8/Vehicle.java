/**
 * @Vehicle is a class for defining every vehicle present in game by creating an object of this class
 */

public class Vehicle {
    private String m_Name;
    private VehicleType m_Type;
    private VehicleBrand m_Brand;
    private VehicleClass m_VehicleClass;
    private static int m_totalVehicles = 0;

    public Vehicle(VehicleClass vehicleClass, VehicleType type, VehicleBrand brand, String name) {
	m_VehicleClass = vehicleClass;
	m_Type = type;
	m_Brand = brand;
	m_Name = name;

	m_totalVehicles++;
    }
    
    public VehicleClass getVehicleClass() {
	return m_VehicleClass;
    }

    public VehicleType getType() {
	return m_Type;
    }

    public String getName() {
	return m_Name;
    }

    public VehicleBrand getBrand() {
	return m_Brand;
    }

    public static int totalVehicles() {
	return m_totalVehicles;
    }
}
