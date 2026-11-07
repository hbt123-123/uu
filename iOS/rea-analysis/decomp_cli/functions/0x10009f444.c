// rea decompile_all
// name: FUN_10009f444
// address: 0x10009f444
// body: available
// range: 0x10009f444-0x10009f4db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10009f444(long param_1,long param_2,uint param_3,long param_4,long param_5)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  undefined1 auVar7 [16];
  
  if ((param_3 >> 8 & 1) == 0) {
    lVar5 = *(long *)(param_4 + 0x10);
    if (lVar5 < param_5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10009f4d8);
      (*pcVar2)();
    }
    if (param_5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10009f4dc);
      (*pcVar2)();
    }
    pbVar6 = (byte *)(param_4 + param_5 * 0x40 + 0x58);
    while (uVar4 = (ulong)(lVar5 == param_5), lVar5 != param_5) {
      if (param_1 < *(long *)(pbVar6 + -0x10)) goto LAB_10009f4c4;
      if (*(long *)(pbVar6 + -0x10) == param_1) {
        bVar1 = *pbVar6;
        if ((param_3 & 1) == 0) {
          if (*(long *)(pbVar6 + -8) <= param_2) {
            bVar1 = 1;
          }
          if (bVar1 != 1) goto LAB_10009f4c4;
        }
        else if ((bVar1 & 1) == 0) goto LAB_10009f4c4;
      }
      pbVar6 = pbVar6 + 0x40;
      bVar3 = SCARRY8(param_5,1);
      param_5 = param_5 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10009f4d4);
        (*pcVar2)();
      }
    }
    param_5 = 0;
  }
  else {
    param_5 = 0;
    uVar4 = 1;
  }
LAB_10009f4c4:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = param_5;
  return auVar7;
}

