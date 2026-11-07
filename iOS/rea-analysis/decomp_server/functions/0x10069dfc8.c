// rea decompile_all
// name: FUN_10069dfc8
// address: 0x10069dfc8
// body: available
// range: 0x10069dfc8-0x10069e0ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10069dfc8(undefined8 param_1,undefined8 param_2,byte *param_3,byte *param_4,long *param_5,
                  uint *param_6,uint *param_7,undefined8 *param_8)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  while( true ) {
    if ((param_3 == param_4) || (param_6 == param_7)) {
      *param_5 = (long)param_3;
      *param_8 = param_6;
      return param_3 != param_4;
    }
    bVar1 = *param_3;
    if (((char)bVar1 < -0x40) || (uVar4 = (uint)bVar1, 0xfd < uVar4)) break;
    if ((char)bVar1 < '\0') {
      if ((uVar4 & 0xe0) == 0xc0) {
        uVar5 = 1;
      }
      else if ((uVar4 & 0xf0) == 0xe0) {
        uVar5 = 2;
      }
      else {
        uVar3 = 4;
        if ((uVar4 & 0xfc) != 0xf8) {
          uVar3 = 5;
        }
        uVar5 = 3;
        if ((uVar4 & 0xf8) != 0xf0) {
          uVar5 = uVar3;
        }
      }
      uVar4 = uVar4 - (&DAT_10084df98)[uVar5];
      param_3 = param_3 + 1;
      if (param_3 == param_4) {
        lVar6 = 1;
        bVar2 = true;
      }
      else {
        lVar6 = 1;
        do {
          if (-0x41 < (char)*param_3) goto LAB_10069e0f0;
          uVar4 = ((uint)*param_3 + uVar4 * 0x40) - 0x80;
          param_3 = param_3 + 1;
          bVar2 = uVar5 != (uint)lVar6;
          lVar6 = lVar6 + 1;
        } while ((bVar2) && (param_3 != param_4));
      }
      if ((param_3 == param_4) && (bVar2)) {
        *param_5 = (long)param_3 - lVar6;
        *param_8 = param_6;
        return true;
      }
    }
    else {
      param_3 = param_3 + 1;
    }
    *param_6 = uVar4;
    param_6 = param_6 + 1;
  }
LAB_10069e0f0:
  *param_5 = (long)param_3;
  *param_8 = param_6;
  return (bool)2;
}

