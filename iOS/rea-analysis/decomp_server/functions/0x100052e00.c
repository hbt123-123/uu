// rea decompile_all
// name: FUN_100052e00
// address: 0x100052e00
// body: available
// range: 0x100052e00-0x1000533fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100052e00(undefined4 *param_1,ulong param_2,long param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  ulong *puVar13;
  ulong *puVar14;
  long lVar15;
  undefined *puVar16;
  ulong local_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong local_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong local_2f0;
  ulong uStack_2e8;
  ulong local_2e0;
  ulong uStack_2d8;
  ulong local_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined1 uStack_2bc;
  undefined7 uStack_2bb;
  undefined1 local_2b4;
  undefined1 auStack_2a8 [24];
  ulong local_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong local_270;
  ulong uStack_268;
  ulong local_260;
  ulong uStack_258;
  ulong local_250;
  ulong uStack_248;
  ulong local_240;
  ulong uStack_238;
  ulong uStack_230;
  undefined5 uStack_228;
  undefined3 local_223;
  undefined5 uStack_220;
  undefined8 uStack_21b;
  ulong local_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong local_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong local_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined1 uStack_19c;
  undefined7 uStack_19b;
  undefined1 local_194;
  ulong local_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong local_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong local_150;
  ulong uStack_148;
  ulong local_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined *local_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined5 uStack_a8;
  undefined3 local_a3;
  undefined5 uStack_a0;
  undefined8 uStack_9b;
  undefined1 auStack_88 [40];
  
  _swift_beginAccess(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 != 0) {
    if ((param_2 & 1) == 0) {
      lVar8 = *(long *)(param_1 + 4);
      puVar16 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (lVar8 != 0) {
        puVar13 = (ulong *)(param_1 + 8);
        puVar14 = puVar13;
        lVar15 = lVar8;
        do {
          uStack_e8 = puVar14[5];
          local_f0 = puVar14[4];
          uStack_d8 = puVar14[7];
          uStack_e0 = puVar14[6];
          uStack_108 = puVar14[1];
          puVar16 = (undefined *)*puVar14;
          uStack_f8 = puVar14[3];
          uStack_100 = puVar14[2];
          uStack_c8 = puVar14[9];
          local_d0 = puVar14[8];
          uStack_b8 = puVar14[0xb];
          local_c0 = puVar14[10];
          uStack_b0 = puVar14[0xc];
          uStack_9b = *(undefined8 *)((long)puVar14 + 0x75);
          uStack_a0 = (undefined5)((ulong)*(undefined8 *)((long)puVar14 + 0x6d) >> 0x18);
          uStack_a8 = (undefined5)puVar14[0xd];
          local_a3 = (undefined3)(puVar14[0xd] >> 0x28);
          puVar6 = &local_210;
          local_110 = puVar16;
          _swift_beginAccess(param_3 + 0x70,puVar6,0x20,0);
          lVar10 = *(long *)(param_3 + 0x70);
          if ((*(long *)(lVar10 + 0x10) == 0) ||
             (puVar3 = puVar16, thunk_FUN_1001a2e54(), ((ulong)puVar6 & 1) == 0)) {
            _swift_endAccess(&local_210);
          }
          else {
            puVar6 = (ulong *)(*(long *)(lVar10 + 0x38) + (long)puVar3 * 0x80);
            uStack_268 = puVar6[5];
            local_270 = puVar6[4];
            uStack_258 = puVar6[7];
            local_260 = puVar6[6];
            uStack_288 = puVar6[1];
            local_290 = *puVar6;
            uStack_278 = puVar6[3];
            uStack_280 = puVar6[2];
            uStack_248 = puVar6[9];
            local_250 = puVar6[8];
            uStack_238 = puVar6[0xb];
            local_240 = puVar6[10];
            uStack_230 = puVar6[0xc];
            uStack_21b = *(undefined8 *)((long)puVar6 + 0x75);
            uStack_220 = (undefined5)((ulong)*(undefined8 *)((long)puVar6 + 0x6d) >> 0x18);
            uStack_228 = (undefined5)puVar6[0xd];
            local_223 = (undefined3)(puVar6[0xd] >> 0x28);
            uStack_188 = puVar6[1];
            local_190 = *puVar6;
            uStack_178 = puVar6[3];
            uStack_180 = puVar6[2];
            uStack_168 = puVar6[5];
            local_170 = puVar6[4];
            uStack_158 = puVar6[7];
            uStack_160 = puVar6[6];
            uStack_148 = puVar6[9];
            local_150 = puVar6[8];
            uStack_138 = puVar6[0xb];
            local_140 = puVar6[10];
            uStack_130 = puVar6[0xc];
            uStack_11c = *(undefined8 *)((long)puVar6 + 0x74);
            uStack_120 = (undefined4)((ulong)*(undefined8 *)((long)puVar6 + 0x6c) >> 0x20);
            uStack_128 = (undefined4)puVar6[0xd];
            local_124 = (undefined4)(puVar6[0xd] >> 0x20);
            _swift_endAccess(&local_210);
            uStack_1c8 = uStack_148;
            local_1d0 = local_150;
            uStack_1b8 = uStack_138;
            uStack_1c0 = local_140;
            uStack_1a8 = uStack_128;
            local_1b0 = uStack_130;
            uStack_19c = (undefined1)uStack_11c;
            uStack_19b = (undefined7)((ulong)uStack_11c >> 8);
            uStack_1a4 = local_124;
            uStack_1a0 = uStack_120;
            uStack_208 = uStack_188;
            local_210 = local_190;
            uStack_1f8 = uStack_178;
            uStack_200 = uStack_180;
            uStack_1e8 = uStack_168;
            local_1f0 = local_170;
            uStack_1d8 = uStack_158;
            uStack_1e0 = uStack_160;
            local_194 = 1;
            _swift_beginAccess(param_3 + 0x70,auStack_2a8,0x21,0);
            FUN_10007eca0(&local_110,&local_330);
            FUN_10007eca0(&local_290,&local_330);
            uVar7 = 0;
            FUN_10007eca0(&local_210);
            uVar4 = *(ulong *)(param_3 + 0x70);
            _swift_isUniquelyReferenced_nonNull_native();
            uVar5 = (uint)uVar4;
            lVar10 = *(long *)(param_3 + 0x70);
            *(undefined8 *)(param_3 + 0x70) = 0x8000000000000000;
            puVar3 = puVar16;
            thunk_FUN_1001a2e54();
            uVar9 = (ulong)~(uint)uVar7 & 1;
            if (SCARRY8(*(long *)(lVar10 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x1000533e8);
              (*pcVar12)();
            }
            if (*(long *)(lVar10 + 0x18) < (long)(*(long *)(lVar10 + 0x10) + uVar9)) {
              FUN_100066d58();
              puVar3 = puVar16;
              thunk_FUN_1001a2e54();
              if (((uint)uVar7 & 1) != (uVar5 & 1)) {
                __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                          (PTR___sSiN_100995968);
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x1000533fc);
                (*pcVar12)();
              }
joined_r0x000100053100:
              if ((uVar7 & 1) != 0) goto LAB_100053088;
LAB_100053104:
              lVar1 = lVar10 + ((ulong)puVar3 >> 6) * 8;
              *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << ((ulong)puVar3 & 0x3f);
              *(undefined **)(*(long *)(lVar10 + 0x30) + (long)puVar3 * 8) = puVar16;
              puVar6 = (ulong *)(*(long *)(lVar10 + 0x38) + (long)puVar3 * 0x80);
              puVar6[5] = uStack_1e8;
              puVar6[4] = local_1f0;
              puVar6[7] = uStack_1d8;
              puVar6[6] = uStack_1e0;
              puVar6[1] = uStack_208;
              *puVar6 = local_210;
              puVar6[3] = uStack_1f8;
              puVar6[2] = uStack_200;
              *(ulong *)((long)puVar6 + 0x75) = CONCAT17(local_194,uStack_19b);
              *(ulong *)((long)puVar6 + 0x6d) =
                   CONCAT17(uStack_19c,CONCAT43(uStack_1a0,uStack_1a4._1_3_));
              puVar6[0xb] = uStack_1b8;
              puVar6[10] = uStack_1c0;
              puVar6[0xd] = CONCAT44(uStack_1a4,uStack_1a8);
              puVar6[0xc] = local_1b0;
              puVar6[9] = uStack_1c8;
              puVar6[8] = local_1d0;
              if (SCARRY8(*(long *)(lVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x1000533ec);
                (*pcVar12)();
              }
              *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
            }
            else {
              if ((uVar4 & 1) == 0) {
                FUN_1000631c8();
                goto joined_r0x000100053100;
              }
              if ((uVar7 & 1) == 0) goto LAB_100053104;
LAB_100053088:
              puVar6 = (ulong *)(*(long *)(lVar10 + 0x38) + (long)puVar3 * 0x80);
              uStack_308 = puVar6[5];
              local_310 = puVar6[4];
              uStack_2f8 = puVar6[7];
              uStack_300 = puVar6[6];
              uStack_328 = puVar6[1];
              local_330 = *puVar6;
              uStack_318 = puVar6[3];
              uStack_320 = puVar6[2];
              uStack_2d8 = puVar6[0xb];
              local_2e0 = puVar6[10];
              local_2d0 = puVar6[0xc];
              uStack_2e8 = puVar6[9];
              local_2f0 = puVar6[8];
              uStack_2bb = (undefined7)*(undefined8 *)((long)puVar6 + 0x75);
              local_2b4 = (undefined1)((ulong)*(undefined8 *)((long)puVar6 + 0x75) >> 0x38);
              uStack_2c0 = (undefined4)((ulong)*(undefined8 *)((long)puVar6 + 0x6d) >> 0x18);
              uStack_2bc = (undefined1)((ulong)*(undefined8 *)((long)puVar6 + 0x6d) >> 0x38);
              uStack_2c8 = (undefined4)puVar6[0xd];
              uStack_2c4 = (undefined4)(puVar6[0xd] >> 0x20);
              puVar6[5] = uStack_1e8;
              puVar6[4] = local_1f0;
              puVar6[7] = uStack_1d8;
              puVar6[6] = uStack_1e0;
              puVar6[1] = uStack_208;
              *puVar6 = local_210;
              puVar6[3] = uStack_1f8;
              puVar6[2] = uStack_200;
              *(ulong *)((long)puVar6 + 0x75) = CONCAT17(local_194,uStack_19b);
              *(ulong *)((long)puVar6 + 0x6d) =
                   CONCAT17(uStack_19c,CONCAT43(uStack_1a0,uStack_1a4._1_3_));
              puVar6[0xb] = uStack_1b8;
              puVar6[10] = uStack_1c0;
              puVar6[0xd] = CONCAT44(uStack_1a4,uStack_1a8);
              puVar6[0xc] = local_1b0;
              puVar6[9] = uStack_1c8;
              puVar6[8] = local_1d0;
              FUN_10007ed50(&local_330);
            }
            *(long *)(param_3 + 0x70) = lVar10;
            _swift_endAccess(auStack_2a8);
            FUN_10007ed50(&local_110);
            uStack_2e8 = uStack_148;
            local_2f0 = local_150;
            uStack_2d8 = uStack_138;
            local_2e0 = local_140;
            uStack_2c8 = uStack_128;
            local_2d0 = uStack_130;
            uStack_2bc = (undefined1)uStack_11c;
            uStack_2bb = (undefined7)((ulong)uStack_11c >> 8);
            uStack_2c4 = local_124;
            uStack_2c0 = uStack_120;
            uStack_328 = uStack_188;
            local_330 = local_190;
            uStack_318 = uStack_178;
            uStack_320 = uStack_180;
            uStack_308 = uStack_168;
            local_310 = local_170;
            uStack_2f8 = uStack_158;
            uStack_300 = uStack_160;
            local_2b4 = 1;
            FUN_10007ed50(&local_330);
          }
          puVar14 = puVar14 + 0x10;
          lVar15 = lVar15 + -1;
          lVar10 = lVar8;
        } while (lVar15 != 0);
        do {
          uStack_108 = puVar13[1];
          local_110 = (undefined *)*puVar13;
          uStack_f8 = puVar13[3];
          uStack_100 = puVar13[2];
          uStack_e8 = puVar13[5];
          local_f0 = puVar13[4];
          uStack_d8 = puVar13[7];
          uStack_e0 = puVar13[6];
          uStack_c8 = puVar13[9];
          local_d0 = puVar13[8];
          uStack_b8 = puVar13[0xb];
          local_c0 = puVar13[10];
          uStack_b0 = puVar13[0xc];
          uStack_9b = *(undefined8 *)((long)puVar13 + 0x75);
          uStack_a0 = (undefined5)((ulong)*(undefined8 *)((long)puVar13 + 0x6d) >> 0x18);
          uStack_a8 = (undefined5)puVar13[0xd];
          local_a3 = (undefined3)(puVar13[0xd] >> 0x28);
          uStack_288 = puVar13[1];
          local_290 = *puVar13;
          uStack_278 = puVar13[3];
          uStack_280 = puVar13[2];
          uStack_268 = puVar13[5];
          local_270 = puVar13[4];
          uStack_258 = puVar13[7];
          local_260 = puVar13[6];
          uStack_248 = puVar13[9];
          local_250 = puVar13[8];
          local_240 = puVar13[10];
          FUN_10007eca0(&local_110,&local_210);
          FUN_100048f38(&local_290,param_6,param_7);
          FUN_10007ed50(&local_110);
          puVar13 = puVar13 + 0x10;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        local_110 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_10006fbb8(0,lVar8,0);
        uVar7 = *(ulong *)(local_110 + 0x10);
        do {
          param_1 = param_1 + 0x20;
          uVar2 = *param_1;
          uVar4 = uVar7 + 1;
          if (*(ulong *)(local_110 + 0x18) >> 1 <= uVar7) {
            FUN_10006fbb8(1 < *(ulong *)(local_110 + 0x18),uVar4,1);
          }
          *(ulong *)(local_110 + 0x10) = uVar4;
          *(undefined4 *)(local_110 + uVar7 * 4 + 0x20) = uVar2;
          lVar8 = lVar8 + -1;
          uVar7 = uVar4;
          puVar16 = local_110;
        } while (lVar8 != 0);
      }
      pcVar12 = *(code **)(param_3 + 0x78);
      if (pcVar12 != (code *)0x0) {
        uVar11 = *(undefined8 *)(param_3 + 0x80);
        _swift_retain(uVar11);
        (*pcVar12)(param_6,param_7,4);
        FUN_10007ed2c(pcVar12,uVar11);
      }
      FUN_100075dc8(param_9);
      FUN_10005d508();
      FUN_10005dad4(0x657461657263,0xe600000000000000,param_8,param_9,0);
      pcVar12 = *(code **)(param_3 + 0x78);
      if (pcVar12 != (code *)0x0) {
        uVar11 = *(undefined8 *)(param_3 + 0x80);
        _swift_retain(uVar11);
        (*pcVar12)(0x657461657263,0xe600000000000000,5);
        FUN_10007ed2c(pcVar12,uVar11);
        pcVar12 = *(code **)(param_3 + 0x78);
        if (pcVar12 != (code *)0x0) {
          uVar11 = *(undefined8 *)(param_3 + 0x80);
          FUN_10004090c(pcVar12,uVar11);
          _swift_bridgeObjectRetain(puVar16);
          (*pcVar12)();
          FUN_10007ed2c(pcVar12,uVar11);
          _swift_bridgeObjectRelease(puVar16);
        }
      }
      (*param_4)(0,puVar16);
      _swift_bridgeObjectRelease(puVar16);
    }
    else {
      FUN_10005283c();
      (*param_4)(param_1,PTR___swiftEmptyArrayStorage_100995ea0);
    }
    _swift_release(param_3);
  }
  return;
}

