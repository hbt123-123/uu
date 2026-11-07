// rea decompile_all
// name: FUN_1000e553c
// address: 0x1000e553c
// body: available
// range: 0x1000e553c-0x1000e646f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000e5bec) */
/* WARNING: Removing unreachable block (ram,0x0001000e62fc) */
/* WARNING: Removing unreachable block (ram,0x0001000e5c28) */
/* WARNING: Removing unreachable block (ram,0x0001000e59c0) */
/* WARNING: Removing unreachable block (ram,0x0001000e614c) */

void FUN_1000e553c(undefined4 *param_1,undefined4 param_2,undefined8 param_3,long param_4,
                  ulong param_5)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  long extraout_x8;
  long *plVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined *puVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  ulong uVar16;
  long unaff_x20;
  long lVar17;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  long lVar21;
  code *pcVar22;
  double dVar23;
  undefined1 auStack_280 [16];
  undefined4 auStack_270 [2];
  long alStack_268 [3];
  long lStack_250;
  uint local_244;
  long local_240;
  ulong local_238;
  long local_230;
  ulong local_228;
  long local_220;
  char *local_218;
  char *local_210;
  undefined4 *local_208;
  double local_200;
  undefined8 uStack_1f8;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d4;
  undefined8 local_1d0;
  long local_1c8;
  long local_1c0;
  undefined *local_1b8;
  long *local_1b0;
  char *local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  undefined *local_188;
  undefined *local_180;
  char *local_178;
  long local_170;
  long *local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long local_128;
  ulong local_120;
  undefined *local_118;
  uint local_10c;
  undefined *local_80 [2];
  
  lVar3 = 0;
  local_208 = param_1;
  local_1d4 = param_2;
  local_1d0 = param_3;
  FUN_1000e984c();
  local_1c8 = *(long *)(lVar3 + -8);
  local_1c0 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_1c8 + 0x40));
  lVar3 = (long)&lStack_250 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)();
  plVar14 = (long *)(lVar3 - extraout_x12);
  puVar15 = &DAT_100a76718;
  local_168 = plVar14;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)plVar14 - extraout_x8_00;
  puVar15 = &DAT_100a77e78;
  local_220 = lVar3;
  FUN_100004bb4(&DAT_100a77e78,&DAT_10080cca8);
  local_1b8 = puVar15;
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar14 = (long *)(lVar3 - extraout_x8_01);
  lVar3 = 0;
  local_1b0 = plVar14;
  __s10Foundation17URLResourceValuesVMa();
  local_158 = *(long *)(lVar3 + -8);
  local_150 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_158 + 0x40));
  lVar17 = (long)plVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar15 = (undefined *)(lVar17 - extraout_x12_00);
  local_118 = puVar15;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar3 = (long)puVar15 - extraout_x12_01;
  local_170 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar15 = (undefined *)(lVar3 - extraout_x12_02);
  lVar3 = 0;
  local_180 = puVar15;
  __s10Foundation3URLVMa();
  lVar21 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar21 + 0x40));
  uVar20 = (long)puVar15 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  if (param_5 == 0) {
    local_10c = 1;
  }
  else {
    local_10c = (uint)(*(long *)(param_5 + 0x10) == 0);
  }
  local_228 = param_5;
  local_190 = param_4;
  FUN_1000d6228(param_4,1,*(undefined8 *)(unaff_x20 + 0x10));
  local_80[0] = PTR___swiftEmptyArrayStorage_100995ea0;
  local_120 = *(ulong *)(param_4 + 0x10);
  if (local_120 == 0) {
    _swift_bridgeObjectRelease();
  }
  else {
    uVar16 = 0;
    local_244 = local_10c ^ 1;
    local_128 = param_4 + ((ulong)*(byte *)(lVar21 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar21 + 0x50) ^ 0xffffffffffffffff));
    local_130 = *(undefined8 *)PTR__NSURLIsRegularFileKey_100995380;
    local_178 = "";
    local_1a8 = "erateReadError:)";
    local_1e0 = *(undefined8 *)PTR__NSURLFileSizeKey_100995368;
    local_1e8 = *(undefined8 *)PTR__NSURLContentModificationDateKey_100995358;
    local_210 = "D:url:requestedFiles:)";
    local_188 = PTR___swiftEmptyArrayStorage_100995ea0;
    local_218 = s________prepare___taskId__100887f50 + 0x40;
    uStack_138 = 2;
    local_140 = 1;
    uStack_1f8 = 4;
    local_200 = 9.88131291682493e-324;
    puVar15 = local_118;
    local_198 = lVar17;
    local_160 = lVar3;
    local_148 = param_4;
    do {
      if (*(ulong *)(local_148 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x1000e6450);
        (*pcVar22)();
      }
      pcVar22 = *(code **)(lVar21 + 0x10);
      (*pcVar22)(uVar20,local_128 + *(long *)(lVar21 + 0x48) * uVar16,lVar3);
      puVar6 = &DAT_100a76708;
      FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
      if ((local_10c & 1) == 0) {
        _swift_initStackObject();
        *(undefined8 *)(puVar6 + 0x18) = uStack_138;
        *(undefined8 *)(puVar6 + 0x10) = local_140;
        *(undefined8 *)(puVar6 + 0x20) = local_130;
        puVar15 = puVar6;
        FUN_100128084(puVar6);
        _swift_setDeallocating(puVar6);
        FUN_1000d27dc(puVar6 + 0x20,FUN_10000603c);
        lVar3 = local_170;
        __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
                  (local_170,puVar15);
        _swift_bridgeObjectRelease(puVar15);
        lVar7 = local_150;
        lVar17 = local_158;
        puVar15 = local_180;
        puVar4 = local_180;
        (**(code **)(local_158 + 0x20))(local_180,lVar3,local_150);
        __s10Foundation17URLResourceValuesV13isRegularFileSbSgvg();
        uVar2 = (uint)puVar4;
        pcVar19 = *(code **)(lVar17 + 8);
      }
      else {
        _swift_initStackObject();
        *(undefined8 *)(puVar6 + 0x18) = uStack_138;
        *(undefined8 *)(puVar6 + 0x10) = local_140;
        *(undefined8 *)(puVar6 + 0x20) = local_130;
        puVar4 = puVar6;
        FUN_100128084();
        _swift_setDeallocating(puVar6);
        FUN_1000d27dc(puVar6 + 0x20,FUN_10000603c);
        __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
                  (puVar15,puVar4);
        _swift_bridgeObjectRelease();
        __s10Foundation17URLResourceValuesV13isRegularFileSbSgvg();
        uVar2 = (uint)puVar4;
        pcVar19 = *(code **)(local_158 + 8);
        lVar7 = local_150;
      }
      (*pcVar19)(puVar15,lVar7);
      lVar17 = local_198;
      puVar15 = local_118;
      lVar3 = local_160;
      if (((uVar2 & 0xff) != 2) && (((ulong)puVar4 & 1) != 0)) {
        puVar15 = &DAT_100a76708;
        FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
        _swift_initStackObject();
        *(undefined8 *)(puVar15 + 0x18) = uStack_1f8;
        *(double *)(puVar15 + 0x10) = local_200;
        *(undefined8 *)(puVar15 + 0x20) = local_1e0;
        *(undefined8 *)(puVar15 + 0x28) = local_1e8;
        puVar6 = puVar15;
        dVar23 = local_200;
        FUN_100128084(puVar15);
        _swift_setDeallocating(puVar15);
        uVar13 = 0;
        FUN_10000603c(0);
        _swift_arrayDestroy(puVar15 + 0x20,2,uVar13);
        __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
                  (lVar17,puVar6);
        _swift_bridgeObjectRelease(puVar6);
        lVar5 = local_190;
        uVar10 = uVar20;
        FUN_1000d7168();
        lVar18 = lVar5;
        uVar11 = uVar10;
        __s10Foundation17URLResourceValuesV8fileSizeSiSgvg();
        lVar7 = local_220;
        lVar3 = 0;
        if ((uVar11 & 1) == 0) {
          lVar3 = lVar18;
        }
        if (lVar3 < 0) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x1000e6460);
          (*pcVar22)();
        }
        local_240 = lVar3;
        local_238 = uVar10;
        local_230 = lVar5;
        __s10Foundation17URLResourceValuesV23contentModificationDateAA0F0VSgvg(local_220);
        lVar5 = 0;
        __s10Foundation4DateVMa();
        lVar18 = *(long *)(lVar5 + -8);
        lVar3 = lVar7;
        (**(code **)(lVar18 + 0x30))(lVar7,1,lVar5);
        if ((int)lVar3 == 1) {
          (*pcVar19)(lVar17,local_150);
          FUN_100040bb4(lVar7,&DAT_100a76718,&DAT_10080ccc0);
          dVar23 = 0.0;
        }
        else {
          __s10Foundation4DateV21timeIntervalSince1970Sdvg();
          (*pcVar19)(local_198,local_150);
          (**(code **)(lVar18 + 8))(lVar7,lVar5);
          if (0x7fefffffffffffff < (ulong)ABS(dVar23)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1000e6470);
            (*pcVar22)();
          }
          if (dVar23 <= -1.0) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1000e6464);
            (*pcVar22)();
          }
          if (1.8446744073709552e+19 <= dVar23) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1000e6468);
            (*pcVar22)();
          }
        }
        lVar3 = local_160;
        plVar14 = local_1b0;
        (*pcVar22)((long)local_1b0 + (long)*(int *)(local_1c0 + 0x1c),uVar20,local_160);
        uVar10 = local_238;
        *plVar14 = local_230;
        plVar14[1] = uVar10;
        plVar14[2] = local_240;
        plVar14[3] = (long)dVar23;
        _swift_storeEnumTagMultiPayload(plVar14,local_1b8,0);
        plVar1 = local_168;
        plVar12 = local_168;
        FUN_1000823d8(plVar14,local_168,FUN_1000e984c);
        __s10Foundation3URLV17lastPathComponentSSvg();
        lVar17 = *plVar1;
        lVar7 = plVar1[1];
        uVar10 = (ulong)plVar14 & 0xffffffffffff;
        if (((ulong)plVar12 & 0x2000000000000000) != 0) {
          uVar10 = (ulong)plVar12 >> 0x38 & 0xf;
        }
        if (uVar10 == 0) {
          __sSS5countSivg(lVar17,lVar7);
          lVar5 = 0x616f6c6e776f642e;
          __sSS5countSivg(0x616f6c6e776f642e,0xec000000676e6964);
          _swift_bridgeObjectRelease(plVar12);
          lVar7 = lVar17 + lVar5;
          if (SCARRY8(lVar17,lVar5)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1000e646c);
            (*pcVar22)();
          }
        }
        else {
          __sSS5countSivg();
          if (SCARRY8((long)plVar14,1)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1000e6454);
            (*pcVar22)();
          }
          __sSS5countSivg(lVar17,lVar7);
          lVar5 = (long)plVar14 + 1 + lVar17;
          if (SCARRY8((long)plVar14 + 1,lVar17)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1000e6458);
            (*pcVar22)();
          }
          lVar17 = 0x616f6c6e776f642e;
          __sSS5countSivg(0x616f6c6e776f642e,0xec000000676e6964);
          _swift_bridgeObjectRelease(plVar12);
          lVar7 = lVar5 + lVar17;
          if (SCARRY8(lVar5,lVar17)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1000e645c);
            (*pcVar22)();
          }
        }
        if (200 < lVar7) {
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(undefined4 *)(uVar20 - 0x20) = local_1d4;
          lVar17 = local_190;
          *(undefined8 *)(uVar20 - 0x18) = local_1d0;
          *(long *)(uVar20 - 0x10) = lVar17;
          *(long **)(uVar20 - 8) = local_168;
          FUN_1003fb4bc(FUN_1000ea350,uVar20 - 0x30,0xd0000000000000a9,
                        (ulong)local_178 | 0x8000000000000000,0xd000000000000036,
                        (ulong)local_218 | 0x8000000000000000,0x10e,0);
        }
        FUN_100082394(local_168,local_1a0,FUN_1000e984c);
        puVar6 = local_188;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar15 = local_118;
        if (((ulong)puVar6 & 1) == 0) {
          puVar6 = (undefined *)0x0;
          FUN_100035e40(0,*(long *)(local_188 + 0x10) + 1,1);
          local_188 = puVar6;
        }
        uVar10 = *(ulong *)(local_188 + 0x10);
        if (*(ulong *)(local_188 + 0x18) >> 1 <= uVar10) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(local_188 + 0x18));
          FUN_100035e40(puVar6,uVar10 + 1,1,local_188);
          local_188 = puVar6;
        }
        puVar6 = local_188;
        *(ulong *)(local_188 + 0x10) = uVar10 + 1;
        FUN_1000823d8(local_1a0,
                      local_188 +
                      *(long *)(local_1c8 + 0x48) * uVar10 +
                      ((ulong)*(byte *)(local_1c8 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(local_1c8 + 0x50) ^ 0xffffffffffffffff)),FUN_1000e984c);
        local_80[0] = puVar6;
        FUN_1000d27dc(local_168,FUN_1000e984c);
      }
      uVar16 = uVar16 + 1;
      (**(code **)(lVar21 + 8))(uVar20,lVar3);
    } while (local_120 != uVar16);
    _swift_bridgeObjectRelease();
  }
  FUN_1000e7e50(local_80);
  puVar15 = local_80[0];
  uVar2 = local_10c;
  if (local_228 == 0) {
    uVar2 = 1;
  }
  puVar6 = local_80[0];
  if ((uVar2 & 1) == 0) {
    uVar20 = local_228;
    FUN_1000e9cf4();
    _swift_bridgeObjectRelease(puVar15);
    puVar9 = local_208;
    if ((uVar20 & 1) != 0) {
      *(char *)local_208 = (char)puVar6;
      puVar15 = &DAT_100a77e80;
      FUN_100004bb4(&DAT_100a77e80,&DAT_10080ccb0);
      uVar13 = 1;
      goto LAB_1000e62d4;
    }
  }
  local_80[0] = puVar6;
  lVar7 = 0;
  FUN_1000e49dc();
  puVar9 = local_208;
  puVar8 = (undefined1 *)((long)local_208 + (long)*(int *)(lVar7 + 0x18));
  lVar17 = local_190;
  (**(code **)(lVar21 + 0x10))(puVar8,local_190,lVar3);
  __s10Foundation3URLV17lastPathComponentSSvg();
  *puVar9 = local_1d4;
  *(undefined8 *)(puVar9 + 2) = local_1d0;
  plVar14 = (long *)((long)puVar9 + (long)*(int *)(lVar7 + 0x1c));
  *plVar14 = (long)puVar8;
  plVar14[1] = lVar17;
  *(undefined **)((long)puVar9 + (long)*(int *)(lVar7 + 0x20)) = local_80[0];
  puVar15 = &DAT_100a77e80;
  FUN_100004bb4(&DAT_100a77e80,&DAT_10080ccb0);
  uVar13 = 0;
LAB_1000e62d4:
  _swift_storeEnumTagMultiPayload(puVar9,puVar15,uVar13);
  return;
}

