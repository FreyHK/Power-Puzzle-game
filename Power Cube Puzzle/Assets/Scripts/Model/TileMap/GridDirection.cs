public enum GridDirection {
	E, N, W, S
}

public static class GridDirectionExtensions {
	public static GridDirection Opposite (this GridDirection direction) {
		return (int)direction < 2 ? (direction + 2) : (direction - 2); 
	}
}