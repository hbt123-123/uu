// rea decompile_all
// name: FUN_10067cc78
// address: 0x10067cc78
// body: available
// range: 0x10067cc78-0x10067cd3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_10067cc78(uint param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = param_1 & 0xff;
  lVar2 = 8;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(8,&DAT_1009e18d8);
  *(undefined8 *)(lVar2 + 0x10) = 8;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  if ((param_1 >> 7 & 1) != 0) {
    *(undefined1 *)(lVar2 + 0x20) = 1;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    *(undefined1 *)(lVar2 + 0x21) = 1;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    *(undefined1 *)(lVar2 + 0x22) = 1;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    *(undefined1 *)(lVar2 + 0x23) = 1;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    *(undefined1 *)(lVar2 + 0x24) = 1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    *(undefined1 *)(lVar2 + 0x25) = 1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    *(undefined1 *)(lVar2 + 0x26) = 1;
  }
  if ((param_1 & 1) != 0) {
    *(undefined1 *)(lVar2 + 0x27) = 1;
  }
  return;
}

