using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class TileMetrics {

	public static WireShape GetWireShape (bool[] outlets) {
		int sum = 
			(outlets [0] ? 1 : 0) + 
			(outlets [1] ? 1 : 0) + 
			(outlets [2] ? 1 : 0) + 
			(outlets [3] ? 1 : 0);

		//Used by empty spaces (duh)
		if (sum == 0) {
			return WireShape.Empty;
		}
		//Single case (used by lamps):
		else if (sum == 1) {
			return WireShape.Single;	
		}
		//T case:
		else if (sum == 3) {
			return WireShape.TShape;	
		}
		//X case (cross): 
		else if (sum == 4) {
			return WireShape.Cross;
		} 
		//L or I (bridge) case:
		else {
			//If tile has opposing outlets, its a bridge
			if (outlets [0] && outlets [2] || outlets [1] && outlets [3])
				return WireShape.Bridge;
			return WireShape.LShape;
		}
	}
		
	public static float GetWireRotation (bool[] outlets) {
		int orientation = 0;

		WireShape shape = GetWireShape (outlets);
		switch (shape) {
		case WireShape.Single:
			//Find outlet (there is only one)
			for (int i = 0; i < 4; i++) {
				if (outlets [i]) {
					orientation = i;
					break;
				}
			}
			break;
		case WireShape.Bridge:
			orientation = (outlets[(int)GridDirection.E] ? 1 : 0);
			break;
		case WireShape.LShape:
			//Tricky
			for (int i = 0; i < 4; i++) {
				int next = (i + 1) % 4;
				if (outlets [i] && outlets [next])
					orientation = i;
			}
			break;
		case WireShape.TShape:
			//Find empty outlet (there is only one)
			for (int i = 0; i < 4; i++) {
				if (!outlets [i]) {
					orientation = i;
					break;
				}
			}
			break;
		}
		//There is no case for cross and empty (not necessary)

		//Negative rotation for some reason (I'm not sure why)
		return -90f * orientation;
	}

	public static bool[] EmptyOutlets () {
		bool[] outlets = new bool[4];
		//Might not be necessary
		for (int i = 0; i < 4; i++)
			outlets [i] = false;
		return outlets;
	}
}
