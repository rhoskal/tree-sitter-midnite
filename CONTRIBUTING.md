# Contributing

Thank you for considering contributing to this project! We appreciate your help in making it better.

## How to Contribute

1. **Fork the Repository** – Click the "Fork" button on GitHub to create your own copy of the project.
2. **Clone the Repository** – Use `git clone https://github.com/your-username/repo-name.git` to get the code on your local machine.
3. **Create a New Branch** – Run `git checkout -b initials/feature-branch-name` (replace `initials` with your initials) to create a new branch for your changes.
4. **Make Changes** – Implement your feature, fix bugs, or update documentation.
5. **Commit Your Changes** – Use descriptive commit messages (`git commit -m "Add feature X"`).
6. **Push to GitHub** – Run `git push origin initials/feature-branch-name` to upload your changes.
7. **Create a Pull Request (PR)** – Go to the original repository and submit a pull request.

## Development

This project uses [Nix](https://nixos.org/) for development. To set up your environment:

1. Copy envrc:
  ```sh
  cp .envrc.example .envrc
  ```
2. Start the Nix shell using:
  ```sh
  nix develop
  ```
3. Use Makefile for useful commands

## Code of Conduct

Please be respectful and follow community guidelines when contributing. Constructive discussions and collaboration are encouraged.

## Need Help?

If you have any questions, feel free to open an issue or reach out to the maintainers.

Happy coding!
