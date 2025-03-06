import XCTest
import SwiftTreeSitter
import TreeSitterMidnite

final class TreeSitterMidniteTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_midnite())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Midnite grammar")
    }
}
