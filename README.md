# GPS-Navigation-System
### 👥 Contributors
->Sunayana Sinha
->Arun Saini
<a href="https://github.com/your-username/repo-name/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=your-username/repo-name" />
</a>
# 🚀 Chandigarh Smart Route Finder (Dijkstra Algorithm in C)

A simple yet powerful C-based project that finds the **shortest path between major locations in Chandigarh** using the **Dijkstra Algorithm**.

This project simulates a mini navigation system (like a lightweight Google Maps 🗺️) using graph theory and real-world locations.

---

## 📌 Features

* 📍 Real-world Chandigarh locations mapped as graph nodes
* 🧠 Implementation of Dijkstra’s Shortest Path Algorithm
* 🛣️ Displays shortest distance between two places
* 📊 Prints the actual path using location names (not just numbers)
* 🧾 User-friendly menu showing all available places
* 🔄 Scalable design (easily add more locations)

---

## 🗺️ Locations Included

* Sector 17 Plaza
* Rose Garden
* PGI Hospital
* Sukhna Lake
* Rock Garden
* Elante Mall
* Sector 35 Market
* Tribune Chowk
* Chandigarh Railway Station
* Chandigarh Airport
* Panjab University
* ISBT Bus Terminal
* Mohali IT Park
* Chandigarh University
* Zirakpur
* Kharar
* Derabassi
* Sector 43 Bus Stand

---

## ⚙️ How It Works

The project represents locations as **nodes** in a graph and distances as **edges**.

It uses the **Dijkstra Algorithm** to:

1. Start from a source node
2. Explore all possible shortest paths
3. Select the minimum distance path
4. Trace back and display the full route

---

## 💻 Technologies Used

* Language: **C**
* Concepts:

  * Graphs (Adjacency Matrix)
  * Greedy Algorithms
  * Shortest Path Algorithms
  * Data Structures (Arrays)

---

## ▶️ How to Run

1. Compile the code:

   ```bash
   gcc program.c -o route
   ```

2. Run the program:

   ```bash
   ./route
   ```

3. Select source and destination using index numbers

---

## 📸 Sample Output

```
Available Places:
0: Sector 17 Plaza
1: Rose Garden
...
17: Sector 43 Bus Stand

Enter source: 0  
Enter destination: 13  

From: Sector 17 Plaza  
To: Chandigarh University  
Shortest Distance: 9 km  

Path:  
Sector 17 Plaza -> Chandigarh University
```

---

## 🧠 Learning Outcomes

* Practical understanding of Dijkstra Algorithm
* Graph representation using adjacency matrix
* Handling real-world mapping problems in C
* Improving user-friendly output design

---

## 🚧 Future Improvements

* 🔤 Take input using place names instead of numbers
* 🖥️ Add GUI interface
* 🌐 Integrate real-time map APIs
* 📍 Add traffic-based dynamic routing
* 📱 Convert into mobile/web application

---

## ⚠️ Limitations

* Static graph (no real-time updates)
* Distances are approximations
* No traffic or live navigation

---

## 👨‍💻 Author

Developed by a Computer Science student as a mini-project to demonstrate graph algorithms in real-world scenarios.

---

## ⭐ Final Note

This project shows how **core computer science concepts like graphs and algorithms** can be applied to solve real-world navigation problems.

If this helped or inspired you, consider improving it further 🚀

