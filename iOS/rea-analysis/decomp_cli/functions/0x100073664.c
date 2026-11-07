// rea decompile_all
// name: FUN_100073664
// address: 0x100073664
// body: available
// range: 0x100073664-0x1000737bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100073664(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_1000f0748;
  if (puVar10 != (undefined *)0x0) {
    FUN_10000eb08(&DAT_100104510,&DAT_1000d4b70);
    puVar5 = puVar10;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_1000133cc(param_1,&local_c0,&DAT_100104518,&DAT_1000d4b78);
      uVar3 = local_b0;
      uVar2 = uStack_b8;
      uVar1 = local_c0;
      uVar6 = local_c0;
      uVar7 = uStack_b8;
      FUN_10008109c(local_c0,uStack_b8,local_b0);
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000737b8);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar8 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x18);
      *puVar8 = uVar1;
      puVar8[1] = uVar2;
      puVar8[2] = uVar3;
      puVar9 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x48);
      puVar9[1] = uStack_a0;
      *puVar9 = local_a8;
      *(undefined1 *)(puVar9 + 8) = local_68;
      puVar9[5] = uStack_80;
      puVar9[4] = local_88;
      puVar9[7] = uStack_70;
      puVar9[6] = local_78;
      puVar9[3] = uStack_90;
      puVar9[2] = local_98;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000737bc);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x60;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}

