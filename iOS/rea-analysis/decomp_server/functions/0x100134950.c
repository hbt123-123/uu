// rea decompile_all
// name: FUN_100134950
// address: 0x100134950
// body: available
// range: 0x100134950-0x100134dbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100134950(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  long local_370 [24];
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_a8 = param_4[0x11];
  local_b0 = param_4[0x10];
  uStack_98 = param_4[0x13];
  uStack_a0 = param_4[0x12];
  uStack_88 = param_4[0x15];
  local_90 = param_4[0x14];
  uStack_78 = param_4[0x17];
  uStack_80 = param_4[0x16];
  uStack_e8 = param_4[9];
  local_f0 = param_4[8];
  uStack_d8 = param_4[0xb];
  uStack_e0 = param_4[10];
  uStack_c8 = param_4[0xd];
  local_d0 = param_4[0xc];
  uStack_b8 = param_4[0xf];
  uStack_c0 = param_4[0xe];
  uStack_128 = param_4[1];
  local_130 = *param_4;
  uStack_118 = param_4[3];
  uStack_120 = param_4[2];
  uStack_108 = param_4[5];
  local_110 = param_4[4];
  uStack_f8 = param_4[7];
  uStack_100 = param_4[6];
  iVar2 = param_2[2];
  if (iVar2 == 1) goto LAB_100134d84;
  uVar3 = *param_2;
  uVar12 = *(undefined8 *)(param_3 + 0x20);
  local_2b0 = CONCAT44(local_2b0._4_4_,uVar3);
  _swift_retain(uVar12);
  FUN_1003e37e8(&local_1f0,&local_2b0);
  _swift_release(uVar12);
  lVar9 = local_1f0;
  if (local_1f0 == 0) goto LAB_100134d84;
  plVar13 = *(long **)(local_1f0 + 0x10);
  pcVar16 = *(code **)(*plVar13 + 0xb8);
  plVar5 = plVar13;
  _swift_retain();
  (*pcVar16)();
  _swift_release(plVar13);
  if (((ulong)plVar5 & 1) != 0) {
    _swift_release(lVar9);
    goto LAB_100134d84;
  }
  plVar13 = *(long **)(lVar9 + 0x10);
  pcVar16 = *(code **)(*plVar13 + 0xa8);
  plVar5 = plVar13;
  _swift_retain();
  (*pcVar16)();
  _swift_release(plVar13);
  if ((long)plVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x100134d48);
    (*pcVar16)();
  }
  puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (plVar5 != (long *)0x0) {
    plVar13 = (long *)0x0;
    do {
      plVar14 = *(long **)(lVar9 + 0x10);
      pcVar16 = *(code **)(*plVar14 + 0x90);
      _swift_retain(plVar14);
      (*pcVar16)(&local_1f0,plVar13);
      _swift_release(plVar14);
      lVar15 = local_1f0;
      if (local_1f0 != 0) {
        _swift_retain(local_1f0);
        puVar7 = puVar8;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
           (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((long)puVar8 < 0) {
              puVar6 = puVar8;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg(puVar6);
          }
          puVar7 = (undefined *)0x0;
          FUN_10003606c(0,puVar6 + 1,1,puVar8);
        }
        uVar11 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar11 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
          FUN_10003606c(puVar8,uVar1 + 1,1,puVar7);
          uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
        *(long *)(uVar11 + uVar1 * 8 + 0x20) = lVar15;
        _swift_release(lVar15);
      }
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar5 != plVar13);
  }
  if ((ulong)puVar8 >> 0x3e == 0) {
    lVar15 = *(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    _swift_release(lVar9);
    if (lVar15 != 0) {
      puVar7 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
LAB_100134b74:
      if (0 < (long)puVar7) {
        uVar4 = param_2[1];
        puVar6 = (undefined *)(ulong)uVar4;
        if (puVar6 < puVar7) {
          if (*(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100134dbc);
            (*pcVar16)();
          }
          uVar17 = *(undefined8 *)(puVar8 + (long)puVar6 * 8 + 0x20);
          _swift_retain(uVar17);
          _swift_bridgeObjectRelease(puVar8);
          lVar9 = 0;
          FUN_10016dae4();
          _swift_allocObject();
          FUN_10016d3cc();
          *(undefined1 *)(lVar9 + 0x18) = 2;
          *(undefined4 *)(lVar9 + 0x14) = uVar3;
          uStack_228 = uStack_a8;
          local_230 = local_b0;
          uStack_218 = uStack_98;
          uStack_220 = uStack_a0;
          uStack_208 = uStack_88;
          local_210 = local_90;
          uStack_1f8 = uStack_78;
          uStack_200 = uStack_80;
          uStack_268 = uStack_e8;
          local_270 = local_f0;
          uStack_258 = uStack_d8;
          uStack_260 = uStack_e0;
          uStack_248 = uStack_c8;
          local_250 = local_d0;
          uStack_238 = uStack_b8;
          uStack_240 = uStack_c0;
          uStack_288 = uStack_108;
          local_290 = local_110;
          uStack_278 = uStack_f8;
          uStack_280 = uStack_100;
          uStack_2a8 = uStack_128;
          local_2b0 = local_130;
          uStack_298 = uStack_118;
          uStack_2a0 = uStack_120;
          FUN_100008290(&local_2b0);
          uStack_158 = *(undefined8 *)(lVar9 + 0x130);
          uStack_160 = *(undefined8 *)(lVar9 + 0x128);
          uStack_148 = *(undefined8 *)(lVar9 + 0x140);
          local_150 = *(undefined8 *)(lVar9 + 0x138);
          uStack_178 = *(undefined8 *)(lVar9 + 0x110);
          uStack_180 = *(undefined8 *)(lVar9 + 0x108);
          uStack_168 = *(undefined8 *)(lVar9 + 0x120);
          local_170 = *(undefined8 *)(lVar9 + 0x118);
          uStack_138 = *(undefined8 *)(lVar9 + 0x150);
          uStack_140 = *(undefined8 *)(lVar9 + 0x148);
          uStack_1a8 = *(undefined8 *)(lVar9 + 0xe0);
          local_1b0 = *(undefined8 *)(lVar9 + 0xd8);
          uStack_198 = *(undefined8 *)(lVar9 + 0xf0);
          uStack_1a0 = *(undefined8 *)(lVar9 + 0xe8);
          uStack_188 = *(undefined8 *)(lVar9 + 0x100);
          local_190 = *(undefined8 *)(lVar9 + 0xf8);
          uStack_1e8 = *(undefined8 *)(lVar9 + 0xa0);
          local_1f0 = *(long *)(lVar9 + 0x98);
          uStack_1d8 = *(undefined8 *)(lVar9 + 0xb0);
          uStack_1e0 = *(undefined8 *)(lVar9 + 0xa8);
          uStack_1c8 = *(undefined8 *)(lVar9 + 0xc0);
          local_1d0 = *(undefined8 *)(lVar9 + 0xb8);
          uStack_1b8 = *(undefined8 *)(lVar9 + 0xd0);
          uStack_1c0 = *(undefined8 *)(lVar9 + 200);
          *(undefined8 *)(lVar9 + 0x130) = uStack_218;
          *(undefined8 *)(lVar9 + 0x128) = uStack_220;
          *(undefined8 *)(lVar9 + 0x140) = uStack_208;
          *(undefined8 *)(lVar9 + 0x138) = local_210;
          *(undefined8 *)(lVar9 + 0x150) = uStack_1f8;
          *(undefined8 *)(lVar9 + 0x148) = uStack_200;
          *(undefined8 *)(lVar9 + 0xe0) = uStack_268;
          *(undefined8 *)(lVar9 + 0xd8) = local_270;
          *(undefined8 *)(lVar9 + 0xf0) = uStack_258;
          *(undefined8 *)(lVar9 + 0xe8) = uStack_260;
          *(undefined8 *)(lVar9 + 0x100) = uStack_248;
          *(undefined8 *)(lVar9 + 0xf8) = local_250;
          *(undefined8 *)(lVar9 + 0x110) = uStack_238;
          *(undefined8 *)(lVar9 + 0x108) = uStack_240;
          *(undefined8 *)(lVar9 + 0x120) = uStack_228;
          *(undefined8 *)(lVar9 + 0x118) = local_230;
          *(undefined8 *)(lVar9 + 0xa0) = uStack_2a8;
          *(undefined8 *)(lVar9 + 0x98) = local_2b0;
          *(undefined8 *)(lVar9 + 0xb0) = uStack_298;
          *(undefined8 *)(lVar9 + 0xa8) = uStack_2a0;
          *(undefined8 *)(lVar9 + 0xc0) = uStack_288;
          *(undefined8 *)(lVar9 + 0xb8) = local_290;
          *(undefined8 *)(lVar9 + 0xd0) = uStack_278;
          *(undefined8 *)(lVar9 + 200) = uStack_280;
          FUN_1000408d0(param_4,local_370);
          FUN_100040bb4(&local_1f0,&DAT_100a79f58,&DAT_10080f710);
          *(undefined8 *)(lVar9 + 0x158) = *(undefined8 *)(param_2 + 4);
          *(uint *)(lVar9 + 0x90) = uVar4;
          uVar12 = *(undefined8 *)(lVar9 + 0x88);
          *(undefined8 *)(lVar9 + 0x88) = uVar17;
          _swift_retain(uVar17);
          _swift_release(uVar12);
          *(undefined4 *)(lVar9 + 0x160) = param_2[6];
          if (iVar2 == 3) {
            uVar10 = 1;
          }
          else {
            if (iVar2 != 4) goto LAB_100134d14;
            uVar10 = 2;
          }
          *(undefined1 *)(lVar9 + 0x164) = uVar10;
LAB_100134d14:
          local_370[0] = lVar9;
          _swift_retain(lVar9);
          FUN_10061630c(local_370);
          _swift_release(uVar17);
          _swift_release_n(lVar9,2);
          return;
        }
      }
    }
  }
  else {
    puVar7 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((long)puVar8 < 0) {
      puVar7 = puVar8;
    }
    puVar6 = puVar7;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    _swift_release(lVar9);
    if (puVar6 != (undefined *)0x0) {
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      goto LAB_100134b74;
    }
  }
  _swift_bridgeObjectRelease(puVar8);
LAB_100134d84:
  local_1f0 = 0;
  FUN_10061630c(&local_1f0);
  return;
}

