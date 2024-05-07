# Python Interface to query WDC (WCPS Datacube) using OOP Approach

The library `wdc` allows users to easily work with coverages while working on geospatial data, which is a type of data used in scientific researches involving space and time. This documentation provides describes how the library is implemented, how it can be used to query WCPS datacube, perform aggregate operations on them. The library has been further improved so that multiple coverages can be utilized if need be. Step by step guideline on how you can use it is detailed below. 

## Table of contents
+ [Defining Classes](#defining-classes)
+ [Running Tests](#running-the-code)

---


## Defining Classes

### `DatabaseConnection` Class

This class handles HTTP connections to a database server for sending queries. Methods are implemented as follow:

  + `__init__(self, endpoint_url)`: Initializes the connection with the URL of the database endpoint.
  + `send_request(self, query)`: Sends a POST request to the database endpoint with the provided query. Returns the HTTP response returned by the server.

---


### `Coverage` Class

It represents a coverage in the datacube queries. It is responsible for managing the name, variable, subset, and operations related to coverages.
  
  #### Methods:

   + `__init__(self, name)`: Initializes a coverage with a given name.Increments the static variable `coverage_counter` to generate a unique variable name for the coverage. Initializes `subset` attribute to `None`.
   + `__str__(self)`: Returns a string representation of the coverage.If a subset is defined, it returns the variable name along with the subset, else returns just the variable name.
   + `set_subset(self, *args)`: Sets the subset of the coverage based on provided axes. Accepts one or more arguments of type `Axis` representing the dimensions of the subset. Converts each axis to a string and joins them with commas to form the subset string.
   + `Binary Operations:` Overloads arithmetic and comparison operators (`+`, `-`, `*`, `/`, `<`, `<=`, `>`, `>=`, `==`, `!=`) to perform binary operations between coverages and other objects. Each operator returns a `BinaryOperation` object with the respective operation and operands.


### `Axis` Class

Represents an axis used for defining subsets. It encapsulates the name and bounds of an axis, allowing for defining subsets within the datacube. The `Axis` class provides a convenient way to define and represent axes within a datacube, facilitating the specification of spatial or temporal subsets during data querying operations.

  #### Methods: 

   + `__init__(self, name, lower_bound, upper_bound=None)`: Initializes an `Axis` object with the given name and lower bound. Optionally accepts an upper bound for the axis range. If not provided, defaults to `None`.
   + `__str__(self)`: Returns a string representation of the axis.If an upper bound is provided, it returns the axis name along with the range in the format: `{name}(lower_bound:upper_bound)`. If no upper bound is provided, it returns the axis name along with the lower bound only in the format: `{name}(lower_bound)`.


### `BinaryOperation` Class

The `BinaryOperation` class represents a binary operation between two operands. It encapsulates the left-hand side (lhs), right-hand side (rhs), and the operator used in the operation. It provides a versatile way to represent and perform various binary operations.

  #### Methods:

   + `__init__(self, lhs, operator, rhs)`: Initializes a `BinaryOperation` object with the given left-hand side, operator, and right-hand side.
   + `__str__(self)`: Returns a string representation of the binary operation in the format: `(lhs operator rhs)`. If the operator is '==', it replaces it with '=' to conform to the WCPS query language.
   + **Arithmetic Operations**: These methods overload arithmetic operators (+, -, *, /) to perform respective binary operations between operands.
   + **Comparison Operations**: These methods overload comparison operators (<, <=, >, >=, ==, !=) to perform respective comparison operations between operands.


### `RGBColor` Class

The `RGBColor` class represents a color in the RGB color space. It encapsulates the values for the red, green, and blue components of the color. It provides an effective way to query **On-the-fly coloring**. 

  #### Methods:

   + **`__init__(self, red, green, blue)`**: Initializes an `RGBColor` object with the given values for the red, green, and blue components.

   + **`__str__(self)`**: Returns a string representation of the RGB color in the format: `{red: <red_value>; green: <green_value>; blue: <blue_value>}`.

### `Switch` and `Case` Classes 

The `Switch` class represents a switch statement, which evaluates different cases based on conditions and returns corresponding RGB colors.

The `Case` class represents a case statement used within a switch statement. It associates an expression with a specific RGB color to be returned when the expression evaluates to true.

These classes allow users to utilize `switch` and `case` when querying from datacube.


---


### `Query` Class

The `Query` class manages operations on a datacube by sending queries through the `DatabaseConnection`. It provides methods to define query parameters, generate database queries, and execute them to retrieve data. It is the integral part of the whole `wdc` library and this implementation provides a flexible interface for such operations.

  #### Attributes:

   - **`dbc`**: The `DatabaseConnection` object used for sending queries to the database server.
   - **`coverages`**: A list containing `Coverage` objects representing datasets or coverages to be queried.
   - **`return_type`**: The type of data to return from queries (e.g., CSV, PNG, JPEG).
   - **`return_value`**: Specific values or expressions to be returned by the query.
   - **`operation`**: The operation to perform on the data (e.g., max, min, avg, count, encode, colorcoding).
   - **`count_condition`**: A condition applied specifically for count operations.
   - **`Switch`**: An instance of the `Switch` class used for color coding operations.

  #### Methods:

   1. **`add_coverage(coverage)`**: Adds a coverage to the datacube queries.

   2. **`set_return(return_type, return_value=None)`**: Sets the return type and value for the results of the queries.

   3. **`set_operation(operation)`**: Sets the operation to perform on the data.

   4. **`set_count_condition(condition)`**: Sets the condition for count operations.

   5. **`set_switch(Switch)`**: Sets the switch statement for color coding operations.

   6. **`generate_query(expression)`**: Generates the database query based on the set parameters.

   7. **`execute_query(expression)`**: Executes the generated query using the `DatabaseConnection`. Return Types: **CSV**, **PNG**, **JPEG** are supported.

---

## Running the Code

When calling the main function:

1. It initializes a `DatabaseConnection` object with a specific endpoint URL.
2. It creates `Coverage` objects representing different datasets.
3. It defines `Axis` objects representing subset parameters.
4. It initializes a `Query` object with the `DatabaseConnection`.
5. It adds coverages to the query object.
6. It generates a query using the defined parameters.
7. It executes the generated query using the `DatabaseConnection`.

The result of the executed query is then printed.


