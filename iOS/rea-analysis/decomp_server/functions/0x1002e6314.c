// rea decompile_all
// name: FUN_1002e6314
// address: 0x1002e6314
// body: available
// range: 0x1002e6314-0x1002e644b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 *
FUN_1002e6314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [24];
  long local_70;
  undefined **ppuStack_68;
  
  lVar2 = 0;
  FUN_1002f9800();
  puVar6 = auStack_b0 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a84390;
  FUN_100004bb4(&DAT_100a84390,&DAT_100818cf8);
  iVar1 = *(int *)(puVar3 + 0x30);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(puVar6,param_1,lVar4);
  puVar6[iVar1] = 0;
  _swift_storeEnumTagMultiPayload(puVar6,lVar2,1);
  FUN_1000b142c(param_2,auStack_b0);
  ppuStack_68 = &PTR_PTR_1009af628;
  puVar5 = auStack_88;
  local_70 = lVar2;
  FUN_1000efc08(puVar5);
  FUN_100082394(puVar6,puVar5,FUN_1002f9800);
  puVar5 = auStack_b0;
  FUN_1002edbcc(puVar5,param_3,param_4,param_5);
  FUN_1000d27dc(puVar6,FUN_1002f9800);
  FUN_1002eedf4(auStack_b0);
  return puVar5;
}

