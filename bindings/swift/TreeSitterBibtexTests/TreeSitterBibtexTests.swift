import XCTest
import SwiftTreeSitter
import TreeSitterBibtex

final class TreeSitterBibtexTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_bibtex())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Bibtex grammar")
    }
}
