// rea decompile_all
// name: FUN_1002e60f8
// address: 0x1002e60f8
// body: available
// range: 0x1002e60f8-0x1002e6207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 *
FUN_1002e60f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 auStack_b0 [5];
  undefined1 auStack_88 [24];
  long local_70;
  undefined **ppuStack_68;
  
  lVar2 = 0;
  FUN_1002f9800();
  lVar1 = -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)((long)auStack_b0 + lVar1);
  *puVar5 = param_1;
  *(undefined8 *)((long)auStack_b0 + lVar1 + 8) = param_2;
  _swift_storeEnumTagMultiPayload(puVar5,lVar2,0);
  FUN_1000b142c(param_3,auStack_b0);
  ppuStack_68 = &PTR_PTR_1009af628;
  puVar3 = auStack_88;
  local_70 = lVar2;
  FUN_1000efc08(puVar3);
  FUN_100082394(puVar5,puVar3,FUN_1002f9800);
  FUN_100008184(param_1,param_2);
  puVar4 = auStack_b0;
  FUN_1002edbcc(puVar4,param_4,param_5,param_6);
  FUN_1000d27dc(puVar5,FUN_1002f9800);
  FUN_1002eedf4(auStack_b0);
  return puVar4;
}

