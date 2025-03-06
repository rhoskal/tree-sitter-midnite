package tree_sitter_midnite_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_midnite "github.com/rhoskal/midnite/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_midnite.Language())
	if language == nil {
		t.Errorf("Error loading Midnite grammar")
	}
}
