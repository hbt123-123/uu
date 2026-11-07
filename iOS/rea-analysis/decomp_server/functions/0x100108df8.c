// rea decompile_all
// name: FUN_100108df8
// address: 0x100108df8
// body: available
// range: 0x100108df8-0x100108f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100108df8(undefined8 ****param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 ****ppppuVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 ***local_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    lVar7 = 0x1505;
  }
  else {
    uVar6 = (uint)((ulong)param_1 >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar6 = 1;
    }
    uVar9 = 4L << uVar6;
    lVar7 = 0x1505;
    uVar3 = 0xf;
    do {
      uVar10 = uVar3 & 0xc;
      uVar5 = uVar3;
      if (uVar10 == uVar9) {
        FUN_10000caa8();
      }
      if (uVar1 <= uVar5 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100108f7c);
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
        bVar8 = *(byte *)((long)ppppuVar4 + (uVar5 >> 0x10));
        if (uVar10 == uVar9) goto LAB_100108f3c;
LAB_100108ee0:
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_100108e64;
LAB_100108ee4:
        if (uVar1 <= uVar3 >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100108f80);
          (*pcVar2)();
        }
        __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
      }
      else {
        __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar5,param_1,param_2);
        bVar8 = (byte)uVar5;
        if (uVar10 != uVar9) goto LAB_100108ee0;
LAB_100108f3c:
        FUN_10000caa8();
        if ((param_2 >> 0x3c & 1) != 0) goto LAB_100108ee4;
LAB_100108e64:
        uVar3 = (uVar3 & 0xffffffffffff0000) + 0x10004;
      }
      lVar7 = lVar7 * 0x21 + (ulong)bVar8;
    } while (uVar1 * 4 - (uVar3 >> 0xe) != 0);
  }
  return lVar7;
}

