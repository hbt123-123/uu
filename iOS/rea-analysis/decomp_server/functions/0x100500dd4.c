// rea decompile_all
// name: FUN_100500dd4
// address: 0x100500dd4
// body: available
// range: 0x100500dd4-0x100500e87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100500dd4(byte *param_1,undefined8 param_2,uint param_3,ulong param_4,long param_5)

{
  uint uVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100500e88);
    (*pcVar2)();
  }
  uVar5 = (ulong)param_3;
  pbVar3 = param_1;
  uVar9 = uVar5;
  if (0x7f < param_3) {
    do {
      param_1 = pbVar3 + 1;
      *pbVar3 = (byte)uVar9 | 0x80;
      uVar5 = uVar9 >> 7;
      uVar8 = uVar9 >> 0xe;
      pbVar3 = param_1;
      uVar9 = uVar5;
    } while (uVar8 != 0);
  }
  pbVar3 = param_1 + 1;
  *param_1 = (byte)uVar5;
  pbVar4 = pbVar3;
  uVar9 = param_4;
  if (0x7f < param_4) {
    do {
      pbVar3 = pbVar4 + 1;
      *pbVar4 = (byte)uVar9 | 0x80;
      param_4 = uVar9 >> 7;
      uVar5 = uVar9 >> 0xe;
      pbVar4 = pbVar3;
      uVar9 = param_4;
    } while (uVar5 != 0);
  }
  *pbVar3 = (byte)param_4;
  lVar6 = *(long *)(param_5 + 0x10);
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      pbVar3 = pbVar3 + 1;
      uVar1 = *(uint *)(param_5 + 0x20 + lVar7 * 4);
      uVar9 = (ulong)(int)uVar1;
      pbVar4 = pbVar3;
      if (0x7f < uVar1) {
        do {
          pbVar3 = pbVar4 + 1;
          *pbVar4 = (byte)uVar9 | 0x80;
          uVar5 = uVar9 >> 0xe;
          uVar9 = uVar9 >> 7;
          pbVar4 = pbVar3;
        } while (uVar5 != 0);
      }
      lVar7 = lVar7 + 1;
      *pbVar3 = (byte)uVar9;
    } while (lVar7 != lVar6);
  }
  return;
}

