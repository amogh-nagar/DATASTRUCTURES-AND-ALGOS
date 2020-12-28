 public static int lonelyInteger(int[] a) {
        
        int result = 0;
        
        for(int i : a) {
            result = result ^ i;
        }
        
        return result;
    }
    