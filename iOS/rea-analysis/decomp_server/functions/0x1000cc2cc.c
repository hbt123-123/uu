// rea decompile_all
// name: FUN_1000cc2cc
// address: 0x1000cc2cc
// body: available
// range: 0x1000cc2cc-0x1000cc3db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1000cc2cc(ulong param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  ulong uVar5;
  code *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (puVar10 != (undefined *)0x0) {
    FUN_100004bb4(&DAT_100a763f8,&DAT_10080ac20);
    puVar7 = puVar10;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    puVar12 = (undefined8 *)(param_1 + 0x30);
    do {
      bVar4 = *(byte *)(puVar12 + -2);
      uVar2 = *(uint *)((long)puVar12 + -0xc);
      uVar5 = puVar12[-1];
      uVar3 = *(undefined4 *)((long)puVar12 + -4);
      uVar9 = puVar12[-1];
      uVar11 = *puVar12;
      param_1 = param_1 & 0xffffff00 | (ulong)bVar4 | (ulong)uVar2 << 0x20;
      uVar8 = param_1;
      FUN_1001a2d90();
      if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000cc3d8);
        (*pcVar6)();
      }
      uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar9 + 0x40) = *(ulong *)(puVar7 + uVar9 + 0x40) | 1L << (uVar8 & 0x3f);
      pbVar1 = (byte *)(*(long *)(puVar7 + 0x30) + uVar8 * 0x10);
      *pbVar1 = bVar4;
      *(uint *)(pbVar1 + 4) = uVar2;
      *(int *)(pbVar1 + 8) = (int)uVar5;
      *(undefined4 *)(pbVar1 + 0xc) = uVar3;
      *(undefined8 *)(*(long *)(puVar7 + 0x38) + uVar8 * 8) = uVar11;
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000cc3dc);
        (*pcVar6)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      puVar12 = puVar12 + 3;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
  }
  return puVar7;
}

