// rea decompile_all
// name: FUN_100518b94
// address: 0x100518b94
// body: available
// range: 0x100518b94-0x100518d2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100518b94(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_48;
  ulong uStack_40;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    uVar3 = 0;
    goto LAB_100518c80;
  }
  uVar7 = (param_1 & 0x800000000000000) >> 0x3b;
  uVar5 = 4L << uVar7;
  uVar6 = 0xb;
  if (((uint)(param_2 >> 0x3c) & (uint)((param_1 & 0x800000000000000) == 0)) == 0) {
    uVar6 = 7;
  }
  uVar4 = uVar6 | uVar1 << 0x10;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar5 = 8;
  }
  if ((uVar6 & 0xc) == uVar5) {
    FUN_10000caa8(uVar4,param_1,param_2);
    if (uVar4 < 0x4000) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100518cc4);
      (*pcVar2)();
    }
    if ((param_2 >> 0x3c & 1) != 0) goto LAB_100518d00;
LAB_100518c08:
    uVar4 = (uVar4 & 0xffffffffffff0000) - 0xfffc;
    uVar7 = 1;
  }
  else {
    if ((param_2 >> 0x3c & 1) == 0) goto LAB_100518c08;
LAB_100518d00:
    if (uVar1 < uVar4 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100518d2c);
      (*pcVar2)();
    }
    __sSS8UTF8ViewV13_foreignIndex6beforeSS0D0VAF_tF(uVar4,param_1,param_2);
  }
  if ((uVar4 & 0xc) == 4L << uVar7) {
    FUN_10000caa8(uVar4,param_1,param_2);
  }
  uVar6 = uVar4 >> 0x10;
  if (uVar1 <= uVar6) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100518ce8);
    (*pcVar2)();
  }
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if ((param_1 >> 0x3c & 1) == 0) {
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
      }
      else {
        param_1 = (param_2 & 0xfffffffffffffff) + 0x20;
      }
      uVar3 = (uint)*(byte *)(param_1 + uVar6);
    }
    else {
      local_48 = param_1;
      uStack_40 = param_2 & 0xffffffffffffff;
      uVar3 = (uint)*(byte *)((long)&local_48 + uVar6);
    }
  }
  else {
    __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar4,param_1,param_2);
    uVar3 = (uint)uVar4;
  }
LAB_100518c80:
  return uVar3 & 0xff | (uint)(uVar1 == 0) << 8;
}

