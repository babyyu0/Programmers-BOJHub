import java.util.*;

class Solution {
    public int solution(int cacheSize, String[] cities) {
        int answer = 0;
        if(cacheSize == 0) {
            return cities.length * 5;
        }
        Queue<String> cache = new ArrayDeque<>();
        
        String polled = "";
        boolean flag;
        for(String city : cities) {
            // System.out.println(cache);
            city = city.toLowerCase();
            flag = false;
            for(int i = 0; i < cache.size(); i++) { //캐싱되어있는지 검사
                polled = cache.poll();
                if(polled.equals(city)) {
                    flag = true;
                    i--;
                } else {
                    cache.add(polled);
                }
            }
            
            if(flag) { //cache hit
                answer += 1;
                cache.add(city);
            } else { //cache miss
                answer += 5;
                if(cache.size() >= cacheSize) { //캐시가 모두 찼을 경우
                    cache.poll();
                }
                cache.add(city);
            }
        }
        // System.out.println(cache);
        
        return answer;
    }
}