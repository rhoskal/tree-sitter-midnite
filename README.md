# tree-sitter-midnite

Midnite grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).


:lua print(vim.inspect(vim.treesitter.get_captures_at_cursor()))

:lua local node = vim.treesitter.get_node(); if node then print(node:type(), vim.treesitter.get_node_text(node, 0)) end

:Inspect to show the highlight groups under the cursor
:InspectTree to show the parsed syntax tree ("TSPlayground")
:EditQuery to open the Live Query Editor (Nvim 0.10+)

:Telescope highlights
