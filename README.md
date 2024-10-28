<div align="center">
    <h1>Tree Sitter for RuneScript</h1>
</div>

![Highlight](https://github.com/2004Scape/tree-sitter-runescript/blob/main/assets/highlight.png)

<div align="center">
    <h2>Usage</h2>
</div>

In NeoVim, you could add the following lines into your `nvim-treesitter` config:

```lua
local parse_config = require("nvim-treesitter.parsers").get_parser_configs()

for _, v in pairs({ { "runescript", "rs2" }, { "clientscript", "cs2" } }) do
    parse_config[v[1]] = {
        install_info = {
            url = "https://github.com/2004Scape/tree-sitter-runescript",
            files = { "src/parser.c", "src/scanner.c" },
            branch = "main",
        },
        filetype = v[2],
    }
    vim.filetype.add({
        extension = {
            [v[2]] = v[1],
        },
    })
end
```

In order to make highlights work, the appropriate queries should be copied over:

```sh
# Change this path to point to the queries folder located inside of the
# nvim-treesitter plugin. I use lazy on MacOS, so the following path is correct
# for me:
local rtp_queries="$HOME/.local/share/nvim/lazy/nvim-treesitter/queries"

mkdir "$rtp_queries/runescript"
curl -o "$rtp_queries/runescript/highlights.scm" https://raw.githubusercontent.com/2004Scape/tree-sitter-runescript/refs/heads/main/queries/highlights.scm
ln -s $rtp_queries/runescript $rtp_queries/clientscript
```

Finally, restart NeoVim and run `:TSInstall runescript` and `:TSInstall clientscript`.
