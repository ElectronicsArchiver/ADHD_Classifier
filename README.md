# ADHD Classifier [![Badge License]][License]

***Tests for my Research Project***

<br>

## Requirements

- **[Python 3.10]**

  **\+ Modules:**
  
  - `numpy`
  - `sklearn`
  
  ### PIP
  
  ```sh
  pip install numpy sklearn
  ```
  
- **[C]**

  **\+ Modules:**
  -  `Python 3.x headers`
  -  `GNU Scientific Library`
 
  ### Ubuntu
  
  ```sh
  sudo apt install python3-dev libgsl-dev
  ```

<br>
<br>

## Usage

### Shared Library

*Build the C library with:*

```sh
Tools/Build.sh
```

<br>

*Remove the C library and Object Files with:*

```sh
Tools/Build.sh clean
```

<br>

### Dataset

*As the original dataset cannot be published,* <br>
*fake replacement data can be generated with:*

```sh
Tools/GenerateSamples.sh
```

<br>

### Testing

*Execute the test suite with:*

```sh
Tools/Test.sh
```

*To test the real dataset use:*

```sh
Tools/Test.sh research
```

<!----------------------------------------------------------------------------->

[Badge License]: https://img.shields.io/badge/License-MIT-yellow.svg?style=for-the-badge

[License]: LICENSE

[Python 3]: https://www.python.org/downloads/
[C]: https://gcc.gnu.org/

