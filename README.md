# chord

#### Build

`make`

#### Usage

`chord root[quality]`

Where `root` is the chord root,
and `quality` is an optional chord quality.
The default quality is a major triad.
Available qualities include:

* `M` or `Maj` - major triad
* `m` or `min` - minor triad
* `dim` - diminished traid
* `+` or `aug` - augmented triad
* `M7` or `Maj7` - major seventh
* `m7` or `min7` - minor seventh
* `7` - dominant seventh
* `dim7` - diminished seventh
* `+7` or `aug7` - augmented seventh

##### Example

```
$ ./chord C#Maj7
C# F Ab C 
````
