// rea decompile_all
// name: FUN_1005b8e5c
// address: 0x1005b8e5c
// body: available
// range: 0x1005b8e5c-0x1005b9003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1005b8e5c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_128 [88];
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined2 local_80;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  if (puVar7 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  uVar5 = 0;
  FUN_100004bb4(&DAT_100aab9b0);
  puVar2 = puVar7;
  __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
  uStack_a8 = *(ulong *)(param_1 + 0x48);
  uStack_b0 = *(ulong *)(param_1 + 0x40);
  uStack_98 = *(ulong *)(param_1 + 0x58);
  local_a0 = *(ulong *)(param_1 + 0x50);
  uStack_88 = *(ulong *)(param_1 + 0x68);
  uStack_90 = *(ulong *)(param_1 + 0x60);
  local_80 = *(undefined2 *)(param_1 + 0x70);
  uStack_c8 = *(ulong *)(param_1 + 0x28);
  uVar10 = *(ulong *)(param_1 + 0x20);
  uStack_b8 = *(ulong *)(param_1 + 0x38);
  local_c0 = *(ulong *)(param_1 + 0x30);
  uVar3 = uVar10;
  local_d0 = uVar10;
  FUN_1003618e4();
  if ((uVar5 & 1) == 0) {
    puVar8 = (undefined8 *)((ulong)&local_d0 | 8);
    puVar9 = (ulong *)(param_1 + 0x78);
    do {
      uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) = *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar10;
      puVar6 = (undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 0x50);
      uVar11 = *puVar8;
      puVar6[1] = puVar8[1];
      *puVar6 = uVar11;
      uVar12 = puVar8[3];
      uVar11 = puVar8[2];
      uVar14 = puVar8[5];
      uVar13 = puVar8[4];
      uVar16 = puVar8[7];
      uVar15 = puVar8[6];
      uVar17 = *(undefined8 *)((long)puVar8 + 0x3a);
      *(undefined8 *)((long)puVar6 + 0x42) = *(undefined8 *)((long)puVar8 + 0x42);
      *(undefined8 *)((long)puVar6 + 0x3a) = uVar17;
      puVar6[5] = uVar14;
      puVar6[4] = uVar13;
      puVar6[7] = uVar16;
      puVar6[6] = uVar15;
      puVar6[3] = uVar12;
      puVar6[2] = uVar11;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b9004);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined *)0x0) {
        FUN_10007f314(&local_d0,auStack_128,&DAT_100aad240,&DAT_10083d630);
        return puVar2;
      }
      puVar4 = auStack_128;
      FUN_10007f314(&local_d0,puVar4,&DAT_100aad240,&DAT_10083d630);
      uStack_a8 = puVar9[5];
      uStack_b0 = puVar9[4];
      uStack_98 = puVar9[7];
      local_a0 = puVar9[6];
      uStack_88 = puVar9[9];
      uStack_90 = puVar9[8];
      local_80 = (undefined2)puVar9[10];
      uStack_c8 = puVar9[1];
      uVar10 = *puVar9;
      uStack_b8 = puVar9[3];
      local_c0 = puVar9[2];
      uVar3 = uVar10;
      local_d0 = uVar10;
      FUN_1003618e4();
      puVar9 = puVar9 + 0xb;
    } while (((ulong)puVar4 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b8fb4);
  (*pcVar1)();
}

