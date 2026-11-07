// rea decompile_all
// name: FUN_1007a61c8
// address: 0x1007a61c8
// body: available
// range: 0x1007a61c8-0x1007a6323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a6320 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1007a61c8(long param_1,undefined8 param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  long local_1510;
  long *plStack_1508;
  long local_1500;
  undefined8 uStack_14f8;
  undefined4 local_14f0;
  undefined1 local_14ec;
  undefined1 local_14eb;
  code *local_14e8;
  long local_14e0;
  long lStack_14d8;
  undefined8 *local_14d0;
  undefined4 local_14c8;
  undefined1 *local_14c0;
  undefined4 local_14b8;
  code **local_14b0;
  undefined1 *puStack_14a8;
  code *local_14a0;
  code *pcStack_1498;
  code *pcStack_1490;
  code *pcStack_1488;
  code *local_1480;
  code *pcStack_1478;
  code *pcStack_1470;
  code *pcStack_1468;
  code *local_1460;
  code *pcStack_1458;
  undefined1 auStack_1448 [5000];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  pcStack_1478 = FUN_1007a5fcc;
  local_1480 = FUN_1007a5f6c;
  pcStack_1468 = FUN_1007a6068;
  pcStack_1470 = FUN_1007a602c;
  pcStack_1458 = FUN_1007a60f8;
  local_1460 = FUN_1007a60a4;
  pcStack_1498 = FUN_1007a5eb0;
  local_14a0 = FUN_1007a5e70;
  pcStack_1488 = FUN_1007a5f2c;
  pcStack_1490 = FUN_1007a5eec;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  _bzero(auStack_1448,5000);
  lStack_14d8 = param_3 + param_4;
  local_14d0 = &local_c0;
  local_14c8 = 100;
  local_14b8 = 5000;
  local_14b0 = &local_14a0;
  plStack_1508 = &local_14e0;
  uStack_14f8 = 0;
  local_14f0 = 0;
  local_14ec = 0;
  local_14eb = (undefined1)param_5;
  local_14e8 = FUN_1007a6324;
  iVar1 = *(int *)(param_1 + 0x10);
  local_1510 = param_1;
  local_1500 = param_3;
  local_14e0 = param_3;
  local_14c0 = auStack_1448;
  puStack_14a8 = (undefined1 *)&local_1510;
  FUN_1007a5564(param_2,&local_14e0);
  if (param_5 != 0) {
    while (iVar1 < *(int *)(param_1 + 0x10)) {
      FUN_1007a5380(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

