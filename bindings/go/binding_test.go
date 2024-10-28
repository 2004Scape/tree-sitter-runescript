package tree_sitter_runescript_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_runescript "github.com/tree-sitter/tree-sitter-runescript/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_runescript.Language())
	if language == nil {
		t.Errorf("Error loading Runescript grammar")
	}
}
