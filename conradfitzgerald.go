package main

import (
  "fmt"
  "runtime"
  "time"
  "os"
)

check(err error) {
  if err != nil {
    panic(err)
  }
}

func getTime() string {
  return string(time.Now())
}

func getOSInfo() string string {
  host, err := os.Hostname()
  check(err)
  return runtime.GOOS(), host
}

func main() {
  os, host := getOSInfo()
  fmt.Println("Hello, ", host, "!")
  fmt.Println("You are running ", os)
  fmt.Println("It is currently ", getTime())
  fmt.Println("Not your average helloworld, eh?"
  fmt.Println()
  fmt.Println("Remember to keep pushing yourself, friends!")
  fmt.Println("Advent of Code is coming soon, get ready!")
}
