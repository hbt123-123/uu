// rea decompile_all
// name: FUN_10053c260
// address: 0x10053c260
// body: available
// range: 0x10053c260-0x10053c383 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053c260(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,code *param_6)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&local_90;
  FUN_1000b142c(param_1,auStack_78);
  puVar2 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  _swift_dynamicCast(&local_90,auStack_78,puVar2,param_5,6);
  uVar6 = local_80;
  uVar5 = uStack_88;
  uVar4 = local_90;
  if (iVar1 == 0) {
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
LAB_10053c35c:
    FUN_10008f148(uVar4,uVar5,uVar6);
    uVar7 = 0;
  }
  else {
    if (local_80 != param_4) {
      _swift_retain(param_4);
      _swift_retain(uVar6);
      uVar3 = param_4;
      (*param_6)(param_4,uVar6);
      _swift_release(uVar6);
      _swift_release(param_4);
      if ((uVar3 & 1) == 0) goto LAB_10053c35c;
    }
    FUN_1000094a4(param_2,param_3,uVar4,uVar5);
    uVar7 = (uint)param_2;
    FUN_10008f148(uVar4,uVar5,uVar6);
  }
  return uVar7 & 1;
}

