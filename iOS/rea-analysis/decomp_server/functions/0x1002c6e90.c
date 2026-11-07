// rea decompile_all
// name: FUN_1002c6e90
// address: 0x1002c6e90
// body: available
// range: 0x1002c6e90-0x1002c6f07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c6e90(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  lVar1 = param_1;
  FUN_1002c6dd8();
  _swift_allocObject();
  puVar2 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar1 + 0x10) = puVar2;
  *puVar2 = 0;
  unaff_x20[2] = lVar1;
  (**(code **)(*(long *)(*(long *)(lVar3 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),param_1);
  return;
}

