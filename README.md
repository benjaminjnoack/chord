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
* `sus2` - suspended second
* `sus4` - suspended fourth
* `add2` or `add9` - added ninth
* `add4` - added fourth
* `add6` - added sixth

#### Example

```
$ ./chord C#Maj7
C# F Ab C 
````

#### TODO

* inversions
* scales
* added tones flags
* print the interval of the note

