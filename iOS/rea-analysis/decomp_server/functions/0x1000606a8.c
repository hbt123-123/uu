// rea decompile_all
// name: FUN_1000606a8
// address: 0x1000606a8
// body: available
// range: 0x1000606a8-0x10006070f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000606a8(ulong param_1,undefined1 param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined1 *)(*(long *)(param_4 + 0x30) + param_1) = param_2;
  puVar3 = (undefined8 *)(*(long *)(param_4 + 0x38) + param_1 * 0x58);
  uVar4 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  puVar3[1] = param_3[1];
  *puVar3 = uVar4;
  puVar3[3] = uVar6;
  puVar3[2] = uVar5;
  *(undefined1 *)(puVar3 + 10) = *(undefined1 *)(param_3 + 10);
  uVar4 = param_3[6];
  uVar6 = param_3[9];
  uVar5 = param_3[8];
  puVar3[7] = param_3[7];
  puVar3[6] = uVar4;
  puVar3[9] = uVar6;
  puVar3[8] = uVar5;
  uVar4 = param_3[4];
  puVar3[5] = param_3[5];
  puVar3[4] = uVar4;
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100060710);
  (*pcVar2)();
}

