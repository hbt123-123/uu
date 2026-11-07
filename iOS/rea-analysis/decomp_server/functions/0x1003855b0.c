// rea decompile_all
// name: FUN_1003855b0
// address: 0x1003855b0
// body: available
// range: 0x1003855b0-0x10038566f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003855b0(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar7 = *(long *)((long)param_1 + param_2 + -0x10);
  uVar10 = *param_1 + (lVar7 + param_2) * -0x3c5a37a36834ced9;
  lVar8 = param_1[3];
  uVar9 = uVar10 + param_1[1];
  uVar1 = uVar9 + param_1[2];
  uVar2 = *(long *)((long)param_1 + param_2 + -0x20) + param_1[2];
  uVar3 = *(long *)((long)param_1 + param_2 + -0x18) + uVar2;
  lVar4 = *(long *)((long)param_1 + param_2 + -8) + lVar8;
  uVar5 = lVar4 + uVar2;
  uVar6 = uVar3 + lVar7;
  lVar7 = (uVar9 >> 7 | uVar9 << 0x39) + (uVar10 >> 0x25 | uVar10 * 0x8000000) +
          (uVar10 + lVar8 >> 0x34 | (uVar10 + lVar8) * 0x1000) + (uVar1 >> 0x1f | uVar1 << 0x21);
  uVar9 = (uVar6 + lVar4 + lVar7) * -0x3c5a37a36834ced9 +
          (uVar1 + lVar8 + (uVar2 >> 0x25 | uVar2 * 0x8000000) + (uVar3 >> 7 | uVar3 << 0x39) +
                   (uVar5 >> 0x34 | uVar5 * 0x1000) + (uVar6 >> 0x1f | uVar6 << 0x21)) *
          -0x651e95c4d06fbfb1;
  uVar9 = lVar7 + (uVar9 ^ uVar9 >> 0x2f) * -0x3c5a37a36834ced9;
  return (uVar9 ^ uVar9 >> 0x2f) * -0x651e95c4d06fbfb1;
}

