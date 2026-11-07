// rea decompile_all
// name: FUN_1006357b8
// address: 0x1006357b8
// body: available
// range: 0x1006357b8-0x1006358a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006357b8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long in_x6;
  
  if (*(long *)(in_x6 + 0x10) == param_2) {
    param_1[3] = &DAT_1009e1ea0;
    param_1[4] = &PTR_PTR_1009e1ee0;
    puVar1 = &DAT_1009e1ce8;
    _swift_allocObject(&DAT_1009e1ce8,0x70,7);
    *param_1 = puVar1;
    *(undefined8 *)(puVar1 + 0x10) = param_3;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    *(long *)(puVar1 + 0x20) = param_2;
    *(undefined8 *)(puVar1 + 0x28) = 0;
    *(long *)(puVar1 + 0x30) = in_x6;
    *(long *)(puVar1 + 0x38) = in_x6 + 0x20;
    *(undefined8 *)(puVar1 + 0x40) = 0;
    *(ulong *)(puVar1 + 0x48) = param_2 << 1 | 1;
    *(undefined8 *)(puVar1 + 0x58) = 0;
    *(undefined8 *)(puVar1 + 0x50) = 0;
    *(undefined8 *)(puVar1 + 0x68) = 0;
    *(undefined8 *)(puVar1 + 0x60) = 0;
    _swift_bridgeObjectRetain(in_x6);
    _swift_retain(param_4);
  }
  else {
    FUN_1006358a4();
    _swift_allocError(&DAT_1009e1e28,param_2,0,0);
    _swift_willThrow();
  }
  return;
}

