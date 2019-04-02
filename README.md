# Syllabus for BIOS823 (2019)

- BIOS 823 (Biomedical Big Data) explains what is typically meant by the term *Big Data*, the challenges with Big DAta, and common strategies for the processing and analysis of Big Data. The course examples are in Python and fluency in the language is expected - BIOS 821 and STA 663 are appropriate pre-requisites. The core topics are how to manage data and how to make computation scalable, with applications to the analysis of structured, semi-structured and unstructured data, especially from biomedical contexts. A draft syllabus with more details is viewable at 

## Part 1: Managing data

### 1. Data, pipelines and functional programming in Python

- Data pipelines
- Why functional programming?
- Use of lambdas and higher-order functions
- Using `toolz` to build lazy pipelines

### 2. Open data and the FAIR guidelines

- Why open data?
- The FAIR guidelines
- Data standards and ontologies

### 3. Data sharing APIs: REST and GraphQL

- The JSON formats
- REST APIs
- GraphQL APIs

### 4. Fast local and in-memory storage

- Memory mapping in `numpy`
- HDF5 and `h5py`
- Apache Arrow and Feather
- Using `odo` for out-of-memory conversion

### 5. Relational database concepts

- Relational database management systems (RDBMS)
- Tuples and set operations
- The database schema
- Tables and views
- Primary and foreign keys
- Indexing and optimization
- ACID transactions
- Database migrations

### 6. Using SQL Part 1: Creation and manipulation

- Normalized an denormalized data
- The stages of data normalization
- The CREATE statement
- The INSERT statement
- Adding indexes

### 7. Using SQL Part 2: Basic queries and sub-queries

- The SELECT statement
- Filtering
- Joins and semi-joins
- Sub-queries
- Using explain

### 8. Using SQL Part 3: Aggregate and window queriers

- Using Aggregate functions
- Using Window functions
- Server-side custom functions

### 9. NoSQL database concepts

- Types of NoSQL databases
- ACID and  BASE
- Trade-offs (when to use SQL, key-value, document, graph and column family)

### 10. Key-value databases: Redis

- What is a key-value database?
- Typical uses of Redis
- Basic operations with Redis
- Usage example

### 11. Document databases: Mongodb

- What is a document database?
- Typical uses of MongoDB
- Basic operations with MongoDB
- Usage example

### 12. Graph database: Neo4j

- What is a graph database?
- Graphs and operations on graphs
- Typical uses of Neo4j
- The Cypher Query Language

### 13. Column family databases: Cassandra

- What is a column family database?
- Typical uses of Cassandra
- The Cassandra Query Language
- CQL versus SQL

### Midterm Exam

## Part 2: Making computation scalable

### 14. Asynchronous computation

- Concurrent, parallel and distributed
- Why asynchronous programming?
- Latency and resource starvation
- I/O and computation bottlenecks
- Generators and Coroutines
- Coroutines and tasks
- Sending messages to coroutines, threads and processes
- The event loop
async and await

### 15. Multi-core computation

- Amdahl and Gustaffson laws
- Threads and processes
- Embarrassingly parallel problems
- Shared memory probems
- Deadlocks and race conditions
- Low level parallel programming with `multiprocessing`
- Using `concurrent.futures` and `multiprocessing` pools
- Using `ipyparallel` for interactive parallelism

### 16. Native code compilation, parallel execution and the GIL

- Using parallel targets in `numba`
- Using `OpenMP` with Cython
- Standardization of Parallelism TS	with `pybind11`

### 17. GPU computing with Python CUDA

- Using `numba` CUDA
- Targeting the GPU with `vectrorize` and `guvectorize`

### 18. Distributed programming concepts and Spark

- Why distributed computing?
- HDFS
- YARN and other resource managers
- Spark, MapReduce and other compute engines
- The Spark context
- The data flow DAG
- Resilient Distributed Datasets (RDD)
- Key-value RDDs
- Creating and saving RDDs
- Actions and Transforms
- Caching RDDs
- Accumulators and Broadcast variables
- Using UDFs (User Defined Functions)
- Example: Hello, word count!

### 19. Spark SQL

- The Spark session
- Creating and saving a DataFrame
- DataFrame operations
- DataFrame and RDD conversions
- Using SQL to query a DataFrame
- Caching a DataFrame
- Using vectorized UDFs
- Column family databases
- Columnar data stores arrow and parquet

### 20. Spark MLLib

- Basic statistics with Spark
- Pipelines
- Data processing
- Clustering
- Classification and regression
- Collaborative filtering
- Model selection

### 21. Spark Streaming

- Streaming concepts
- StreamingContext
- Discretized Streams
- Sources of data
- Transforms
- Checkpoints
- DataFrame operations
- Machine learning operations

### 22. Spark GraphFrames

- Classic graph algorithms
- Creating GraphFrames
- Queries and stateful queries
- Working with subgraphs
- Standard graph algorithms

### 23. DevOps and containers

- What is DevOps?
- Practices and tools
- Source code control
- Using Docker containers

### 24. Microservices and container orchestration

- What are microservices?
- Container orchestration with `kubernetes`

### 25. Data Center and Cloud Computing

- The Duke Compute Cluster (DCC)
- Using `slurm` to run a job
- Why cloud computing?
- AWS, Azure and Google compute
- Setting up account
- Running a Docker container
- Running a virtual machine
- Running a Hadoop cluster

### Final Exam