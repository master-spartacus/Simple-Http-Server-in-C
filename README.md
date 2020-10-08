# Simple-Http-Server-in-C
This is a simple Http Server which will accept requests and parses them and resposnds to the web browser client.

The server will run on port number 10000.

# Build Instructions
step - 1
```
  git clone https://github.com/master-spartacus/Simple-Http-Server-in-C.git
```
step - 2
```
  cd Simple-Http-Server-in-C
  cd http-server
 ```
step - 3
```
  mkdir cmake-build
  cd cmake-build
```
step - 4
 ```
  cmake ..
  make
```
# Running the server
  Goto the bin directory and execute command ./HttpServer 
  
# Testing with client web browser
  1. Open your favorite browser and type localhost:10000 on the URL bar You'll see a output like
    ```
    Hello, I'm a Simple Http Server :D
    ```
  
  2. Type localhost:10000/*Path to index.html file provided in src directory* on the URL bar You'll see a output like 
  
     ```
     Today is : Monday
     Current time is : 4 PM : 39 : 614
     ```
