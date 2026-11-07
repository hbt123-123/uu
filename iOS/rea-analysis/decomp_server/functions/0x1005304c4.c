// rea decompile_all
// name: FUN_1005304c4
// address: 0x1005304c4
// body: available
// range: 0x1005304c4-0x100530ceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100530658) */
/* WARNING: Removing unreachable block (ram,0x000100530c5c) */
/* WARNING: Removing unreachable block (ram,0x00010053065c) */
/* WARNING: Removing unreachable block (ram,0x000100530a50) */

void FUN_1005304c4(long param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  long unaff_x21;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  ulong local_108;
  code *local_100;
  ulong local_f8;
  code *local_f0;
  long local_e8;
  ulong local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined1 auStack_c0 [8];
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
  
  lVar12 = *(long *)(param_3 + -8);
  uVar4 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  uVar8 = ((long)&local_120 - uVar4) - uVar4;
  FUN_10052d69c(param_2);
  if (unaff_x21 == 0) {
    uVar13 = *unaff_x20;
    uVar11 = uVar13;
    local_f8 = uVar8;
    local_e8 = (long)&local_120 - uVar4;
    local_e0 = uVar8 - uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar13;
    local_d8 = lVar12;
    local_c8 = param_1;
    if ((uVar11 & 1) == 0) {
      uVar4 = 0;
      FUN_100506f84(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
    }
    lVar12 = local_e8;
    uVar8 = *(ulong *)(uVar4 + 0x10);
    uVar11 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar8) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_100506f84(uVar11,uVar8 + 1,1,uVar4);
    }
    *(ulong *)(uVar11 + 0x10) = uVar8 + 1;
    *(undefined1 *)(uVar11 + uVar8 + 0x20) = 0x5b;
    *unaff_x20 = uVar11;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    puVar1 = param_3;
    _swift_conformsToProtocol(param_3,&TargetProtocolDescriptor_100900904);
    lVar9 = local_c8;
    local_d0 = param_4;
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = param_3;
      _swift_conformsToProtocol(param_3,&TargetProtocolDescriptor_10090176c);
      if (puVar1 == (undefined1 *)0x0) {
        FUN_1004f9a9c();
        _swift_allocError(&DAT_1009d0558,puVar1,0,0);
        *puVar1 = 4;
        _swift_willThrow();
        return;
      }
      (**(code **)(puVar1 + 8))(&local_b8,param_3,puVar1);
      local_e0 = unaff_x20[2];
      local_f0 = (code *)unaff_x20[3];
      local_f8 = unaff_x20[4];
      local_100 = (code *)unaff_x20[5];
      local_110 = unaff_x20[6];
      local_118 = unaff_x20[7];
      local_108 = unaff_x20[8];
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
      _swift_bridgeObjectRetain();
      local_120 = local_b8;
      _swift_retain(local_b8);
      FUN_10007f314(&local_58,auStack_c0,&DAT_100aaa400,&DAT_100837ad0);
      FUN_10007f314(auStack_70,auStack_c0,&DAT_100aaa3e8,&DAT_100837fb0);
      FUN_10007f314(&local_78,auStack_c0,&DAT_100aaa3e8,&DAT_100837fb0);
      FUN_10007f314(&uStack_80,auStack_c0,&DAT_100aaa3f0,&DAT_100837ae0);
      FUN_10007f314(&local_88,auStack_c0,&DAT_100aaa3f8,&DAT_100837fc0);
      lVar9 = local_c8;
      lVar14 = local_c8;
      __sSa8endIndexSivg(local_c8,param_3);
      if (lVar14 != 0) {
        lVar14 = 0;
        do {
          __sSayxSicig(lVar12,lVar14,lVar9,param_3);
          lVar9 = local_d0;
          lVar3 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100530c68);
            (*pcVar10)();
          }
          FUN_100532248(lVar12);
          (**(code **)(lVar9 + 0x48))();
          (**(code **)(local_d8 + 8))(lVar12,param_3);
          uVar11 = *unaff_x20;
          uVar4 = uVar11;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar8 = uVar11;
          if ((uVar4 & 1) == 0) {
            uVar8 = 0;
            FUN_100506f84(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
          }
          uVar4 = *(ulong *)(uVar8 + 0x10);
          uVar11 = uVar8;
          if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar4) {
            uVar11 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
            FUN_100506f84(uVar11,uVar4 + 1,1,uVar8);
          }
          lVar9 = local_c8;
          *(ulong *)(uVar11 + 0x10) = uVar4 + 1;
          *(undefined1 *)(uVar11 + uVar4 + 0x20) = 0x7d;
          *unaff_x20 = uVar11;
          *(undefined2 *)(unaff_x20 + 1) = 0x2c;
          lVar2 = local_c8;
          __sSa8endIndexSivg(local_c8,param_3);
          lVar14 = lVar14 + 1;
        } while (lVar3 != lVar2);
      }
      _swift_release(local_120);
      FUN_100040bb4(&local_58,&DAT_100aaa400,&DAT_100837ad0);
      FUN_100040bb4(auStack_70,&DAT_100aaa3e8,&DAT_100837fb0);
      FUN_100040bb4(&local_78,&DAT_100aaa3e8,&DAT_100837fb0);
      FUN_100040bb4(&uStack_80,&DAT_100aaa3f0,&DAT_100837ae0);
      FUN_100040bb4(&local_88,&DAT_100aaa3f8,&DAT_100837fc0);
      _swift_release(unaff_x20[2]);
      _swift_bridgeObjectRelease(unaff_x20[3]);
      _swift_bridgeObjectRelease(unaff_x20[4]);
      _swift_bridgeObjectRelease(unaff_x20[5]);
      _swift_bridgeObjectRelease(unaff_x20[6]);
      uVar4 = unaff_x20[7];
      unaff_x20[2] = local_e0;
      unaff_x20[3] = (ulong)local_f0;
      unaff_x20[4] = local_f8;
      unaff_x20[5] = (ulong)local_100;
      unaff_x20[6] = local_110;
      unaff_x20[7] = local_118;
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(unaff_x20[8]);
      unaff_x20[8] = local_108;
    }
    else {
      lVar12 = local_c8;
      __sSa8endIndexSivg(local_c8,param_3);
      uVar4 = local_e0;
      if (lVar12 != 0) {
        uVar7 = 0x1000000;
        if (*(char *)((long)unaff_x20 + 0x4b) == '\0') {
          uVar7 = 0;
        }
        uVar6 = 0x10000;
        if (*(char *)((long)unaff_x20 + 0x4a) == '\0') {
          uVar6 = 0;
        }
        uVar5 = 0x100;
        if (*(char *)((long)unaff_x20 + 0x49) == '\0') {
          uVar5 = 0;
        }
        uVar5 = uVar5 | (byte)unaff_x20[9];
        __sSayxSicig(local_e0,0,lVar9,param_3);
        lVar12 = local_d8;
        uVar8 = local_f8;
        local_f0 = *(code **)(local_d8 + 0x20);
        (*local_f0)(local_f8,uVar4,param_3);
        local_e8 = CONCAT44(local_e8._4_4_,uVar5);
        FUN_100538a2c(uVar5 | uVar6 | uVar7,param_3,local_d0);
        FUN_1004fa030();
        pcVar10 = *(code **)(lVar12 + 8);
        (*pcVar10)(uVar8,param_3);
        lVar12 = lVar9;
        __sSa8endIndexSivg(lVar9,param_3);
        if (lVar12 != 1) {
          local_d8 = CONCAT44(local_d8._4_4_,uVar6 | uVar7);
          lVar12 = 1;
          local_100 = pcVar10;
          do {
            uVar4 = local_e0;
            __sSayxSicig(local_e0,lVar12,lVar9,param_3);
            lVar14 = lVar12 + 1;
            if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x100530c6c);
              (*pcVar10)();
            }
            (*local_f0)(uVar8,uVar4,param_3);
            uVar13 = *unaff_x20;
            uVar4 = uVar13;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar11 = uVar13;
            if ((uVar4 & 1) == 0) {
              uVar11 = 0;
              FUN_100506f84(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
            }
            uVar4 = *(ulong *)(uVar11 + 0x10);
            uVar13 = uVar11;
            if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar4) {
              uVar13 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
              FUN_100506f84(uVar13,uVar4 + 1,1,uVar11);
            }
            *(ulong *)(uVar13 + 0x10) = uVar4 + 1;
            *(undefined1 *)(uVar13 + uVar4 + 0x20) = 0x2c;
            *unaff_x20 = uVar13;
            FUN_100538a2c((uint)local_e8 | (uint)local_d8,param_3,local_d0);
            FUN_1004fa030();
            (*local_100)(uVar8,param_3);
            lVar9 = local_c8;
            lVar3 = local_c8;
            __sSa8endIndexSivg(local_c8,param_3);
            lVar12 = lVar12 + 1;
          } while (lVar14 != lVar3);
        }
      }
    }
    uVar11 = *unaff_x20;
    uVar4 = uVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar8 = uVar11;
    if ((uVar4 & 1) == 0) {
      uVar8 = 0;
      FUN_100506f84(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
    }
    uVar4 = *(ulong *)(uVar8 + 0x10);
    uVar11 = uVar8;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar4) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      FUN_100506f84(uVar11,uVar4 + 1,1,uVar8);
    }
    *(ulong *)(uVar11 + 0x10) = uVar4 + 1;
    *(undefined1 *)(uVar11 + uVar4 + 0x20) = 0x5d;
    *unaff_x20 = uVar11;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}

