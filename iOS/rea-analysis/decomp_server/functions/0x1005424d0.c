// rea decompile_all
// name: FUN_1005424d0
// address: 0x1005424d0
// body: available
// range: 0x1005424d0-0x10054257f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005424d0(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = 0;
  FUN_1005424b0();
  _swift_allocObject();
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar2 = puVar4;
  FUN_1005b8e5c();
  puVar3 = puVar4;
  FUN_1005b9004();
  FUN_1005b9004();
  FUN_100542580(param_4);
  _swift_bridgeObjectRelease(param_4);
  param_1[1] = (long)puVar2;
  *param_1 = lVar1;
  param_1[3] = (long)puVar4;
  param_1[2] = (long)puVar3;
  param_1[5] = param_3;
  param_1[4] = param_2;
  return;
}

