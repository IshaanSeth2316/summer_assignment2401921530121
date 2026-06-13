package music;

public interface Playable {
    void play();
}package music;

public interface Playable {
    void play();
}
package music.string;

import music.Playable;

public class Veena implements Playable {
    public void play() {
        System.out.println("Veena is playing melodious classical music.");
    }
}
package music.wind;

import music.Playable;

public class Saxophone implements Playable {
    public void play() {
        System.out.println("Saxophone is playing smooth jazz music.");
    }
}
package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {
    public static void main(String[] args) {

        // a. Veena instance
        Veena v = new Veena();
        v.play();

        // b. Saxophone instance
        Saxophone s = new Saxophone();
        s.play();

        // c. Using Playable reference
        Playable p1 = new Veena();
        Playable p2 = new Saxophone();

        p1.play();
        p2.play();
    }
}
