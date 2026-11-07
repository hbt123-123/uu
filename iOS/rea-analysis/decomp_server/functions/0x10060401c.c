// rea decompile_all
// name: FUN_10060401c
// address: 0x10060401c
// body: available
// range: 0x10060401c-0x10060412f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10060401c(long param_1,undefined8 param_2,ulong param_3,code *param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  FUN_100004bb4(param_2);
  puVar3 = puVar8;
  __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
  uVar9 = (ulong)*(uint *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = uVar9;
  (*param_4)();
  if ((param_3 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar7 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x40) = *(ulong *)(puVar3 + uVar7 + 0x40) | 1L << (uVar4 & 0x3f);
      *(int *)(*(long *)(puVar3 + 0x30) + uVar4 * 4) = (int)uVar9;
      puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x38) + uVar4 * 0x10);
      *puVar1 = uVar10;
      puVar1[1] = uVar5;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100604130);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        _swift_bridgeObjectRetain();
        return puVar3;
      }
      uVar9 = (ulong)*(uint *)(puVar6 + -2);
      uVar10 = puVar6[-1];
      uVar5 = *puVar6;
      _swift_bridgeObjectRetain();
      uVar4 = uVar9;
      (*param_4)();
      puVar6 = puVar6 + 3;
    } while ((param_3 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006040fc);
  (*pcVar2)();
}

