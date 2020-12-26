#pragma once

/*
Wikipedia: (https://en.wikipedia.org/wiki/B-tree#Technical_description)
Bayer & McCreight (1972), Comer (1979), and others define the order of B-tree as the minimum number of keys in a non-root node.
*/

// defines the minimum filled elements in one node
#define ORDER 2

// defines the maximum filled elements in one node
#define MAXNODE (2 * ORDER)
