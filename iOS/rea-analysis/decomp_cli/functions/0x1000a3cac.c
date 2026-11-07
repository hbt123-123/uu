// rea decompile_all
// name: FUN_1000a3cac
// address: 0x1000a3cac
// body: available
// range: 0x1000a3cac-0x1000a40ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000a40d8) */

undefined1  [16] FUN_1000a3cac(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined *local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
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
  undefined *local_148;
  undefined *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar5 = PTR___swiftEmptyArrayStorage_1000f0740;
  FUN_10007354c(PTR___swiftEmptyArrayStorage_1000f0740);
  _swift_bridgeObjectRelease();
  FUN_1000b4940();
  puVar9 = *(undefined **)(param_1 + 0x10);
  _swift_retain();
  if (puVar9 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    puVar6 = puVar5;
    puVar10 = puVar5;
    do {
      if (*(undefined **)(param_1 + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a40c8);
        (*pcVar4)();
      }
      puVar7 = (undefined8 *)(param_1 + 0x20 + (long)puVar11 * 0xd0);
      uStack_218 = puVar7[1];
      local_220 = *puVar7;
      uStack_208 = puVar7[3];
      local_210 = puVar7[2];
      uStack_1f8 = puVar7[5];
      uStack_200 = puVar7[4];
      uStack_1e8 = puVar7[7];
      local_1f0 = puVar7[6];
      uStack_1d8 = puVar7[9];
      uStack_1e0 = puVar7[8];
      uStack_1c8 = puVar7[0xb];
      local_1d0 = puVar7[10];
      uStack_1b8 = puVar7[0xd];
      uStack_1c0 = puVar7[0xc];
      uStack_1a8 = puVar7[0xf];
      local_1b0 = puVar7[0xe];
      uStack_198 = puVar7[0x11];
      uStack_1a0 = puVar7[0x10];
      uStack_188 = puVar7[0x13];
      local_190 = puVar7[0x12];
      uStack_178 = puVar7[0x15];
      uStack_180 = puVar7[0x14];
      uStack_168 = puVar7[0x17];
      local_170 = puVar7[0x16];
      uStack_158 = puVar7[0x19];
      uStack_160 = puVar7[0x18];
      uStack_258 = puVar7[0x13];
      local_260 = puVar7[0x12];
      uStack_248 = puVar7[0x15];
      local_250 = puVar7[0x14];
      uStack_238 = puVar7[0x17];
      local_240 = puVar7[0x16];
      uStack_228 = puVar7[0x19];
      local_230 = puVar7[0x18];
      uStack_298 = puVar7[0xb];
      local_2a0 = puVar7[10];
      uStack_288 = puVar7[0xd];
      local_290 = puVar7[0xc];
      uStack_278 = puVar7[0xf];
      local_280 = puVar7[0xe];
      uStack_268 = puVar7[0x11];
      local_270 = puVar7[0x10];
      uStack_2d8 = puVar7[3];
      local_2e0 = puVar7[2];
      uStack_2c8 = puVar7[5];
      local_2d0 = puVar7[4];
      uStack_2b8 = puVar7[7];
      local_2c0 = puVar7[6];
      uStack_2a8 = puVar7[9];
      local_2b0 = puVar7[8];
      uStack_2e8 = puVar7[1];
      puVar15 = (undefined *)*puVar7;
      puVar5 = puVar10;
      if ((undefined *)0x1 < puVar15) {
        puVar5 = puVar15;
      }
      lVar14 = *(long *)(puVar5 + 0x10);
      local_2f0 = puVar15;
      local_148 = puVar11;
      local_140 = puVar15;
      uStack_138 = uStack_2e8;
      local_130 = local_2e0;
      uStack_128 = uStack_2d8;
      local_120 = local_2d0;
      uStack_118 = uStack_2c8;
      local_110 = local_2c0;
      uStack_108 = uStack_2b8;
      local_100 = local_2b0;
      uStack_f8 = uStack_2a8;
      local_f0 = local_2a0;
      uStack_e8 = uStack_298;
      local_e0 = local_290;
      uStack_d8 = uStack_288;
      local_d0 = local_280;
      uStack_c8 = uStack_278;
      local_c0 = local_270;
      uStack_b8 = uStack_268;
      local_b0 = local_260;
      uStack_a8 = uStack_258;
      local_a0 = local_250;
      uStack_98 = uStack_248;
      local_90 = local_240;
      uStack_88 = uStack_238;
      local_80 = local_230;
      uStack_78 = uStack_228;
      if (lVar14 == 0) {
        FUN_10006ff98(&local_220,&local_2f0);
        FUN_10008726c(puVar15);
        _swift_bridgeObjectRelease(puVar5);
        FUN_10001fc18(&local_148,&DAT_100104ce8,&DAT_1000d6840);
        puVar15 = puVar10;
      }
      else {
        FUN_10006ff98(&local_220,&local_2f0);
        FUN_10008726c(puVar15);
        local_2f0 = puVar10;
        FUN_100079a50(0,lVar14,0);
        pbVar12 = puVar5 + 0x30;
        do {
          puVar10 = local_2f0;
          uVar2 = *(undefined8 *)(pbVar12 + -0x10);
          uVar3 = *(undefined8 *)(pbVar12 + -8);
          bVar1 = *pbVar12 & 0xc0;
          if (bVar1 != 0x40) {
            bVar1 = *pbVar12;
          }
          FUN_100065610(uVar2,uVar3);
          uVar8 = *(ulong *)(puVar10 + 0x10);
          local_2f0 = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar8) {
            FUN_100079a50(1 < *(ulong *)(puVar10 + 0x18),uVar8 + 1,1);
          }
          puVar10 = local_2f0;
          pbVar12 = pbVar12 + 0x18;
          *(ulong *)(local_2f0 + 0x10) = uVar8 + 1;
          *(undefined8 *)(local_2f0 + uVar8 * 0x20 + 0x20) = uVar2;
          *(undefined8 *)(local_2f0 + uVar8 * 0x20 + 0x28) = uVar3;
          local_2f0[uVar8 * 0x20 + 0x30] = bVar1;
          *(undefined **)(local_2f0 + uVar8 * 0x20 + 0x38) = puVar11;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        _swift_bridgeObjectRelease(puVar5);
        FUN_10001fc18(&local_148,&DAT_100104ce8,&DAT_1000d6840);
        puVar15 = PTR___swiftEmptyArrayStorage_1000f0740;
      }
      lVar13 = *(long *)(puVar10 + 0x10);
      lVar14 = *(long *)(puVar6 + 0x10);
      if (SCARRY8(lVar14,lVar13)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a40cc);
        (*pcVar4)();
      }
      puVar5 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((((ulong)puVar5 & 1) == 0) ||
         (uVar8 = *(ulong *)(puVar6 + 0x18) >> 1, (long)uVar8 < lVar14 + lVar13)) {
        FUN_10006f260();
        uVar8 = *(ulong *)(puVar5 + 0x18) >> 1;
        puVar6 = puVar5;
        if (*(long *)(puVar10 + 0x10) == 0) goto LAB_1000a3d18;
LAB_1000a3fd8:
        lVar14 = *(long *)(puVar5 + 0x10);
        if ((long)(uVar8 - lVar14) < lVar13) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a40d4);
          (*pcVar4)();
        }
        puVar6 = &DAT_100104450;
        FUN_10000eb08(&DAT_100104450,&DAT_1000d48e8);
        _swift_arrayInitWithCopy(puVar5 + lVar14 * 0x20 + 0x20,puVar10 + 0x20,lVar13,puVar6);
        _swift_bridgeObjectRelease(puVar10);
        if (lVar13 != 0) {
          if (SCARRY8(*(long *)(puVar5 + 0x10),lVar13)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a40d8);
            (*pcVar4)();
          }
          *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + lVar13;
        }
      }
      else {
        puVar5 = puVar6;
        if (*(long *)(puVar10 + 0x10) != 0) goto LAB_1000a3fd8;
LAB_1000a3d18:
        _swift_bridgeObjectRelease(puVar10);
        puVar5 = puVar6;
        if (lVar13 != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a40d0);
          (*pcVar4)();
        }
      }
      puVar11 = puVar11 + 1;
      puVar6 = puVar5;
      puVar10 = puVar15;
    } while (puVar11 != puVar9);
  }
  _swift_release(param_1);
  puVar11 = *(undefined **)(puVar5 + 0x10);
  puVar9 = PTR___swiftEmptyDictionarySingleton_1000f0748;
  if (puVar11 != (undefined *)0x0) {
    puVar9 = &DAT_1001044d8;
    FUN_10000eb08(&DAT_1001044d8,&DAT_1000d4b38);
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(puVar11,puVar9);
    puVar9 = puVar11;
  }
  local_148 = puVar9;
  FUN_1000a3634(puVar5,1,&local_148);
  _swift_bridgeObjectRelease(puVar5);
  auVar16._8_8_ = local_148;
  auVar16._0_8_ = param_1;
  return auVar16;
}

