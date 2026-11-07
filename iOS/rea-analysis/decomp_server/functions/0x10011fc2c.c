// rea decompile_all
// name: FUN_10011fc2c
// address: 0x10011fc2c
// body: available
// range: 0x10011fc2c-0x1001207a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10011fc2c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  uint uVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined1 auStack_300 [16];
  undefined4 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  long local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined1 *local_2b0;
  undefined8 local_2a8;
  undefined1 auStack_298 [24];
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined1 *puStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  ulong local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined1 auStack_1b8 [24];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 local_70;
  
  uStack_138 = param_2[0xd];
  local_140 = param_2[0xc];
  uStack_128 = param_2[0xf];
  uStack_130 = param_2[0xe];
  uStack_118 = param_2[0x11];
  local_120 = param_2[0x10];
  local_110 = param_2[0x12];
  uStack_178 = param_2[5];
  local_180 = param_2[4];
  uStack_168 = param_2[7];
  uStack_170 = param_2[6];
  uStack_158 = param_2[9];
  local_160 = param_2[8];
  uStack_148 = param_2[0xb];
  uStack_150 = param_2[10];
  uStack_198 = param_2[1];
  local_1a0 = *param_2;
  local_188 = param_2[3];
  uStack_190 = param_2[2];
  iVar6 = (int)&local_1a0;
  FUN_100040934();
  if (iVar6 == 1) {
    return;
  }
  uStack_98 = uStack_138;
  local_a0 = local_140;
  uStack_88 = uStack_128;
  uStack_90 = uStack_130;
  uStack_78 = uStack_118;
  local_80 = local_120;
  local_70 = local_110;
  uStack_d8 = uStack_178;
  local_e0 = local_180;
  uStack_c8 = uStack_168;
  uStack_d0 = uStack_170;
  uStack_b8 = uStack_158;
  local_c0 = local_160;
  uStack_a8 = uStack_148;
  uStack_b0 = uStack_150;
  uStack_f8 = uStack_198;
  local_100 = local_1a0;
  uStack_e8 = local_188;
  uStack_f0 = uStack_190;
  puVar7 = &local_100;
  FUN_100040948();
  switch((ulong)puVar7 & 0xffffffff) {
  case 0:
    puVar7 = &local_100;
    FUN_100040964();
    uVar15 = *puVar7;
    uVar1 = puVar7[1];
    uVar14 = puVar7[2];
    _swift_beginAccess(unaff_x20 + 0x10,&local_280,0,0);
    lVar10 = unaff_x20 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar10 == 0) {
      return;
    }
    FUN_1000c7f78();
    FUN_1002009d0(param_1,param_2,uVar15,uVar1,uVar14,0,0);
    goto LAB_100120308;
  case 5:
    puVar7 = &local_100;
    FUN_100040964();
    uStack_278 = puVar7[1];
    local_280 = *puVar7;
    puStack_268 = (undefined1 *)puVar7[3];
    local_270 = puVar7[2];
    uStack_258 = puVar7[5];
    local_260 = puVar7[4];
    local_250 = puVar7[6];
    _swift_beginAccess(unaff_x20 + 0x10,auStack_1b8,0,0);
    lVar10 = unaff_x20 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar10 == 0) {
      return;
    }
    FUN_1000c7f78();
    FUN_1001fb714(param_1,param_2,&local_280);
    goto LAB_1001203e4;
  case 6:
    puVar7 = &local_100;
    FUN_100040964();
    uStack_218 = puVar7[0xd];
    local_220 = puVar7[0xc];
    uStack_208 = puVar7[0xf];
    local_210 = puVar7[0xe];
    uStack_1f8 = puVar7[0x11];
    local_200 = puVar7[0x10];
    local_1f0 = puVar7[0x12];
    uStack_258 = puVar7[5];
    local_260 = puVar7[4];
    uStack_248 = puVar7[7];
    local_250 = puVar7[6];
    uStack_238 = puVar7[9];
    local_240 = puVar7[8];
    uStack_228 = puVar7[0xb];
    local_230 = puVar7[10];
    uStack_278 = puVar7[1];
    local_280 = *puVar7;
    puStack_268 = (undefined1 *)puVar7[3];
    local_270 = puVar7[2];
    _swift_beginAccess(unaff_x20 + 0x10,auStack_1b8,0,0);
    lVar10 = unaff_x20 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar10 == 0) {
      FUN_100401b14();
      FUN_1003fb4ec(FUN_10011e238,0,0xd00000000000009f,0x800000010088d5c0,0xd00000000000002a,
                    0x800000010088d960,0x8d,0);
    }
    else {
      FUN_1000c7c50();
      FUN_100203938(param_1,param_2,&local_280,param_3);
      _swift_release(lVar10);
    }
    break;
  case 7:
    puVar7 = &local_100;
    FUN_100040964();
    local_2a8 = *puVar7;
    uVar14 = puVar7[1];
    uVar15 = puVar7[2];
    local_2b0 = (undefined1 *)puVar7[3];
    local_2b8 = puVar7[4];
    uVar9 = puVar7[5];
    uVar1 = puVar7[6];
    uVar2 = puVar7[7];
    uVar16 = puVar7[8];
    bVar4 = *(byte *)(puVar7 + 9);
    _swift_beginAccess(unaff_x20 + 0x10,auStack_1b8,0,0);
    lVar10 = unaff_x20 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar10 != 0) {
      local_2c0 = uVar14;
      FUN_1000c7f78();
      _swift_beginAccess(lVar10 + 0x10,auStack_298,0,0);
      lVar8 = lVar10 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar8 != 0) {
        local_2c8 = uVar15;
        FUN_1000c8388();
        lVar11 = 0;
        FUN_1001bc1d8();
        uVar15 = 0;
        FUN_100153bbc(0);
        lVar8 = lVar11;
        _swift_dynamicCastClass(lVar11,uVar15);
        if (lVar8 == 0) {
          _swift_release(lVar10);
          _swift_unknownObjectRelease(lVar11);
          return;
        }
        if ((((uVar16 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) || (bVar4 != 0xff)) {
          uVar13 = 4;
          if ((bVar4 & 1) == 0) {
            uVar13 = 0;
          }
          uVar13 = uVar13 | (uint)(uVar16 >> 0x3c) & 3;
          if (uVar13 < 4) {
            if (uVar13 < 2) {
              if (uVar13 == 0) {
                local_240 = uVar16 & 0xcfffffffffffffff;
                local_280 = local_2a8;
                uStack_278 = local_2c0;
                local_270 = local_2c8;
                puStack_268 = local_2b0;
                local_260 = local_2b8;
                uStack_258 = uVar9;
                local_250 = uVar1;
                uStack_248 = uVar2;
                FUN_100157968(param_2,&local_280);
              }
              else {
                local_280 = local_2a8;
                uStack_278 = local_2c0;
                local_270 = local_2c8;
                puStack_268 = local_2b0;
                local_260 = local_2b8;
                uStack_258 = uVar9;
                local_250 = uVar1;
                FUN_100159d14(param_2,&local_280);
              }
            }
            else {
              local_2d0 = lVar11;
              if (uVar13 == 2) {
                local_280 = local_2a8;
                uStack_278 = local_2c0;
                local_270 = local_2c8;
                puStack_268 = local_2b0;
                local_260 = local_2b8;
                uStack_258 = uVar9;
                local_250 = uVar1;
                FUN_100159c0c(param_2,&local_280);
                lVar11 = local_2d0;
              }
              else {
                FUN_100401b14(0);
                FUN_1003fb45c(FUN_10015b534,0,0xd0000000000000a4,0x800000010088d870,
                              0xd000000000000036,0x800000010088d920,400,7);
                uVar14 = local_2a8;
                uVar1 = local_2c0;
                uVar15 = local_2c8;
                if ((*(byte *)(lVar8 + _TtC14UURemoteServer18ClipboardPCManager::
                                       remoteAssistFileTransferEnabled) & 1) == 0) {
                  local_2b0 = (undefined1 *)&local_2d0;
                  (*(code *)PTR____chkstk_darwin_100995498)();
                  uVar14 = local_2a8;
                  uVar1 = local_2c0;
                  uVar15 = local_2c8;
                  local_2f0 = (undefined4)local_2a8;
                  local_2e8 = local_2c0;
                  uStack_2e0 = local_2c8;
                  FUN_1003fb48c(FUN_100121bdc,auStack_300,0xd0000000000000a4,0x800000010088d870,
                                0xd000000000000036,0x800000010088d920,0x192,0);
                  FUN_10015d890(param_2,uVar14,uVar1,uVar15);
                  lVar11 = local_2d0;
                }
                else {
                  FUN_10015d890(param_2,local_2a8,local_2c0,local_2c8);
                  FUN_10015e6d0(uVar14,uVar1,uVar15);
                  lVar11 = local_2d0;
                }
              }
            }
          }
          else if (uVar13 < 6) {
            if (uVar13 == 4) {
              local_280 = local_2a8;
              uStack_278 = local_2c0;
              local_270 = local_2c8;
              puStack_268 = local_2b0;
              local_260 = local_2b8;
              uStack_258 = uVar9;
              FUN_10015b610(param_2,&local_280);
            }
            else {
              FUN_10015ee8c(param_2,local_2a8,local_2c0);
            }
          }
          else if (uVar13 == 6) {
            FUN_10015e898(param_2,local_2a8,local_2c0,local_2c8,local_2b0);
          }
          else {
            local_280 = local_2a8;
            uStack_278 = local_2c0;
            local_270 = local_2c8;
            puStack_268 = local_2b0;
            local_260 = local_2b8;
            FUN_10015527c(param_2,&local_280);
          }
        }
        _swift_unknownObjectRelease(lVar11);
      }
      _swift_release(lVar10);
    }
    break;
  case 8:
    puVar7 = &local_100;
    FUN_100040964();
    uVar15 = puVar7[1];
    uVar1 = puVar7[2];
    _swift_beginAccess(unaff_x20 + 0x10,&local_280,0,0);
    lVar10 = unaff_x20 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar10 != 0) {
      FUN_1000c7f78();
      puVar12 = auStack_1b8;
      _swift_beginAccess(lVar10 + 0x10,puVar12,0,0);
      lVar8 = lVar10 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar8 != 0) {
        FUN_1000c8388();
        uVar9 = 0;
        FUN_1001bc1d8(0);
        uVar14 = uVar9;
        _swift_getObjectType(uVar9);
        (**(code **)(puVar12 + 0x30))(uVar15,uVar1,uVar14,puVar12);
        _swift_unknownObjectRelease(uVar9);
      }
      FUN_100202170(param_1,param_2,1,1);
      _swift_release(lVar10);
    }
    break;
  case 10:
    puVar7 = &local_100;
    FUN_100040964();
    uVar14 = *puVar7;
    uVar3 = *(undefined4 *)(puVar7 + 1);
    uVar15 = puVar7[2];
    uVar1 = puVar7[3];
    _swift_beginAccess(unaff_x20 + 0x10,&local_280,0,0);
    lVar10 = unaff_x20 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar10 == 0) {
      return;
    }
    FUN_1000c7f78();
    FUN_1001fb250(param_1,param_2,uVar14,uVar3,uVar15,uVar1);
    goto LAB_100120458;
  case 0xb:
    puVar7 = &local_100;
    FUN_100040964();
    uVar15 = *puVar7;
    uVar1 = puVar7[1];
    uVar14 = puVar7[2];
    _swift_beginAccess(unaff_x20 + 0x10,&local_280,0,0);
    lVar10 = unaff_x20 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar10 == 0) {
      return;
    }
    FUN_1000c7f78();
    FUN_1001fb478(param_1,param_2,uVar15,uVar1,uVar14);
    goto LAB_100120308;
  case 0xd:
    puVar7 = &local_100;
    FUN_100040964();
    uVar15 = *puVar7;
    uVar1 = puVar7[1];
    uVar14 = puVar7[2];
    _swift_beginAccess(unaff_x20 + 0x10,&local_280,0,0);
    lVar10 = unaff_x20 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar10 == 0) {
      return;
    }
    FUN_1000c7f78();
    FUN_1001fad40(param_1,param_2,uVar15,uVar1,uVar14);
LAB_100120308:
    _swift_release(lVar10);
    break;
  case 0x14:
    puVar7 = &local_100;
    FUN_100040964();
    uVar14 = *puVar7;
    uVar5 = *(undefined1 *)(puVar7 + 1);
    uVar15 = puVar7[2];
    uVar1 = puVar7[3];
    _swift_beginAccess(unaff_x20 + 0x10,&local_280,0,0);
    lVar10 = unaff_x20 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar10 == 0) {
      return;
    }
    FUN_1000c7f78();
    FUN_1001faeb4(param_1,param_2,uVar14,uVar5,uVar15,uVar1);
LAB_100120458:
    _swift_release(lVar10);
    break;
  case 0x17:
    FUN_100040964(&local_100);
    _swift_beginAccess(unaff_x20 + 0x10,&local_280,0,0);
    lVar10 = unaff_x20 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar10 == 0) {
      return;
    }
    FUN_1000c7f78();
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1001ff388,0,0xd0000000000000a0,0x800000010088d990,0xd000000000000034,
                  0x800000010088da40,0x1de,0);
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    uVar15 = *(undefined8 *)(DAT_100b360a8 + 0x98);
    _swift_retain(uVar15);
    FUN_1000bba58();
    _swift_release(uVar15);
    FUN_100201d7c(param_1,param_2,0);
    goto LAB_1001203e4;
  case 0x19:
    puVar7 = &local_100;
    FUN_100040964();
    puStack_268 = (undefined1 *)puVar7[3];
    local_270 = puVar7[2];
    uStack_258 = puVar7[5];
    local_260 = puVar7[4];
    uStack_248 = puVar7[7];
    local_250 = puVar7[6];
    local_240 = puVar7[8];
    uStack_278 = puVar7[1];
    local_280 = *puVar7;
    _swift_beginAccess(unaff_x20 + 0x10,auStack_1b8,0,0);
    lVar10 = unaff_x20 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar10 == 0) {
      return;
    }
    FUN_1000c7f78();
    FUN_1001fbb88(param_1,param_2,&local_280);
    goto LAB_1001203e4;
  case 0x1a:
    FUN_100040964(&local_100);
    _swift_beginAccess(unaff_x20 + 0x10,&local_280,0,0);
    lVar10 = unaff_x20 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar10 == 0) {
      return;
    }
    FUN_1000c7f78();
    FUN_100202430(param_1,param_2);
LAB_1001203e4:
    _swift_release(lVar10);
    break;
  case 0x1b:
    puVar7 = &local_100;
    FUN_100040964();
    uVar3 = *(undefined4 *)puVar7;
    uVar15 = puVar7[1];
    uVar1 = puVar7[2];
    _swift_beginAccess(unaff_x20 + 0x10,auStack_1b8,0,0);
    lVar10 = unaff_x20 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar10 != 0) {
      FUN_1000c7f78();
      _swift_release(lVar10);
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      uVar14 = *(undefined8 *)(DAT_100b360a8 + 0x90);
      FUN_1000408d0(param_2,&local_280);
      FUN_1001e1b20(uVar3,uVar15,uVar1,uVar14,uVar3,param_2,param_1);
      FUN_1000914e4(param_2);
    }
  }
  return;
}

