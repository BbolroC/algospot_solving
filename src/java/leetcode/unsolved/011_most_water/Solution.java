import java.io.*;
import java.util.*;

public class Solution {
	public static int maxArea(int[] height) {
		Map<Integer, Integer[]> layout = new HashMap<Integer, Integer[]>();
		for (int i = 0; i < height.length; i++) {
			if (layout.get(height[i]) == null) {
				layout.put(height[i], new Integer[]{i, i});
			} else {
				layout.get(height[i])[1] = i;
			}
		}
		Iterator<Map.Entry<Integer, Integer[]>> it = layout.entrySet().iterator();
		int _width = 0, _height = 0;
		int count = 0;
		while(it.hasNext()) {
			Map.Entry<Integer, Integer[]> curr = it.next();
			while(it.hasNext()) {
				Map.Entry<Integer, Integer[]> next = it.next();
				if (curr.getValue()[0] > next.getValue()[0]) {
					curr.setValue(new Integer[]{ next.getValue()[0], curr.getValue()[1] });
				}
				if (curr.getValue()[1] < next.getValue()[1]) {
					curr.setValue(new Integer[]{ curr.getValue()[0], next.getValue()[1] });
				}
				System.out.println("count: " + count++);
			}
			//System.out.println("key: " + curr.getKey() + ", minLoc: " + curr.getValue()[0] + ", maxLoc: " + curr.getValue()[1]);
			int indexLeft = curr.getValue()[0], indexRight = curr.getValue()[1]; 
			//System.out.println("indexLeft: " + indexLeft + ", indexRight: " + indexRight);
			_width =  indexRight - indexLeft;
			_height = (height[indexLeft] > height[indexRight]) ? height[indexRight] : height[indexLeft];
		}
		return _width * _height;
	}

	public static void main(String[] args) {
		int[] input = new int[]{3, 2, 4, 1, 2, 4, 1, 1};
		System.out.println(maxArea(input));
	}
}

