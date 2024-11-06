<div align="center">
    <h1>Tree Sitter for RuneScript</h1>
</div>

![Highlight](https://github.com/2004Scape/tree-sitter-runescript/blob/main/assets/highlight.png)

<div align="center">
    <h2>Usage</h2>
</div>

The parser is integrated with [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter)
plugin.

Neovim also needs to be configured to recognize the RuneScript/ClientScript extensions:

```lua
vim.filetype.add({
    extension = {
        rs2 = "runescript",
        cs2 = "clientscript",
    },
})
```
