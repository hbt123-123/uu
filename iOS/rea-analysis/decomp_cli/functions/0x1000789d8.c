// rea decompile_all
// name: FUN_1000789d8
// address: 0x1000789d8
// body: available
// range: 0x1000789d8-0x100078a9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000789d8(long param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + -8);
  puVar2 = (undefined8 *)
           (&stack0xffffffffffffffc0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar4 + 0x10))(puVar2);
  puVar1 = puVar2;
  lVar3 = param_1;
  FUN_100060a34();
  (**(code **)(lVar4 + 8))(puVar2,param_1);
  FUN_10007b0d8();
  _swift_allocError(&DAT_1000f7970,puVar2,0,0);
  *puVar2 = puVar1;
  puVar2[1] = lVar3;
  *(undefined1 *)(puVar2 + 2) = param_2;
  _swift_willThrow();
  return;
}

