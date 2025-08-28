#include "common.h"
#include "chunk.h"
#include "debug.h"

int main(int argc, const char* argv[]) {
  Chunk chunk;
  initChunk(&chunk);

  int constant = addConstant(&chunk, 1.2);
  writeChunk(&chunk, OP_CONSTANT, 100);
  writeChunk(&chunk, constant, 100);
  writeConstant(&chunk, 7.5, 101);
  writeConstant(&chunk, 8.5, 102);
  
  writeChunk(&chunk, OP_RETURN, 123);

  disassembleChunk(&chunk, "test chunk");
  freeChunk(&chunk);
  return 0;
}
