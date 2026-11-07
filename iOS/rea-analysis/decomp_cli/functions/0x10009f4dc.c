// rea decompile_all
// name: FUN_10009f4dc
// address: 0x10009f4dc
// body: available
// range: 0x10009f4dc-0x10009f5c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009f4dc(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_c0 [64];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  byte bStack_48;
  undefined1 local_41;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if ((long)uVar2 < (long)param_3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10009f5bc);
    (*pcVar1)();
  }
  if (-1 < (long)param_3) {
    if (uVar2 == param_3) {
      uVar5 = 0;
      uVar3 = 0;
      uVar6 = 0;
      bVar4 = 0;
      uVar2 = 0;
      uVar8 = 0;
      uVar7 = 0x7ffffff3e;
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      if (uVar2 <= param_3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10009f5c4);
        (*pcVar1)();
      }
      param_2 = param_2 + param_3 * 0x40;
      uStack_4f = (undefined7)*(undefined8 *)(param_2 + 0x51);
      bStack_48 = (byte)((ulong)*(undefined8 *)(param_2 + 0x51) >> 0x38);
      bVar4 = bStack_48;
      uStack_50 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x49) >> 0x38);
      uVar8 = *(undefined8 *)(param_2 + 0x38);
      uVar7 = *(undefined8 *)(param_2 + 0x30);
      uVar5 = *(undefined8 *)(param_2 + 0x48);
      uVar6 = *(undefined8 *)(param_2 + 0x40);
      local_58 = (undefined1)uVar5;
      uStack_57 = (undefined7)((ulong)uVar5 >> 8);
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      uVar9 = *(undefined8 *)(param_2 + 0x20);
      uVar3 = CONCAT71(uStack_4f,uStack_50);
      uVar2 = (ulong)bStack_48;
      local_41 = 0;
      local_80 = uVar9;
      uStack_78 = uVar10;
      local_70 = uVar7;
      uStack_68 = uVar8;
      local_60 = uVar6;
      FUN_10008efe8(&local_80,auStack_c0);
    }
    *param_1 = uVar5;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[4] = uVar10;
    param_1[3] = uVar9;
    param_1[6] = uVar8;
    param_1[5] = uVar7;
    param_1[7] = uVar6;
    param_1[8] = uVar5;
    param_1[9] = uVar3;
    *(byte *)(param_1 + 10) = bVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10009f5c0);
  (*pcVar1)();
}

