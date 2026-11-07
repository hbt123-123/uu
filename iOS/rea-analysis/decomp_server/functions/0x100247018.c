// rea decompile_all
// name: FUN_100247018
// address: 0x100247018
// body: available
// range: 0x100247018-0x10024716f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100247018(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_78 [24];
  ulong local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  puVar1 = PTR___sypN_100995e88;
  if ((param_1 & 1) == 0) {
LAB_1002470f8:
    FUN_1002233f8(0);
    uVar3 = DAT_100a7fa08;
    uVar2 = DAT_100a7fa00;
    _swift_bridgeObjectRetain(DAT_100a7fa08);
    FUN_100223100(auStack_50,uVar2,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    puVar6 = &local_60;
    _swift_dynamicCast(puVar6,auStack_50,puVar1 + 8,PTR___sSSN_1009957f8,6);
    if ((int)puVar6 == 0) {
      local_60 = 0;
      uStack_58 = 0;
    }
  }
  else {
    FUN_1002233f8(0);
    _swift_beginAccess(&DAT_100a7e308,auStack_78,0,0);
    uVar3 = DAT_100a7e310;
    uVar2 = DAT_100a7e308;
    _swift_bridgeObjectRetain(DAT_100a7e310);
    FUN_100223100(auStack_50,uVar2,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    puVar5 = &DAT_100a7e318;
    FUN_100004bb4(&DAT_100a7e318,&DAT_100813488);
    puVar6 = &local_60;
    _swift_dynamicCast(puVar6,auStack_50,puVar1 + 8,puVar5,6);
    uVar4 = local_60;
    if ((int)puVar6 != 0) {
      FUN_1002223d0();
      uVar7 = uVar4;
      FUN_100221474(uVar4,puVar6);
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease();
      if (((uVar7 & 1) != 0) && (FUN_100246d8c(), ((ulong)puVar6 & 1) == 0)) goto LAB_1002470f8;
    }
    local_60 = 0;
    uStack_58 = 0;
  }
  auVar8._8_8_ = uStack_58;
  auVar8._0_8_ = local_60;
  return auVar8;
}

