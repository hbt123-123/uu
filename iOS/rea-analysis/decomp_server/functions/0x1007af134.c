// rea decompile_all
// name: FUN_1007af134
// address: 0x1007af134
// body: available
// range: 0x1007af134-0x1007af20b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007af134(ulong param_1,byte *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  
  uVar4 = param_1 >> 8;
  uVar3 = param_1 >> 4 & 0xf;
  uVar2 = (uint)uVar3;
  uVar1 = uVar2;
  if (param_3 <= (int)uVar2) {
    uVar1 = param_3 - 1;
  }
  uVar5 = (ulong)uVar1;
  if (uVar2 < 8) {
    pbVar6 = param_2;
    if (0 < (int)uVar1) {
      do {
        *pbVar6 = (byte)uVar4 & 0x7f;
        uVar4 = uVar4 >> 8;
        uVar5 = uVar5 - 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar5 != 0);
    }
  }
  else if (uVar2 < 10) {
    if (0 < (int)uVar1) {
      uVar2 = uVar2 * 6;
      pbVar6 = param_2;
      do {
        uVar2 = uVar2 - 6;
        *pbVar6 = "eilotrm.apdnsIc ufkMShjTRxgC4013bDNvwyUL2O856P-B79AFKEWV_zGJ/HYX"
                  [uVar4 >> ((ulong)uVar2 & 0x3f) & 0x3f];
        uVar5 = uVar5 - 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar5 != 0);
    }
  }
  else if (uVar2 < 0xc) {
    if (0 < (int)uVar1) {
      uVar2 = uVar2 * 5;
      pbVar6 = param_2;
      do {
        uVar2 = uVar2 - 5;
        *pbVar6 = "eilotrm.apdnsIc ufkMShjTRxgC4013bDNvwyUL2O856P-B79AFKEWV_zGJ/HYX"
                  [uVar4 >> ((ulong)uVar2 & 0x3f) & 0x1f];
        uVar5 = uVar5 - 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar5 != 0);
    }
  }
  else {
    *param_2 = 0;
  }
  param_2[uVar3] = 0;
  return;
}

