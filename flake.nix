{
  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-24.11";

  outputs =
    { self, nixpkgs }:
    let
      system = "aarch64-darwin";
      pkgs = import nixpkgs { inherit system; };
    in
    {
      devShells.${system}.default = pkgs.mkShell {
        buildInputs =
          with pkgs;
          [
            nixd
            nixfmt-rfc-style
            nodejs_23
            pnpm_10
            tree-sitter
          ]
          ++ (
            if stdenv.isLinux then
              [
                inotify-tools
                libnotify
              ]
            else if stdenv.isDarwin then
              [
                terminal-notifier
                darwin.apple_sdk.frameworks.CoreFoundation
                darwin.apple_sdk.frameworks.CoreServices
              ]
            else
              [ ]
          );

        shellHook = ''
          export LC_ALL=en_US.UTF-8
        '';
      };
    };
}
