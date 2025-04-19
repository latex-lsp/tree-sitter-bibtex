package tree_sitter_bibtex_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_bibtex "github.com/latex-lsp/tree-sitter-bibtex/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_bibtex.Language())
	if language == nil {
		t.Errorf("Error loading Bibtex grammar")
	}
}
