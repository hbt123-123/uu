// rea decompile_all
// name: FUN_10053d354
// address: 0x10053d354
// body: available
// range: 0x10053d354-0x10053d49f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053d354(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,code *param_7)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined1 auStack_88 [40];
  
  iVar1 = (int)&local_b0;
  FUN_1000b142c(param_1,auStack_88);
  puVar2 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  _swift_dynamicCast(&local_b0,auStack_88,puVar2,param_6,6);
  uVar7 = uStack_98;
  uVar6 = local_a0;
  uVar5 = uStack_a8;
  uVar4 = local_b0;
  if (iVar1 == 0) {
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    if (uStack_98 != param_5) {
      _swift_retain(param_5);
      _swift_retain(uVar7);
      uVar3 = param_5;
      (*param_7)(param_5,uVar7);
      _swift_release(uVar7);
      _swift_release(param_5);
      if ((uVar3 & 1) == 0) goto LAB_10053d474;
    }
    FUN_1000094a4(param_2,param_3,uVar4,uVar5);
    if ((param_2 & 1) != 0) {
      thunk_FUN_100511c8c(param_4,uVar6);
      uVar8 = (uint)param_4;
      FUN_1005419ec(uVar4,uVar5,uVar6,uVar7);
      goto LAB_10053d47c;
    }
  }
LAB_10053d474:
  FUN_1005419ec(uVar4,uVar5,uVar6,uVar7);
  uVar8 = 0;
LAB_10053d47c:
  return uVar8 & 1;
}

