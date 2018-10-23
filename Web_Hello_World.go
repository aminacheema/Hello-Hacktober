//Hello Bunder here from Indonesia

package main

import ( "fmt"
         "net/http"
        )
        
func main(){
      http.HandleFunc("/"), hai)
      http.ListenAndServe(":8080", nil)
}

func hai(w http.ResponseWriter, r *http.Request){
      fmt.Fprintf(w, "Halo Dunia")
}
