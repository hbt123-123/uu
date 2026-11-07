// rea decompile_all
// name: FUN_10054559c
// address: 0x10054559c
// body: available
// range: 0x10054559c-0x10054564f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054559c(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar2 = 0;
  FUN_1005424b0();
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(lVar2 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar3 = puVar1;
  FUN_1005b8e5c();
  puVar4 = puVar1;
  FUN_1005b9004();
  puVar5 = puVar1;
  FUN_1005b9004();
  uVar6 = param_2;
  FUN_100569f9c(param_2);
  _swift_bridgeObjectRelease(param_2);
  FUN_100543a60(uVar6);
  _swift_bridgeObjectRelease(uVar6);
  param_1[1] = (long)puVar3;
  *param_1 = lVar2;
  param_1[3] = (long)puVar5;
  param_1[2] = (long)puVar4;
  param_1[5] = (long)puVar1;
  param_1[4] = (long)puVar1;
  return;
}

