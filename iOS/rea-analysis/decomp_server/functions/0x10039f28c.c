// rea decompile_all
// name: FUN_10039f28c
// address: 0x10039f28c
// body: available
// range: 0x10039f28c-0x10039f3b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039f28c(ulong param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  long lVar6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(param_3 + 0x10);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar6 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar6);
  puVar1 = &DAT_100a8b098;
  FUN_100004bb4(&DAT_100a8b098,&DAT_10081f878);
  puVar2 = &local_a0;
  _swift_dynamicCast(puVar2,lVar6,lVar5,puVar1,6);
  if (((ulong)puVar2 & 1) == 0) {
    local_80 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_1003a0144(&local_a0);
  }
  else {
    FUN_1000a0074(&local_a0,auStack_78);
    puVar3 = auStack_78;
    FUN_10003f030(puVar3,local_60);
    uVar4 = param_1;
    FUN_10039f6c4(param_1,local_60,lVar5,uStack_58,puVar3);
    FUN_10003f094(auStack_78);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  (*param_4)(param_1,param_2);
  return;
}

