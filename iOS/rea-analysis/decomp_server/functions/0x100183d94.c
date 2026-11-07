// rea decompile_all
// name: FUN_100183d94
// address: 0x100183d94
// body: available
// range: 0x100183d94-0x100183e8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100183d94(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar4;
  undefined **local_80 [5];
  code *local_58;
  undefined8 uStack_50;
  undefined *local_40;
  undefined **ppuStack_38;
  
  local_40 = &DAT_10099bae8;
  ppuStack_38 = &PTR_PTR_10099bb00;
  local_58 = FUN_1000d4784;
  uStack_50 = 0;
  FUN_100183f50();
  _swift_allocObject();
  FUN_1000ce034(&local_58,&DAT_10099bae8);
  (*(code *)PTR____chkstk_darwin_100995498)(0x10);
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)((long)local_80 + lVar1);
  (**(code **)(extraout_x12 + 0x10))(puVar4);
  local_80[3] = (undefined **)&DAT_10099bae8;
  local_80[4] = &PTR_PTR_10099bb00;
  local_80[1] = *(undefined ***)((long)local_80 + lVar1 + 8);
  local_80[0] = (undefined **)*puVar4;
  puVar2 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar3 = _objc_msgSend((ID)puVar2,"init");
  puVar2 = PTR___swiftEmptySetSingleton_100995eb0;
  *(ID *)(param_1 + 0x38) = IVar3;
  *(undefined **)(param_1 + 0x40) = puVar2;
  *(undefined8 *)(param_1 + 0x48) = 0;
  thunk_FUN_1000a0074(local_80,param_1 + 0x10);
  FUN_10003f094(&local_58);
  DAT_100b36248 = param_1;
  return;
}

