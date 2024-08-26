/* //*---   706. Design HashMap -------*/

// Design a HashMap without using any built-in hash table libraries.

// Implement the MyHashMap class:

// MyHashMap() initializes the object with an empty map.
// void put(int key, int value) inserts a (key, value) pair into the HashMap. If the key already exists in the map, update the corresponding value.
// int get(int key) returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key.
// void remove(key) removes the key and its corresponding value if the map contains the mapping for the key.

class MyHashMap {
  constructor() {
    this.data = new Array(1000);
  }

  put(key, val) {
    this.data[key] = val;
  }

  get(key) {
    // return this.data[key] ? this.data[key] : -1; error in one case
    let val = this.data[key];
    return val !== undefined ? val : -1;
  }

  remove(key) {
    delete this.data[key];
  }
}
