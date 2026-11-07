// rea decompile_all
// name: FUN_10007e788
// address: 0x10007e788
// body: available
// range: 0x10007e788-0x10007ec63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007e788(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  long *plVar17;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 *local_290;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  long local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  long local_230;
  undefined *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1ab;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined5 uStack_138;
  undefined3 local_133;
  undefined5 uStack_130;
  undefined8 uStack_12b;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined5 uStack_b8;
  undefined3 uStack_b3;
  undefined5 local_b0;
  undefined3 uStack_ab;
  undefined4 local_a8;
  undefined1 uStack_a4;
  undefined1 auStack_98 [40];
  
  local_280 = param_3;
  local_278 = param_2;
  local_270 = param_7;
  local_258 = param_4;
  local_248 = param_6;
  _swift_retain(param_6);
  local_240 = param_8;
  _swift_retain();
  FUN_100051fd8();
  local_260 = param_2;
  local_250 = param_8;
  _CGRestorePermanentDisplayConfiguration();
  local_238 = *(undefined8 *)(param_5 + 0x20);
  lVar14 = *(long *)(param_1 + 0x10);
  local_268 = param_1;
  local_230 = param_5;
  if (lVar14 == 0) {
    local_228 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    local_228 = PTR___swiftEmptyArrayStorage_100995ea0;
    plVar17 = (long *)(param_1 + 0x20);
    do {
      lVar15 = *plVar17;
      puVar12 = auStack_98;
      _swift_beginAccess(param_5 + 0x70,puVar12,0x20,0);
      lVar13 = *(long *)(param_5 + 0x70);
      if ((*(long *)(lVar13 + 0x10) == 0) || (thunk_FUN_1001a2e54(), ((ulong)puVar12 & 1) == 0)) {
        FUN_10007ec64(&local_1a0);
        uStack_d8 = uStack_158;
        local_e0 = local_160;
        local_c8 = uStack_148;
        uStack_d0 = local_150;
        uStack_b8 = uStack_138;
        local_c0 = uStack_140;
        uStack_ab = (undefined3)uStack_12b;
        local_a8 = (undefined4)((ulong)uStack_12b >> 0x18);
        uStack_a4 = (undefined1)((ulong)uStack_12b >> 0x38);
        uStack_b3 = local_133;
        local_b0 = uStack_130;
        uStack_118 = uStack_198;
        local_120 = local_1a0;
        local_108 = uStack_188;
        local_110 = uStack_190;
        uStack_f8 = uStack_178;
        local_100 = local_180;
        uStack_e8 = uStack_168;
        uStack_f0 = uStack_170;
      }
      else {
        puVar1 = (undefined8 *)(*(long *)(lVar13 + 0x38) + lVar15 * 0x80);
        uStack_178 = puVar1[5];
        local_180 = puVar1[4];
        uStack_168 = puVar1[7];
        uStack_170 = puVar1[6];
        uStack_198 = puVar1[1];
        local_1a0 = *puVar1;
        uStack_188 = puVar1[3];
        uStack_190 = puVar1[2];
        uStack_158 = puVar1[9];
        local_160 = puVar1[8];
        uStack_148 = puVar1[0xb];
        local_150 = puVar1[10];
        uStack_140 = puVar1[0xc];
        uStack_12b = *(undefined8 *)((long)puVar1 + 0x75);
        uStack_130 = (undefined5)((ulong)*(undefined8 *)((long)puVar1 + 0x6d) >> 0x18);
        uStack_138 = (undefined5)puVar1[0xd];
        local_133 = (undefined3)((ulong)puVar1[0xd] >> 0x28);
        _memmove(&local_120,puVar1,0x7d);
        FUN_100008290(&local_120);
        FUN_10007eca0(&local_1a0,&local_220);
      }
      uStack_158 = uStack_d8;
      local_160 = local_e0;
      uStack_148 = local_c8;
      local_150 = uStack_d0;
      uStack_138 = uStack_b8;
      uStack_140 = local_c0;
      uStack_12b = CONCAT17(uStack_a4,CONCAT43(local_a8,uStack_ab));
      local_133 = uStack_b3;
      uStack_130 = local_b0;
      uStack_198 = uStack_118;
      local_1a0 = local_120;
      uStack_188 = local_108;
      uStack_190 = local_110;
      uStack_178 = uStack_f8;
      local_180 = local_100;
      uStack_168 = uStack_e8;
      uStack_170 = uStack_f0;
      iVar8 = (int)&local_1a0;
      FUN_10007ec80();
      uVar7 = local_a8;
      uVar10 = local_c8;
      if (iVar8 == 1) {
        uStack_1d8 = uStack_d8;
        local_1e0 = local_e0;
        uStack_1c8 = local_c8;
        uStack_1d0 = uStack_d0;
        local_1c0 = local_c0;
        uStack_1ab = CONCAT17(uStack_a4,CONCAT43(local_a8,uStack_ab));
        uStack_218 = uStack_118;
        local_220 = local_120;
        uStack_208 = local_108;
        uStack_210 = local_110;
        uStack_1f8 = uStack_f8;
        local_200 = local_100;
        uStack_1e8 = uStack_e8;
        uStack_1f0 = uStack_f0;
        FUN_100040bb4(&local_220,&DAT_100a761f8,&DAT_10080a998);
        _swift_endAccess(auStack_98);
      }
      else {
        uVar6 = (undefined4)local_c0;
        uVar3 = CONCAT35(uStack_b3,uStack_b8);
        uVar4 = CONCAT35(uStack_ab,local_b0);
        uStack_1d8 = uStack_d8;
        local_1e0 = local_e0;
        uStack_1c8 = local_c8;
        uStack_1d0 = uStack_d0;
        local_1c0 = local_c0;
        uStack_1ab = CONCAT17(uStack_a4,CONCAT43(local_a8,uStack_ab));
        uStack_218 = uStack_118;
        local_220 = local_120;
        uStack_208 = local_108;
        uStack_210 = local_110;
        uStack_1f8 = uStack_f8;
        local_200 = local_100;
        uStack_1e8 = uStack_e8;
        uStack_1f0 = uStack_f0;
        _swift_endAccess(auStack_98);
        FUN_100040bb4(&local_220,&DAT_100a761f8,&DAT_10080a998);
        puVar9 = local_228;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar9 & 1) == 0) {
          puVar9 = (undefined *)0x0;
          FUN_100034b14(0,*(long *)(local_228 + 0x10) + 1,1);
          local_228 = puVar9;
        }
        uVar2 = *(ulong *)(local_228 + 0x10);
        if (*(ulong *)(local_228 + 0x18) >> 1 <= uVar2) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(local_228 + 0x18));
          FUN_100034b14(puVar9,uVar2 + 1,1,local_228);
          local_228 = puVar9;
        }
        *(ulong *)(local_228 + 0x10) = uVar2 + 1;
        *(undefined8 *)(local_228 + uVar2 * 0x28 + 0x20) = uVar10;
        *(undefined4 *)(local_228 + uVar2 * 0x28 + 0x28) = uVar6;
        *(undefined8 *)(local_228 + uVar2 * 0x28 + 0x30) = uVar3;
        *(undefined8 *)(local_228 + uVar2 * 0x28 + 0x38) = uVar4;
        *(undefined4 *)(local_228 + uVar2 * 0x28 + 0x40) = uVar7;
        param_5 = local_230;
      }
      lVar14 = lVar14 + -1;
      plVar17 = plVar17 + 1;
    } while (lVar14 != 0);
  }
  lVar14 = *(long *)(local_228 + 0x10);
  _swift_retain(local_238);
  if (lVar14 != 0) {
    FUN_100401b14(0);
    puVar16 = (undefined4 *)(local_228 + 0x40);
    do {
      local_110 = *(undefined8 *)(puVar16 + -4);
      uVar10 = *(undefined8 *)(puVar16 + -8);
      local_108 = *(undefined8 *)(puVar16 + -2);
      uStack_118 = CONCAT44(uStack_118._4_4_,puVar16[-6]);
      local_100 = CONCAT44(local_100._4_4_,*puVar16);
      local_120 = uVar10;
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_290 = &local_120;
      FUN_1003fb48c(FUN_10007ec98,&local_2a0,0xd0000000000000a5,0x800000010087d1a0,
                    0x656e6e6f63736964,0xee00293a5f287463,0xb6,0);
      FUN_100004030(uVar10);
      puVar16 = puVar16 + 10;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  _swift_bridgeObjectRelease(local_228);
  _swift_unknownObjectRelease(local_238);
  puVar9 = &DAT_1009985d0;
  _swift_allocObject(&DAT_1009985d0,0x18,7);
  lVar14 = local_230;
  _swift_weakInit(puVar9 + 0x10,local_230);
  uVar4 = local_248;
  _swift_retain(local_248);
  uVar5 = local_240;
  _swift_retain(local_240);
  _swift_retain(puVar9);
  uVar3 = local_250;
  _swift_bridgeObjectRetain(local_250);
  uVar10 = local_260;
  _swift_bridgeObjectRetain(local_260);
  uVar11 = local_280;
  _swift_bridgeObjectRetain();
  local_290 = (undefined8 *)uVar5;
  local_2a0 = uVar4;
  uStack_298 = local_270;
  FUN_10007df4c(local_268,0,PTR___swiftEmptySetSingleton_100995eb0,local_258,lVar14,puVar9,uVar3,
                uVar10,local_278,uVar11);
  _swift_release(puVar9);
  _swift_bridgeObjectRelease(uVar10);
  _swift_bridgeObjectRelease(uVar3);
  _swift_release_n(uVar4,2);
  _swift_release_n(uVar5,2);
  return;
}

