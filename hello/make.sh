gcc hello.c -shared -fPIC -o libhello.so -I $HOME/local/jdk8/include -I $HOME/local/jdk8/include/linux

javac MyHello.java

java -Djava.library.path=. MyHello
