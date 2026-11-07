// rea decompile_all
// name: FUN_1007aeaa0
// address: 0x1007aeaa0
// body: available
// range: 0x1007aeaa0-0x1007aeb53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1007aeaa0(long param_1,char *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  
  if (param_2 != (char *)0x0) {
    uVar3 = *(ulong *)((*(ulong *)(param_1 + 0x20) & 0x7ffffffffff8) + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    puVar6 = *(uint **)(uVar3 + 0x30);
    if ((puVar6 != (uint *)0x0) && (uVar1 = puVar6[1], 0 < (int)uVar1)) {
      uVar7 = 0;
      puVar8 = puVar6 + 2;
      do {
        pcVar5 = *(char **)(puVar8 + 2);
        if ((pcVar5 != (char *)0x0) && (iVar2 = _strcmp(param_2,pcVar5), iVar2 == 0)) {
          uVar4 = *(undefined8 *)(puVar8 + 4);
          *param_3 = pcVar5;
          param_3[1] = uVar4;
          *(uint *)(param_3 + 2) = uVar7;
          return 1;
        }
        puVar8 = (uint *)((long)puVar8 + (ulong)*puVar6);
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
  }
  return 0;
}

