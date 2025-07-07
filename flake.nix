{
  description = "A procon flake.nix";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs?ref=nixpkgs-unstable";
    flake-parts.url = "github:hercules-ci/flake-parts";
    systems.url = "github:nix-systems/default";
  };

  outputs =
    inputs@{ self, systems, nixpkgs, flake-parts, ... }:
    flake-parts.lib.mkFlake { inherit inputs; } {
      systems = import inputs.systems;
      perSystem = { config, pkgs, system, ... }:
        {
          # _module.args.pkgs = import nixpkgs {
          #   inherit system;
          #   config = {
          #     allowUnfree = true; # Allow unfree packages
          #   };
          # };
          # When execute `nix develop`, you go in shell installed nil.
          devShells.default = pkgs.mkShell {
            packages = with pkgs; [
              gcc
              online-judge-tools
            ];
          };
        };
    };
}
