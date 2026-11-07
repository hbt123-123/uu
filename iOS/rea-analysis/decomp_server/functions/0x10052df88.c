// rea decompile_all
// name: FUN_10052df88
// address: 0x10052df88
// body: available
// range: 0x10052df88-0x10052e507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010052e260) */

void FUN_10052df88(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong *unaff_x20;
  ulong uVar11;
  long unaff_x21;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong local_140;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 auStack_e0 [24];
  undefined8 local_c8;
  long lStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong auStack_70 [2];
  ulong local_58;
  
  lVar14 = *(long *)(param_3 + -8);
  lVar12 = (long)&local_140 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10052d69c(param_2);
  if (unaff_x21 == 0) {
    (**(code **)(lVar14 + 0x10))(lVar12,param_1,param_3);
    puVar3 = &DAT_100aaa138;
    FUN_100004bb4(&DAT_100aaa138,&DAT_1008358e0);
    puVar4 = &local_110;
    _swift_dynamicCast(puVar4,lVar12,param_3,puVar3,6);
    if ((int)puVar4 == 0) {
      local_f0 = 0;
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      FUN_100040bb4(&local_110,&DAT_100aaa140,&DAT_100837af0);
      puVar5 = param_3;
      _swift_conformsToProtocol(param_3,&TargetProtocolDescriptor_10090176c);
      if (puVar5 == (undefined1 *)0x0) {
        FUN_1004f9a9c();
        _swift_allocError(&DAT_1009d0558,puVar5,0,0);
        *puVar5 = 4;
        _swift_willThrow();
      }
      else {
        (**(code **)(puVar5 + 8))(&local_b8,param_3,puVar5);
        local_138 = unaff_x20[2];
        local_140 = unaff_x20[3];
        local_118 = unaff_x20[4];
        local_120 = unaff_x20[5];
        local_128 = unaff_x20[6];
        local_130 = unaff_x20[7];
        uVar13 = unaff_x20[8];
        local_58 = uStack_b0;
        local_78 = uStack_a0;
        auStack_70[0] = local_a8;
        local_88 = uStack_90;
        uStack_80 = local_98;
        unaff_x20[5] = uStack_a0;
        unaff_x20[4] = local_a8;
        unaff_x20[7] = uStack_90;
        unaff_x20[6] = local_98;
        unaff_x20[3] = uStack_b0;
        unaff_x20[2] = local_b8;
        _swift_bridgeObjectRetain(uVar13);
        _swift_retain(local_b8);
        FUN_10007f314(&local_58,auStack_e0,&DAT_100aaa400,&DAT_100837ad0);
        FUN_10007f314(auStack_70,auStack_e0,&DAT_100aaa3e8,&DAT_100837fb0);
        FUN_10007f314(&local_78,auStack_e0,&DAT_100aaa3e8,&DAT_100837fb0);
        FUN_10007f314(&uStack_80,auStack_e0,&DAT_100aaa3f0,&DAT_100837ae0);
        FUN_10007f314(&local_88,auStack_e0,&DAT_100aaa3f8,&DAT_100837fc0);
        FUN_1005320b4(param_1);
        (**(code **)(param_4 + 0x48))();
        uVar2 = local_138;
        uVar1 = local_140;
        uVar11 = *unaff_x20;
        uVar6 = uVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar7 = uVar11;
        if ((uVar6 & 1) == 0) {
          uVar7 = 0;
          FUN_100506f84(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
        }
        uVar6 = *(ulong *)(uVar7 + 0x10);
        uVar11 = uVar7;
        if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
          uVar11 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
          FUN_100506f84(uVar11,uVar6 + 1,1,uVar7);
        }
        *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
        *(undefined1 *)(uVar11 + uVar6 + 0x20) = 0x7d;
        _swift_release(local_b8);
        FUN_100040bb4(&local_58,&DAT_100aaa400,&DAT_100837ad0);
        FUN_100040bb4(auStack_70,&DAT_100aaa3e8,&DAT_100837fb0);
        FUN_100040bb4(&local_78,&DAT_100aaa3e8,&DAT_100837fb0);
        FUN_100040bb4(&uStack_80,&DAT_100aaa3f0,&DAT_100837ae0);
        FUN_100040bb4(&local_88,&DAT_100aaa3f8,&DAT_100837fc0);
        *unaff_x20 = uVar11;
        *(undefined2 *)(unaff_x20 + 1) = 0x2c;
        _swift_release(unaff_x20[2]);
        _swift_bridgeObjectRelease(unaff_x20[3]);
        _swift_bridgeObjectRelease(unaff_x20[4]);
        _swift_bridgeObjectRelease(unaff_x20[5]);
        _swift_bridgeObjectRelease(unaff_x20[6]);
        uVar6 = unaff_x20[7];
        unaff_x20[2] = uVar2;
        unaff_x20[3] = uVar1;
        unaff_x20[4] = local_118;
        unaff_x20[5] = local_120;
        unaff_x20[6] = local_128;
        unaff_x20[7] = local_130;
        _swift_bridgeObjectRelease(uVar6);
        _swift_bridgeObjectRelease(unaff_x20[8]);
        unaff_x20[8] = uVar13;
      }
    }
    else {
      thunk_FUN_1000a0074(&local_110,auStack_e0);
      FUN_10003f030(auStack_e0,local_c8);
      uVar10 = 0x1000000;
      if (*(char *)((long)unaff_x20 + 0x4b) == '\0') {
        uVar10 = 0;
      }
      uVar9 = 0x10000;
      if (*(char *)((long)unaff_x20 + 0x4a) == '\0') {
        uVar9 = 0;
      }
      uVar8 = 0x100;
      if (*(char *)((long)unaff_x20 + 0x49) == '\0') {
        uVar8 = 0;
      }
      (**(code **)(lStack_c0 + 8))(uVar8 | (byte)unaff_x20[9] | uVar9 | uVar10,local_c8,lStack_c0);
      FUN_1004fa030();
      FUN_10003f094(auStack_e0);
    }
  }
  return;
}

