// rea decompile_all
// name: FUN_1005451f0
// address: 0x1005451f0
// body: available
// range: 0x1005451f0-0x100545387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005451f0(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 ***pppuVar6;
  uint uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined8 **local_68;
  ulong uStack_60;
  
  pppuVar6 = (undefined8 ***)*unaff_x20;
  uVar4 = unaff_x20[1];
  uVar1 = (ulong)pppuVar6 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  uVar3 = unaff_x20[2];
  uVar8 = uVar3 >> 0xe;
  if (uVar8 == uVar1 * 4) {
    uVar4 = 0;
    uVar7 = 0;
    goto LAB_100545330;
  }
  uVar7 = (uint)((ulong)pppuVar6 >> 0x3b) & 1;
  if ((uVar4 & 0x1000000000000000) == 0) {
    uVar7 = 1;
  }
  uVar9 = uVar3 & 0xc;
  uVar10 = 4L << uVar7;
  uVar5 = uVar3;
  if (uVar9 == uVar10) {
    FUN_10000caa8();
  }
  if (uVar1 <= uVar5 >> 0x10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005452d4);
    (*pcVar2)();
  }
  if ((uVar4 >> 0x3c & 1) == 0) {
    if ((uVar4 >> 0x3d & 1) == 0) {
      if (((ulong)pppuVar6 >> 0x3c & 1) == 0) {
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppuVar6,uVar4);
      }
      else {
        pppuVar6 = (undefined8 ***)((uVar4 & 0xfffffffffffffff) + 0x20);
      }
    }
    else {
      local_68 = pppuVar6;
      uStack_60 = uVar4 & 0xffffffffffffff;
      pppuVar6 = &local_68;
    }
    uVar7 = (uint)*(byte *)((long)pppuVar6 + (uVar5 >> 0x10));
    if (uVar9 != uVar10) goto LAB_1005452a0;
LAB_1005452f8:
    FUN_10000caa8();
    if ((uVar4 >> 0x3c & 1) != 0) goto LAB_100545310;
LAB_1005452a4:
    uVar3 = (uVar3 & 0xffffffffffff0000) + 0x10004;
  }
  else {
    __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar5);
    uVar7 = (uint)uVar5;
    if (uVar9 == uVar10) goto LAB_1005452f8;
LAB_1005452a0:
    if ((uVar4 >> 0x3c & 1) == 0) goto LAB_1005452a4;
LAB_100545310:
    if (uVar1 <= uVar3 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100545364);
      (*pcVar2)();
    }
    __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
  }
  unaff_x20[2] = uVar3;
  uVar4 = unaff_x20[3];
  if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100545360);
    (*pcVar2)();
  }
  unaff_x20[3] = uVar4 + 1;
LAB_100545330:
  auVar11._8_4_ = uVar7 & 0xff | (uint)(uVar8 == uVar1 * 4) << 8;
  auVar11._0_8_ = uVar4;
  auVar11._12_4_ = 0;
  return auVar11;
}

