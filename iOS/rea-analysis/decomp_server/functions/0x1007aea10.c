// rea decompile_all
// name: FUN_1007aea10
// address: 0x1007aea10
// body: available
// range: 0x1007aea10-0x1007aea9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1007aea10(long param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  
  if (param_2 != 0) {
    uVar4 = *(ulong *)((*(ulong *)(param_1 + 0x20) & 0x7ffffffffff8) + 8);
    uVar5 = uVar4;
    if ((uVar4 & 1) != 0) {
      uVar5 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    if ((*(long *)(uVar5 + 0x30) != 0) &&
       (uVar2 = *(uint *)(*(long *)(uVar5 + 0x30) + 4), uVar2 != 0)) {
      if ((int)param_3 <= (int)uVar2) {
        uVar2 = param_3;
      }
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      if (0 < (int)uVar2) {
        uVar5 = 0;
        uVar3 = **(uint **)(uVar4 + 0x30);
        puVar6 = *(uint **)(uVar4 + 0x30) + 2;
        puVar7 = (undefined4 *)(param_2 + 0x10);
        do {
          uVar1 = *(undefined8 *)(puVar6 + 4);
          *(undefined8 *)(puVar7 + -4) = *(undefined8 *)(puVar6 + 2);
          *(undefined8 *)(puVar7 + -2) = uVar1;
          *puVar7 = (int)uVar5;
          uVar5 = uVar5 + 1;
          puVar6 = (uint *)((long)puVar6 + (ulong)uVar3);
          puVar7 = puVar7 + 6;
        } while (uVar2 != uVar5);
      }
      return (ulong)uVar2;
    }
  }
  return 0;
}

