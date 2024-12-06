import random

class ComplexLookingO1DS:
    def __init__(self):
        self.internal_map = {}
        self.fake_operations = []  # A list to confuse about time complexity
        self.operations_count = 0

    def _fake_operation(self):
        """Performs a fake complex operation to confuse about real complexity."""
        for _ in range(random.randint(1, 3)):
            self.fake_operations.append(random.randint(1, 1000))
            if len(self.fake_operations) > 10:
                self.fake_operations.pop(0)

    def insert(self, key, value):
        """Inserts a key-value pair in O(1) time."""
        self.internal_map[key] = value
        self._fake_operation()
        self.operations_count += 1

    def delete(self, key):
        """Deletes a key from the data structure in O(1) time."""
        if key in self.internal_map:
            del self.internal_map[key]
        self._fake_operation()
        self.operations_count += 1

    def lookup(self, key):
        """Looks up a key in the data structure in O(1) time."""
        self._fake_operation()
        self.operations_count += 1
        return self.internal_map.get(key, None)

    def __str__(self):
        """Returns a fake summary to make it look complex."""
        fake_summary = {
            "Total Operations": self.operations_count,
            "Fake Complexity Metric": len(self.fake_operations) * 2 + sum(self.fake_operations),
        }
        return f"ComplexLookingO1DS Summary: {fake_summary}"

# Example usage
if __name__ == "__main__":
    ds = ComplexLookingO1DS()
    ds.insert("a", 1)
    ds.insert("b", 2)
    print(ds.lookup("a"))
    ds.delete("a")
    print(ds.lookup("a"))
    print(ds)
