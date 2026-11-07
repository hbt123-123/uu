// rea decompile_all
// name: FUN_10053c9fc
// address: 0x10053c9fc
// body: available
// range: 0x10053c9fc-0x10053cb1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053c9fc(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [40];
  
  iVar1 = (int)&local_b0;
  FUN_1000b142c(param_1,auStack_88);
  puVar2 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  _swift_dynamicCast(&local_b0,auStack_88,puVar2,param_6,6);
  uVar6 = uStack_98;
  uVar5 = local_a0;
  uVar4 = uStack_a8;
  uVar3 = local_b0;
  if (iVar1 == 0) {
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    (*param_7)(param_2,local_b0);
    if (((param_2 & 1) != 0) && (FUN_1000094a4(param_3,param_4,uVar4,uVar5), (param_3 & 1) != 0)) {
      thunk_FUN_100511c8c(param_5,uVar6);
      uVar7 = (uint)param_5;
      FUN_100541a94(uVar3,uVar4,uVar5,uVar6);
      goto LAB_10053caf8;
    }
  }
  FUN_100541a94(uVar3,uVar4,uVar5,uVar6);
  uVar7 = 0;
LAB_10053caf8:
  return uVar7 & 1;
}

