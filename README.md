# cpp-doxygen-example

[![Deploy doxygen to Pages](https://github.com/sh-cho/cpp-doxygen-example/actions/workflows/deploy_docs.yml/badge.svg?branch=main&event=push)](https://github.com/sh-cho/cpp-doxygen-example/actions/workflows/deploy_docs.yml)

Generate / publish doxygen with github actions

## envs
- doxygen: 1.9.6
- [doxygen-awesome-css](https://github.com/jothepro/doxygen-awesome-css): v2.2.1

## Make docs locally

```sh
brew install doxygen
```
Install doxygen

```sh
doxygen -g Doxyfile
```
Make Doxyfile

```sh
doxygen Doxyfile
```
Generate docs with Doxyfile
