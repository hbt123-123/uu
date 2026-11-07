// rea decompile_all
// name: FUN_10031bc78
// address: 0x10031bc78
// body: available
// range: 0x10031bc78-0x10031bd4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031bc78(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(*unaff_x20 + 0x58);
  lVar1 = 0;
  __sSqMa(0,lVar3);
  puVar2 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  unaff_x20[3] = param_1;
  unaff_x20[4] = param_2;
  unaff_x20[5] = param_3;
  FUN_1002c70ac(0,lVar1);
  lVar1 = *(long *)(lVar3 + -8);
  (**(code **)(lVar1 + 0x10))(puVar2,param_4,lVar3);
  (**(code **)(lVar1 + 0x38))(puVar2,0,1,lVar3);
  FUN_1002c6c34();
  unaff_x20[2] = (long)puVar2;
  return;
}

