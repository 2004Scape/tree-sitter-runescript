import XCTest
import SwiftTreeSitter
import TreeSitterRunescript

final class TreeSitterRunescriptTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_runescript())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Runescript grammar")
    }
}
