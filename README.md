# Syllabus for BIOS823 (2019)

BIOS 823 describes the challenges faced by analysts with the increasing importance of large data sets, and the strategies that have been developed in response to these challenges. The core topics are how to manage data and how to make computation scalable. The data management module covers guidelines for working with open data, and the concepts and practical skills for working with in-memory, relational and NoSQL databases. The scalable computing module focuses on asynchronous, concurrent, parallel and distributed computing, as wel as the construction of effective workflows following following DevOps practices. Applications to the analysis of structured, semi-structured and unstructured data, especially from biomedical contexts, will be interleaved into the course. The course examples are primarily in Python and fluency in Python is assumed.

Pre-requisites:

- Fluency in Python (BIOS821, STA 663 or equivalent)

Course repository is at https://github.com/cliburn/bios-823-2019

### Overview and Review

#### 1. Introduction

- Adminstration
- Syllabus
- Python
- Data science and healthcare

#### 2. Foundations I (Python functional style)

- Data pipelines
- Why functional programming?
- Use of lambdas and higher-order functions
- Using `toolz` to build lazy pipelines

#### 3. Foundations II (Python data science stack)

- Using `numpy`
- Using `scipy`
- Using `pandas`
- Using `scikit-learn`
- Using `statsmodels`
- Using `matplotlib`
- Using `seaborn`

### Data storage and retrieval

#### 4. File types for data storage and ETL

- Delimited text files
- JSON
- XML
- HDF5
- Avro
- Parquet
- APIs for data sharing
- Using `odo`

#### 5. SQL database and warehouse schemas

- Tuples and set operations
- The database schema
- Tables and views
- Tables, rows, columns, cells
- Primary keys, foreign keys and referential integrity
- Normalization for data entry
- Indexing and optimization
- Database migrations
- De-normalization for data query
- Star schema for data warehouses

#### 6. SQL: Creation and manipulation

- Why learn SQL
- The stages of data normalization
- The CREATE statement
- The INSERT statement
- The UPDATE statement
- Adding indexes
- ACID
- Transactions and rollback
- ETL to populate databases

#### 7. SQL: Basic queries and sub-queries

- Server vs client side queries
- The Select statement
- Projection
- Filtering on rows
- Sorting
- Transforms
- Grouping
- Filtering on groups
- Summarization
- Sub-queries
- Using explain

#### 8. SQL: Window queries and UDFs

- Set operations
- Joins and semi-joins
- Window functions
- User-defined functions (1:1, N:1, 1:N)

#### 9. Key-value and document databases

- Concepts of NoSQL: From ACID to BASE
- What is a key-value database?
- Using `redis`
- What is a document database?
- Using `mongodb`

#### 10. Column-family and graph databases

- What is a column family database?
- Using `hbase`
- What is a graph database?
- Using `neo4j`
- Trade-offs (when to use SQL, key-value, document, graph and column family)

Midterm I (10%)

### Distributed computing

#### OPTION: Asynchronous computation

- Concurrent, parallel and distributed
- Why asynchronous programming?
- Latency and resource starvation
- I/O and computation bottlenecks
- Generators and Coroutines
- Coroutines and tasks
- Sending messages to coroutines, threads and processes
- The event loop
- async and await

#### OPTION: Multi-core computation

- Amdahl and Gustaffson laws
- Threads and processes
- Embarrassingly parallel problems
- Shared memory issues
- Deadlocks and race conditions
- Low level parallel programming with `multiprocessing`
- Using `concurrent.futures` and `multiprocessing` pools

#### 11. The Hadoop ecosystem, HDFS and YARN

- Why distributed computing?
- Google Map-Reduce
- Hadoop
- HDFS: Distributed file system
- YARN: Resource manager
- MapReduce: Compute engine

#### 12. MapReduce and other tools

- MapReduce programming
- Writing a MapReduce program in Python using Streaming
- Tools for putting data in HDFS (Flume, Sqoop)
- Tools for SQL access to HDFS (Hive, Impala)
- Tools for workflow and pipeline construction (Crunch, Oozie, Airflow)
- Tools for coordination of distributed programs (Zookeeper)
- NoSQL database (HBase)

#### 13. Dask data frames

- Dask concents
- Working with `dask` DataFrames
- Dask efficiency

#### 14. Dask arrays, bags and machine learning

- Working with `dask` arrays
- Working with `dask` bags
- ML with `dask`

#### 15. DevOps and cloud computing

- What is DevOps?
- Practices and tools
- Source code control
- Using Docker containers
- Walk-through using AWS

#### 16. Spark basics

- Spark concepts
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

#### 17. Spark SQL

- The Spark session
- Creating and saving a DataFrame
- DataFrame operations
- DataFrame and RDD conversions
- Using SQL to query a DataFrame
- Caching a DataFrame
- Using vectorized UDFs
- Column family databases
- Columnar data stores arrow and parquet

#### 18. Spark machine learning

- Basic statistics with Spark
- Pipelines
- Data processing
- Clustering
- Classification and regression
- Collaborative filtering
- Model selection

#### 19. Spark and streaming data

- Streaming concepts
- StreamingContext
- Discretized Streams
- Sources of data
- Transforms
- Checkpoints
- DataFrame operations
- Machine learning operations
- Processing event logs

Midterm II (10%)

### Data analysis

#### OPTION Structured including geographical

- Structured data using `dask`
- Statistical visualization with `seaborn`, `plotly`, `bokeh`
- From long/lat to x/y coordinates
- Interactive mapping with `datashader`

#### OPTION Free text

- Concepts of text analysis
- From text to matrix
- Natural language processing with `nltk`, `spacy`
- Topic modeling with `spacy` and `gensim`
- Sentiment classification

#### OPTION Images

- Concepts of image processing
- Using `scikit-image`
- Using a CNN to classify images

#### OPTION Time series

- Concepts of time series analysis
- Using `statsmodels`
- Using `prophet`

#### OPTION Graphs and networks

- Concepts of graph and network analysis
- Using `networkx`
- Using `neo4j`
- Using `Spark GraphFrames`

#### OPTION Genomics

- Concepts of genomic processing
- Unix pipelines
- Distributed processing with `Adam`
- Example: counting k-mers

Final Exam (30%)
