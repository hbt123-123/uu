// rea decompile_all
// name: FUN_10069e55c
// address: 0x10069e55c
// body: available
// range: 0x10069e55c-0x10069e5d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069e55c(long param_1)

{
  uint uVar1;
  failure *this;
  undefined1 auStack_40 [32];
  
  this = *(failure **)(param_1 + 0x60);
  if (this != (failure *)0x0) {
    _munmap(this,*(undefined8 *)(param_1 + 0x68));
    uVar1 = *(uint *)(param_1 + 0x70);
    if (-1 < (int)uVar1) {
      _close();
      this = (failure *)(ulong)(uVar1 | (uint)this);
    }
    FUN_10069e414(param_1,(int)this != 0);
    if ((int)this != 0) {
      FUN_10069eff0(auStack_40,"failed closing mapped file");
      FUN_1006924cc(auStack_40);
      std::ios_base::failure::~failure(this);
    }
  }
  return;
}

