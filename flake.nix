{
  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-24.11";

  outputs =
    { self, nixpkgs }:
    let
      supportedSystems = [
        "x86_64-darwin"
        "x86_64-linux"
        "aarch64-darwin"
        "aarch64-linux"
      ];

      forEachSupportedSystem =
        f:
        nixpkgs.lib.genAttrs supportedSystems (
          system:
          f {
            pkgs = import nixpkgs { inherit system; };
          }
        );
    in
    {
      devShells = forEachSupportedSystem (
        { pkgs }:
        {
          default = pkgs.mkShell {
            buildInputs =
              with pkgs;
              [
                nixd
                nixfmt-rfc-style
                nodejs_23
                pnpm_10
                tree-sitter
              ]
              ++ pkgs.lib.optionals pkgs.stdenv.isLinux [
                inotify-tools
                libnotify
              ]
              ++ pkgs.lib.optionals pkgs.stdenv.isDarwin [
                terminal-notifier
                darwin.apple_sdk.frameworks.CoreFoundation
                darwin.apple_sdk.frameworks.CoreServices
              ];

            shellHook = ''
              mkdir -p .nix-tree-sitter
              export TREE_SITTER_DIR=$PWD/.nix-tree-sitter
              export LC_ALL=en_US.UTF-8
            '';
          };
        }
      );
    };
}
