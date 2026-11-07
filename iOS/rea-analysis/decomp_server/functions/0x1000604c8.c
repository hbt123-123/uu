// rea decompile_all
// name: FUN_1000604c8
// address: 0x1000604c8
// body: available
// range: 0x1000604c8-0x10006054b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000604c8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  long lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined1 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = (char)param_2;
  *(int *)(puVar2 + 4) = (int)((ulong)param_2 >> 0x20);
  *(int *)(puVar2 + 8) = (int)param_3;
  *(int *)(puVar2 + 0xc) = (int)((ulong)param_3 >> 0x20);
  puVar4 = (undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 0xa0);
  uVar7 = param_4[8];
  uVar6 = param_4[0xb];
  uVar5 = param_4[10];
  puVar4[9] = param_4[9];
  puVar4[8] = uVar7;
  puVar4[0xb] = uVar6;
  puVar4[10] = uVar5;
  uVar7 = param_4[4];
  uVar6 = param_4[7];
  uVar5 = param_4[6];
  puVar4[5] = param_4[5];
  puVar4[4] = uVar7;
  puVar4[7] = uVar6;
  puVar4[6] = uVar5;
  uVar7 = param_4[0x10];
  uVar6 = param_4[0x13];
  uVar5 = param_4[0x12];
  puVar4[0x11] = param_4[0x11];
  puVar4[0x10] = uVar7;
  puVar4[0x13] = uVar6;
  puVar4[0x12] = uVar5;
  uVar7 = param_4[0xc];
  uVar6 = param_4[0xf];
  uVar5 = param_4[0xe];
  puVar4[0xd] = param_4[0xd];
  puVar4[0xc] = uVar7;
  puVar4[0xf] = uVar6;
  puVar4[0xe] = uVar5;
  uVar5 = *param_4;
  uVar7 = param_4[3];
  uVar6 = param_4[2];
  puVar4[1] = param_4[1];
  *puVar4 = uVar5;
  puVar4[3] = uVar7;
  puVar4[2] = uVar6;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10006054c);
  (*pcVar3)();
}

