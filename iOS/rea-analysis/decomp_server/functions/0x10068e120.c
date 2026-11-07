// rea decompile_all
// name: FUN_10068e120
// address: 0x10068e120
// body: available
// range: 0x10068e120-0x10068e2cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10068e120(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_108 [72];
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  undefined7 uStack_88;
  undefined4 uStack_81;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  if (puVar7 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  FUN_100004bb4(&DAT_100ab9ff0,&DAT_10084dd78);
  puVar2 = puVar7;
  __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
  _swift_retain();
  uVar9 = *(ulong *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uStack_a8 = *(ulong *)(param_1 + 0x38);
  local_b0 = *(ulong *)(param_1 + 0x30);
  uStack_98 = *(ulong *)(param_1 + 0x48);
  local_a0 = *(ulong *)(param_1 + 0x40);
  local_90 = *(ulong *)(param_1 + 0x50);
  uStack_88 = (undefined7)*(undefined8 *)(param_1 + 0x58);
  uStack_81 = *(undefined4 *)(param_1 + 0x5f);
  local_c0 = uVar8;
  uStack_b8 = uVar9;
  FUN_10007f314(&local_c0,auStack_108,&DAT_100ab9fa0,&DAT_10084dd58);
  uVar3 = uVar8;
  uVar5 = uVar9;
  FUN_1001a2c70();
  if ((uVar5 & 1) == 0) {
    puVar4 = (ulong *)(param_1 + 0x68);
    do {
      uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) = *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << (uVar3 & 0x3f);
      puVar6 = (ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 0x10);
      *puVar6 = uVar8;
      puVar6[1] = uVar9;
      puVar6 = (ulong *)(*(long *)(puVar2 + 0x38) + uVar3 * 0x38);
      *(undefined4 *)((long)puVar6 + 0x2f) = uStack_81;
      puVar6[3] = uStack_98;
      puVar6[2] = local_a0;
      puVar6[5] = CONCAT17((undefined1)uStack_81,uStack_88);
      puVar6[4] = local_90;
      puVar6[1] = uStack_a8;
      *puVar6 = local_b0;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068e2cc);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined *)0x0) {
        _swift_release(puVar2);
        return puVar2;
      }
      uVar9 = puVar4[1];
      uVar8 = *puVar4;
      uStack_a8 = puVar4[3];
      local_b0 = puVar4[2];
      uStack_98 = puVar4[5];
      local_a0 = puVar4[4];
      local_90 = puVar4[6];
      uStack_88 = (undefined7)puVar4[7];
      uStack_81 = *(undefined4 *)((long)puVar4 + 0x3f);
      local_c0 = uVar8;
      uStack_b8 = uVar9;
      FUN_10007f314(&local_c0,auStack_108,&DAT_100ab9fa0,&DAT_10084dd58);
      uVar3 = uVar8;
      uVar5 = uVar9;
      FUN_1001a2c70();
      puVar4 = puVar4 + 9;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10068e290);
  (*pcVar1)();
}

