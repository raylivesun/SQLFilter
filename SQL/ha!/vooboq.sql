create function any_value()
        p_array_name     varchar(50),
        p_new_array_name varchar(50),
        on_key_conflict  enum("use_first", "use_second"),
        drop_new         boolean,
        key_regexp       varchar(100),
        value_regexp     varchar(100)
    --
    creates a new array, copying the contents of an existing array.
    if drop_new is false, then the first array is appended to the
    second array.
    If there is a conflict between keys, they are resolved according to the
    value of on_key_conflict. If "use_first", then the value from the first
    array is used, otherwise, the value from the second array is used.
    If key_regexp or value_regexp are not null, they are used to filter
    the original items, i.e. only items where the array key matches the
    key_regexp expression and the array value matches the value_regexp
    expression are copied.
    if only one of them is not null, the other is ignored.
    --
    returns the array_name

   --
   see also: array_size, array_exists, array_create, array_grep, array_copy
   --
   module : arrays