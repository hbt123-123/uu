// rea decompile_all
// name: FUN_1000a38e8
// address: 0x1000a38e8
// body: available
// range: 0x1000a38e8-0x1000a3cab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000a3c94) */

undefined1  [16] FUN_1000a38e8(long param_1)

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
  byte *pbVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined *local_2f0 [26];
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
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
  puVar9 = *(undefined **)(param_1 + 0x10);
  _swift_bridgeObjectRetain_n(param_1,2);
  if (puVar9 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    puVar10 = puVar5;
    puVar6 = puVar5;
    do {
      puVar7 = (undefined8 *)(param_1 + 0x20 + (long)puVar12 * 0xd0);
      uStack_98 = puVar7[0x15];
      local_a0 = puVar7[0x14];
      uStack_168 = puVar7[0x17];
      uStack_170 = puVar7[0x16];
      uStack_a8 = puVar7[0x13];
      local_b0 = puVar7[0x12];
      uStack_178 = puVar7[0x15];
      local_180 = puVar7[0x14];
      uStack_88 = puVar7[0x17];
      local_90 = puVar7[0x16];
      uStack_158 = puVar7[0x19];
      local_160 = puVar7[0x18];
      uStack_d8 = puVar7[0xd];
      local_e0 = puVar7[0xc];
      uStack_1a8 = puVar7[0xf];
      uStack_1b0 = puVar7[0xe];
      uStack_e8 = puVar7[0xb];
      local_f0 = puVar7[10];
      uStack_1b8 = puVar7[0xd];
      local_1c0 = puVar7[0xc];
      uStack_b8 = puVar7[0x11];
      local_c0 = puVar7[0x10];
      uStack_188 = puVar7[0x13];
      uStack_190 = puVar7[0x12];
      uStack_c8 = puVar7[0xf];
      local_d0 = puVar7[0xe];
      uStack_198 = puVar7[0x11];
      local_1a0 = puVar7[0x10];
      uStack_118 = puVar7[5];
      local_120 = puVar7[4];
      uStack_1e8 = puVar7[7];
      uStack_1f0 = puVar7[6];
      uStack_128 = puVar7[3];
      local_130 = puVar7[2];
      uStack_1f8 = puVar7[5];
      local_200 = puVar7[4];
      uStack_f8 = puVar7[9];
      local_100 = puVar7[8];
      uStack_1c8 = puVar7[0xb];
      uStack_1d0 = puVar7[10];
      uStack_108 = puVar7[7];
      local_110 = puVar7[6];
      uStack_1d8 = puVar7[9];
      local_1e0 = puVar7[8];
      uStack_218 = puVar7[1];
      local_220 = *puVar7;
      uStack_208 = puVar7[3];
      uStack_210 = puVar7[2];
      uStack_138 = puVar7[1];
      puVar15 = (undefined *)*puVar7;
      uStack_78 = puVar7[0x19];
      local_80 = puVar7[0x18];
      puVar5 = puVar10;
      if ((undefined *)0x1 < puVar15) {
        puVar5 = puVar15;
      }
      lVar14 = *(long *)(puVar5 + 0x10);
      local_148 = puVar12;
      local_140 = puVar15;
      if (lVar14 == 0) {
        FUN_10006ff98(&local_220,local_2f0);
        FUN_10008726c(puVar15);
        _swift_bridgeObjectRelease(puVar5);
        FUN_10001fc18(&local_148,&DAT_100104ce8,&DAT_1000d6840);
        puVar15 = puVar10;
      }
      else {
        FUN_10006ff98(&local_220,local_2f0);
        FUN_10008726c(puVar15);
        local_2f0[0] = puVar10;
        FUN_100079a50(0,lVar14,0);
        pbVar11 = puVar5 + 0x30;
        do {
          puVar10 = local_2f0[0];
          uVar2 = *(undefined8 *)(pbVar11 + -0x10);
          uVar3 = *(undefined8 *)(pbVar11 + -8);
          bVar1 = *pbVar11 & 0xc0;
          if (bVar1 != 0x40) {
            bVar1 = *pbVar11;
          }
          FUN_100065610(uVar2,uVar3);
          uVar8 = *(ulong *)(puVar10 + 0x10);
          local_2f0[0] = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar8) {
            FUN_100079a50(1 < *(ulong *)(puVar10 + 0x18),uVar8 + 1,1);
          }
          puVar10 = local_2f0[0];
          pbVar11 = pbVar11 + 0x18;
          *(ulong *)(local_2f0[0] + 0x10) = uVar8 + 1;
          *(undefined8 *)(local_2f0[0] + uVar8 * 0x20 + 0x20) = uVar2;
          *(undefined8 *)(local_2f0[0] + uVar8 * 0x20 + 0x28) = uVar3;
          local_2f0[0][uVar8 * 0x20 + 0x30] = bVar1;
          *(undefined **)(local_2f0[0] + uVar8 * 0x20 + 0x38) = puVar12;
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a3c88);
        (*pcVar4)();
      }
      puVar5 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((((ulong)puVar5 & 1) == 0) ||
         (uVar8 = *(ulong *)(puVar6 + 0x18) >> 1, (long)uVar8 < lVar14 + lVar13)) {
        FUN_10006f260();
        uVar8 = *(ulong *)(puVar5 + 0x18) >> 1;
        puVar6 = puVar5;
        if (*(long *)(puVar10 + 0x10) == 0) goto LAB_1000a3950;
LAB_1000a3b98:
        lVar14 = *(long *)(puVar5 + 0x10);
        if ((long)(uVar8 - lVar14) < lVar13) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a3c90);
          (*pcVar4)();
        }
        puVar6 = &DAT_100104450;
        FUN_10000eb08(&DAT_100104450,&DAT_1000d48e8);
        _swift_arrayInitWithCopy(puVar5 + lVar14 * 0x20 + 0x20,puVar10 + 0x20,lVar13,puVar6);
        _swift_bridgeObjectRelease(puVar10);
        if (lVar13 != 0) {
          if (SCARRY8(*(long *)(puVar5 + 0x10),lVar13)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a3c94);
            (*pcVar4)();
          }
          *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + lVar13;
        }
      }
      else {
        puVar5 = puVar6;
        if (*(long *)(puVar10 + 0x10) != 0) goto LAB_1000a3b98;
LAB_1000a3950:
        _swift_bridgeObjectRelease(puVar10);
        puVar5 = puVar6;
        if (lVar13 != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a3c8c);
          (*pcVar4)();
        }
      }
      puVar12 = puVar12 + 1;
      puVar10 = puVar15;
      puVar6 = puVar5;
    } while (puVar12 != puVar9);
  }
  _swift_bridgeObjectRelease(param_1);
  puVar12 = *(undefined **)(puVar5 + 0x10);
  puVar9 = PTR___swiftEmptyDictionarySingleton_1000f0748;
  if (puVar12 != (undefined *)0x0) {
    FUN_10000eb08(&DAT_1001044d8,&DAT_1000d4b38);
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    puVar9 = puVar12;
  }
  local_148 = puVar9;
  FUN_1000a3634(puVar5,1,&local_148);
  _swift_bridgeObjectRelease(puVar5);
  auVar16._8_8_ = local_148;
  auVar16._0_8_ = param_1;
  return auVar16;
}

