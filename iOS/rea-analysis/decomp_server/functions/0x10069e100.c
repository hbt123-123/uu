// rea decompile_all
// name: FUN_10069e100
// address: 0x10069e100
// body: available
// range: 0x10069e100-0x10069e237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10069e100(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,
                  undefined8 *param_5,byte *param_6,byte *param_7,long *param_8)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  
  while( true ) {
    if ((param_3 == param_4) || (param_6 == param_7)) {
      *param_5 = param_3;
      *param_8 = (long)param_6;
      return param_3 != param_4;
    }
    uVar2 = *param_3;
    if ((int)uVar2 < 0x80) {
      uVar10 = 0;
    }
    else if (uVar2 < 0x800) {
      uVar10 = 1;
    }
    else if (uVar2 < 0x10000) {
      uVar10 = 2;
    }
    else {
      uVar8 = 4;
      if (uVar2 >> 0x1a != 0) {
        uVar8 = 5;
      }
      uVar10 = 3;
      if (0x1fffff < uVar2) {
        uVar10 = uVar8;
      }
    }
    iVar3 = 1 << (ulong)(uVar10 * 6 & 0x1f);
    cVar4 = '\0';
    if (iVar3 != 0) {
      cVar4 = (char)((int)uVar2 / iVar3);
    }
    pbVar6 = param_6 + 1;
    *param_6 = cVar4 + (char)(&DAT_10084df98)[uVar10];
    if ((uVar10 == 0) || (pbVar6 == param_7)) {
      lVar9 = 1;
    }
    else {
      lVar9 = -1;
      pbVar7 = pbVar6;
      uVar10 = uVar10 * 6;
      do {
        uVar10 = uVar10 - 6;
        iVar3 = 1 << (ulong)(uVar10 & 0x1f);
        iVar5 = 0;
        if (iVar3 != 0) {
          iVar5 = (int)*param_3 / iVar3;
        }
        bVar1 = (byte)iVar5 & 0x3f;
        if (-1 < -iVar5) {
          bVar1 = -((byte)-iVar5 & 0x3f);
        }
        pbVar6 = pbVar7 + 1;
        *pbVar7 = bVar1 ^ 0x80;
        lVar9 = lVar9 + -1;
      } while ((uVar10 != 0) && (pbVar7 = pbVar6, pbVar6 != param_7));
      lVar9 = -lVar9;
    }
    if (pbVar6 == param_7 && uVar10 != 0) break;
    param_3 = param_3 + 1;
    param_6 = pbVar6;
  }
  *param_5 = param_3;
  *param_8 = (long)pbVar6 - lVar9;
  return true;
}

