// rea decompile_all
// name: FUN_10051bbf0
// address: 0x10051bbf0
// body: available
// range: 0x10051bbf0-0x10051bd7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10051bbf0(undefined8 ****param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 ****ppppuVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 ***local_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  uVar6 = (uint)((ulong)param_1 >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar6 = 1;
  }
  uVar7 = 4L << uVar6;
  uVar3 = 0xf;
  do {
    uVar8 = uVar3 >> 0xe;
    if (uVar8 == uVar1 * 4) break;
    uVar9 = uVar3 & 0xc;
    uVar5 = uVar3;
    if (uVar9 == uVar7) {
      FUN_10000caa8();
    }
    if (uVar1 <= uVar5 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10051bd78);
      (*pcVar2)();
    }
    if ((param_2 >> 0x3c & 1) == 0) {
      if ((param_2 >> 0x3d & 1) == 0) {
        ppppuVar4 = (undefined8 ****)((param_2 & 0xfffffffffffffff) + 0x20);
        if (((ulong)param_1 >> 0x3c & 1) == 0) {
          ppppuVar4 = param_1;
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
        }
      }
      else {
        local_70 = param_1;
        uStack_68 = param_2 & 0xffffffffffffff;
        ppppuVar4 = &local_70;
      }
      uVar6 = (uint)*(byte *)((long)ppppuVar4 + (uVar5 >> 0x10));
      if (uVar9 == uVar7) goto LAB_10051bd38;
LAB_10051bcdc:
      if ((param_2 >> 0x3c & 1) == 0) goto LAB_10051bc54;
LAB_10051bce0:
      if (uVar1 <= uVar3 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10051bd7c);
        (*pcVar2)();
      }
      __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
    }
    else {
      __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar5,param_1,param_2);
      uVar6 = (uint)uVar5;
      if (uVar9 != uVar7) goto LAB_10051bcdc;
LAB_10051bd38:
      FUN_10000caa8();
      if ((param_2 >> 0x3c & 1) != 0) goto LAB_10051bce0;
LAB_10051bc54:
      uVar3 = (uVar3 & 0xffffffffffff0000) + 0x10004;
    }
  } while ((uVar6 - 0x21 & 0xff) < 0x5e);
  return uVar8 == uVar1 * 4;
}

