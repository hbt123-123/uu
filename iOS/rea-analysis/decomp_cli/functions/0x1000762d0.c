// rea decompile_all
// name: FUN_1000762d0
// address: 0x1000762d0
// body: available
// range: 0x1000762d0-0x100076687 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100076578) */

void FUN_1000762d0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x21;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long local_140 [4];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined7 uStack_e8;
  undefined1 local_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 auStack_90 [48];
  
  local_140[2] = *(long *)(param_3 + -8);
  uVar7 = *(long *)(local_140[2] + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar11 = (long)local_140 - uVar7;
  puVar10 = (undefined8 *)(lVar11 - uVar7);
  lVar1 = 0;
  local_140[1] = param_1;
  local_140[3] = param_2;
  FUN_1000767bc();
  lVar12 = *(long *)(lVar1 + -8);
  uVar7 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = (long)puVar10 - uVar7;
  lVar2 = param_3;
  lVar6 = param_4;
  FUN_10007625c(param_3,param_4);
  FUN_1000786bc(auStack_90,local_140[3],lVar2,lVar6);
  lVar2 = local_140[2];
  if (unaff_x21 == 0) {
    puVar3 = &DAT_100104408;
    local_140[0] = param_4;
    local_140[3] = lVar9 - uVar7;
    FUN_10000eb08(&DAT_100104408,&DAT_1000d5bb0);
    puVar4 = &local_d0;
    _swift_dynamicCast(puVar4,auStack_90,puVar3,&DAT_1000fae00,0);
    lVar6 = local_140[3];
    if ((int)puVar4 == 0) {
      lVar5 = local_140[3];
      _swift_dynamicCast(local_140[3],auStack_90,puVar3,lVar1,0);
      if ((int)lVar5 == 0) {
        puVar4 = puVar10;
        _swift_dynamicCast(puVar10,auStack_90,puVar3,param_3,0);
        lVar6 = local_140[1];
        if ((int)puVar4 == 0) {
          FUN_100054664();
          _swift_allocError(&DAT_1000fa8c8,puVar4,0,0);
          *puVar4 = 3;
          puVar4[2] = 0;
          puVar4[1] = 0;
          puVar4[4] = 0;
          puVar4[3] = 0;
          puVar4[6] = 0;
          puVar4[5] = 0;
          puVar4[8] = 0;
          puVar4[7] = 0;
          puVar4[9] = 0;
          *(undefined1 *)(puVar4 + 10) = 0x11;
          _swift_willThrow();
          FUN_100001428(auStack_90);
          return;
        }
        pcVar8 = *(code **)(lVar2 + 0x20);
        (*pcVar8)(lVar11,puVar10,param_3);
        (**(code **)(local_140[0] + 0x18))();
        (*pcVar8)(lVar6,lVar11,param_3);
      }
      else {
        (**(code **)(lVar12 + 0x20))(lVar9,lVar6,lVar1);
        FUN_10006affc(0,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
        FUN_10005ba24(local_140[1]);
        (**(code **)(lVar12 + 8))(lVar9,lVar1);
      }
      FUN_100001428(auStack_90);
    }
    else {
      FUN_100054664();
      _swift_allocError(&DAT_1000fa8c8,puVar4,0,0);
      *(undefined1 *)puVar4 = local_98;
      *(undefined8 *)((long)puVar4 + 9) = uStack_118;
      *(undefined8 *)((long)puVar4 + 1) = local_120;
      *(undefined8 *)((long)puVar4 + 0x19) = uStack_108;
      *(undefined8 *)((long)puVar4 + 0x11) = local_110;
      puVar4[9] = CONCAT71(uStack_d8,uStack_d9);
      puVar4[8] = CONCAT71(uStack_e0,local_e1);
      *(ulong *)((long)puVar4 + 0x39) = CONCAT17(local_e1,uStack_e8);
      *(undefined8 *)((long)puVar4 + 0x31) = uStack_f0;
      *(undefined8 *)((long)puVar4 + 0x29) = uStack_f8;
      *(undefined8 *)((long)puVar4 + 0x21) = local_100;
      *(undefined1 *)(puVar4 + 10) = 0;
      _swift_willThrow();
      FUN_1000767c8(local_d0,uStack_c8,local_c0);
      FUN_10002c9fc(local_b8,uStack_b0,local_a8);
      _swift_bridgeObjectRelease(local_a0);
      FUN_100001428(auStack_90);
    }
  }
  return;
}

