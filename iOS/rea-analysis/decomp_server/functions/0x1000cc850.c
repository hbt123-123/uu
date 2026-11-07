// rea decompile_all
// name: FUN_1000cc850
// address: 0x1000cc850
// body: available
// range: 0x1000cc850-0x1000cc9ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000cc850(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_130 [96];
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  if (puVar6 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  uVar4 = 0;
  FUN_100004bb4(&DAT_100a76458);
  puVar2 = puVar6;
  __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
  uStack_a8 = *(ulong *)(param_1 + 0x48);
  local_b0 = *(ulong *)(param_1 + 0x40);
  uStack_98 = *(ulong *)(param_1 + 0x58);
  uStack_a0 = *(ulong *)(param_1 + 0x50);
  local_90 = *(ulong *)(param_1 + 0x60);
  uStack_88 = (undefined1)*(undefined8 *)(param_1 + 0x68);
  uStack_7f = *(undefined8 *)(param_1 + 0x71);
  uStack_87 = (undefined7)*(undefined8 *)(param_1 + 0x69);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x69) >> 0x38);
  uStack_c8 = *(ulong *)(param_1 + 0x28);
  local_d0 = *(ulong *)(param_1 + 0x20);
  uStack_b8 = *(ulong *)(param_1 + 0x38);
  uStack_c0 = *(ulong *)(param_1 + 0x30);
  uVar7 = local_d0 & 0xff;
  uVar3 = uVar7;
  FUN_1001a2f1c();
  if ((uVar4 & 1) == 0) {
    puVar9 = (undefined8 *)((ulong)&local_d0 | 8);
    puVar8 = (ulong *)(param_1 + 0x80);
    do {
      uVar4 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar4 + 0x40) = *(ulong *)(puVar2 + uVar4 + 0x40) | 1L << (uVar3 & 0x3f);
      *(char *)(*(long *)(puVar2 + 0x30) + uVar3) = (char)uVar7;
      puVar5 = (undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 0x58);
      uVar10 = *puVar9;
      uVar12 = puVar9[3];
      uVar11 = puVar9[2];
      puVar5[1] = puVar9[1];
      *puVar5 = uVar10;
      puVar5[3] = uVar12;
      puVar5[2] = uVar11;
      uVar11 = puVar9[5];
      uVar10 = puVar9[4];
      uVar13 = puVar9[7];
      uVar12 = puVar9[6];
      uVar15 = puVar9[9];
      uVar14 = puVar9[8];
      *(undefined1 *)(puVar5 + 10) = *(undefined1 *)(puVar9 + 10);
      puVar5[7] = uVar13;
      puVar5[6] = uVar12;
      puVar5[9] = uVar15;
      puVar5[8] = uVar14;
      puVar5[5] = uVar11;
      puVar5[4] = uVar10;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000cca00);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar6 = puVar6 + -1;
      if (puVar6 == (undefined *)0x0) {
        FUN_10007f314(&local_d0,auStack_130,&DAT_100a77608,&DAT_10080c268);
        return puVar2;
      }
      uVar4 = 0;
      FUN_10007f314(&local_d0,auStack_130,&DAT_100a77608,&DAT_10080c268);
      uStack_a8 = puVar8[5];
      local_b0 = puVar8[4];
      uStack_98 = puVar8[7];
      uStack_a0 = puVar8[6];
      local_90 = puVar8[8];
      uStack_88 = (undefined1)puVar8[9];
      uStack_7f = *(undefined8 *)((long)puVar8 + 0x51);
      uStack_87 = (undefined7)*(undefined8 *)((long)puVar8 + 0x49);
      uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)puVar8 + 0x49) >> 0x38);
      uStack_c8 = puVar8[1];
      local_d0 = *puVar8;
      uStack_b8 = puVar8[3];
      uStack_c0 = puVar8[2];
      uVar7 = local_d0 & 0xff;
      uVar3 = uVar7;
      FUN_1001a2f1c();
      puVar8 = puVar8 + 0xc;
    } while ((uVar4 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000cc9b0);
  (*pcVar1)();
}

