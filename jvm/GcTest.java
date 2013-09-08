public class GcTest{
    private static final int _1MB = 1024 * 1024;
    
    /**
     * VM参数:-verbose:gc -Xms20M -Xmx20M -Xmn10M -XX:+PrintGCDetails -XX:SurvivorRatio=8
     */
    public static void testAllocation(){
        byte[] a1,a2,a3,a4;
        a1 = new byte[2 * _1MB];
        a2 = new byte[2 * _1MB];
        a3 = new byte[2 * _1MB];
        a4 = new byte[5 * _1MB];
    }
    
    
    /**
     * VM参数:-verbose:gc -Xms20M -Xmx20M -Xmn10M -XX:+PrintGCDetails -XX:SurvivorRatio=8 -XX:PretenureSizeThreshold=3145728
     */
    public static void testPretenureThreshold(){
        byte[] a;
        a = new byte[4 * _1MB];
    }
    
    
    public static void testTenureThreshold(){
        byte[] a1,a2,a3,a4;
        a1 = new byte[_1MB / 4];
        a2 = new byte[_1MB / 4];
        
    }
}

