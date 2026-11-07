// rea decompile_all
// name: FUN_100099ca4
// address: 0x100099ca4
// body: available
// range: 0x100099ca4-0x100099d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100099ca4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,long param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_6 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar3 = (undefined8 *)(*(long *)(param_6 + 0x30) + param_1 * 0x18);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  puVar3[2] = param_4;
  puVar3 = (undefined8 *)(*(long *)(param_6 + 0x38) + param_1 * 0x48);
  *(undefined1 *)(puVar3 + 8) = *(undefined1 *)(param_5 + 8);
  uVar6 = param_5[4];
  uVar5 = param_5[7];
  uVar4 = param_5[6];
  puVar3[5] = param_5[5];
  puVar3[4] = uVar6;
  puVar3[7] = uVar5;
  puVar3[6] = uVar4;
  uVar4 = *param_5;
  uVar6 = param_5[3];
  uVar5 = param_5[2];
  puVar3[1] = param_5[1];
  *puVar3 = uVar4;
  puVar3[3] = uVar6;
  puVar3[2] = uVar5;
  if (!SCARRY8(*(long *)(param_6 + 0x10),1)) {
    *(long *)(param_6 + 0x10) = *(long *)(param_6 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100099d10);
  (*pcVar2)();
}

