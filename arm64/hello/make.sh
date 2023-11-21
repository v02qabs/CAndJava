gcc hello.c -shared -o libhello.so -I /usr/lib/jvm/java-17-openjdk-arm64/include -I /usr/lib/jvm/java-17-openjdk-arm64/include/linux

javac MyHello.java

java -Djava.library.path=. MyHello
