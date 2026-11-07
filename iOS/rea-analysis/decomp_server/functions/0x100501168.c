// rea decompile_all
// name: FUN_100501168
// address: 0x100501168
// body: available
// range: 0x100501168-0x10050130b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100501168(undefined1 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 auStack_70 [32];
  
  lVar1 = *(long *)(unaff_x20 + 0x78) + -1;
  if (SBORROW8(*(long *)(unaff_x20 + 0x78),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005012bc);
    (*pcVar2)();
  }
  *(long *)(unaff_x20 + 0x78) = lVar1;
  if (lVar1 < 0) {
    uVar3 = 6;
  }
  else {
    param_1 = unaff_x20;
    (**(code **)(param_3 + 0x40))();
    if (unaff_x21 != 0) {
      return;
    }
    lVar1 = *(long *)(unaff_x20 + 0x78) + 1;
    if (SCARRY8(*(long *)(unaff_x20 + 0x78),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005012c0);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + 0x78) = lVar1;
    if (*(long *)(unaff_x20 + 0x68) < lVar1) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,&DAT_d00000000000003b,0x80000001008bc970,
                 "SwiftProtobuf/BinaryDecoder.swift",0x21,2,0x5e,0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050130c);
      (*pcVar2)();
    }
    if (*(long *)(unaff_x20 + 8) == 0) {
      uVar5 = *(ulong *)(unaff_x20 + 0x88);
      if (0xe < uVar5 >> 0x3c) {
        return;
      }
      uVar4 = *(undefined8 *)(unaff_x20 + 0x80);
      pcVar6 = *(code **)(param_3 + 0x38);
      FUN_100008184(uVar4,uVar5);
      pcVar2 = (code *)auStack_70;
      (*pcVar6)(pcVar2,param_2,param_3);
      __s10Foundation4DataV6appendyyACF(uVar4,uVar5);
      (*pcVar2)(auStack_70,0);
      FUN_100006cc8(uVar4,uVar5);
      return;
    }
    uVar3 = 0;
  }
  FUN_100506290();
  _swift_allocError(&DAT_1009cdf18,param_1,0,0);
  *param_1 = uVar3;
  _swift_willThrow();
  return;
}

