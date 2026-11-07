// rea decompile_all
// name: FUN_1005383d4
// address: 0x1005383d4
// body: available
// range: 0x1005383d4-0x1005386e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005383d4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auStack_110 [8];
  undefined1 *local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_a0;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  
  lVar2 = 0;
  local_f8 = param_1;
  __sSqMa();
  local_108 = auStack_110 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(param_3 + -8);
  uVar7 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_100 = (long)local_108 - uVar7;
  lVar11 = local_100 - uVar7;
  lVar8 = lVar11 - uVar7;
  lVar9 = lVar8 - uVar7;
  (**(code **)(param_4 + 0x10))(lVar9,param_3,param_4);
  pcVar10 = *(code **)(lVar2 + 0x10);
  (*pcVar10)(lVar8,lVar9,param_3);
  puVar3 = &DAT_100aab448;
  FUN_100004bb4(&DAT_100aab448,&DAT_100837b00);
  puVar4 = &local_c0;
  _swift_dynamicCast(puVar4,lVar8,param_3,puVar3,0xe);
  if (((ulong)puVar4 & 1) == 0) {
    local_a0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_a8 = 0;
    uStack_b0 = 0;
    FUN_100040bb4(&local_c0,&DAT_100aab450,&DAT_1008388b0);
  }
  else {
    FUN_1000a0074(&local_c0,auStack_90);
    (*pcVar10)(lVar11,param_2,param_3);
    puVar4 = &local_f0;
    _swift_dynamicCast(puVar4,lVar11,param_3,puVar3,0xe);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_1000a0074(&local_f0,&local_c0);
      lVar8 = local_a0;
      uVar5 = local_a8;
      FUN_10003f030(&local_c0,local_a8);
      (**(code **)(lVar8 + 0x10))(uVar5,lVar8);
      FUN_1000ce034(auStack_90,local_78);
      (**(code **)(lStack_70 + 0x18))(uVar5,local_78,lStack_70);
      FUN_1000b142c(auStack_90,&local_f0);
      puVar1 = local_108;
      puVar6 = local_108;
      _swift_dynamicCast(local_108,&local_f0,puVar3,param_3,6);
      if (((ulong)puVar6 & 1) == 0) {
        (**(code **)(lVar2 + 0x38))(puVar1,1,1,param_3);
        lVar8 = local_100;
        (*pcVar10)(local_100,lVar9,param_3);
        pcVar10 = *(code **)(lVar2 + 0x20);
      }
      else {
        (**(code **)(lVar2 + 0x38))(puVar1,0,1,param_3);
        lVar8 = local_100;
        pcVar10 = *(code **)(lVar2 + 0x20);
        (*pcVar10)(local_100,puVar1,param_3);
      }
      (*pcVar10)(local_f8,lVar8,param_3);
      FUN_10003f094(&local_c0);
      FUN_10003f094(auStack_90);
      goto LAB_100538684;
    }
    local_d0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    FUN_100040bb4(&local_f0,&DAT_100aab450,&DAT_1008388b0);
    FUN_10003f094(auStack_90);
  }
  (*pcVar10)(local_f8,lVar9,param_3);
LAB_100538684:
  (**(code **)(param_4 + 0x28))(param_3,param_4);
  (**(code **)(param_4 + 0x30))();
  pcVar10 = *(code **)(lVar2 + 8);
  (*pcVar10)(param_2,param_3);
  (*pcVar10)(lVar9,param_3);
  return;
}

