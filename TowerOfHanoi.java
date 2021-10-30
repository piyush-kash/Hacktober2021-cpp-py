package Recursion;

public class TowerOfHanoi {
	
	public static void Toi(int disk,int Source,int Auxiliary,int destination) {
		if(disk==0) {
			return;
		}
		Toi(disk-1, Source, destination, Auxiliary);
		System.out.println("Move Disk 1 from Rod "+ Source + " to Rod " + destination);
		Toi(disk-1, Auxiliary, Source, destination);
	}
	public static void main(String[] args) {
		Toi(2, 1, 2, 3);
	}

}
